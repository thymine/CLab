class Parent():
    def __init__(self, last_name, eye_color):
        print("Parent constructor called.")
        self.last_name = last_name
        self.eye_color = eye_color

class Child(Parent):
    def __init__(self, last_name, eye_color, number_of_toys):
        print("Child constructor called.")
        Parent.__init__(self, last_name, eye_color)
        self.number_of_toys = number_of_toys

# bill_gates = Parent("Gates", "Blue")
# print(bill_gates.last_name)

jennifer_katharine_gates = Child("Gates", "Black", 0)
print(jennifer_katharine_gates.eye_color)
