class Parent():
    def __init__(self, last_name, eye_color):
        # print("Parent constructor called.")
        self.last_name = last_name
        self.eye_color = eye_color

    def show_info(self):
        print("Last Name - " + self.last_name)
        print("Eye Color - " + self.eye_color)

class Child(Parent):
    def __init__(self, last_name, eye_color, number_of_toys):
        # print("Child constructor called.")
        Parent.__init__(self, last_name, eye_color)
        self.number_of_toys = number_of_toys

    def show_info(self):
        print("Last Name - " + self.last_name)
        print("Eye Color - " + self.eye_color)
        print("Number of Toys - " + str(self.number_of_toys))

bill_gates = Parent("Gates", "Blue")
# print(bill_gates.last_name)
bill_gates.show_info()

jennifer_katharine_gates = Child("Gates", "Black", 0)
# print(jennifer_katharine_gates.eye_color)
jennifer_katharine_gates.show_info()
