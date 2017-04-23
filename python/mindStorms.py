import turtle

def main():
    window = turtle.Screen()
    window.bgcolor("red")

    brad = turtle.Turtle()  
    brad.shape("turtle")
    brad.color("yellow", "blue")
    brad.speed(7)

    step = 0
    while (step < 36):
        draw_square(brad)
        brad.right(10)
        step += 1
    
    # draw_circle()
    # draw_triangle()

    window.exitonclick()

def draw_square(brad):
    for i in range(0, 4):
        brad.forward(100)
        brad.right(90)

def draw_circle():
    angie = turtle.Turtle()
    angie.shape("turtle")
    angie.color("orange")
    angie.speed("slow")

    angie.circle(100)

def draw_triangle():
    lucia = turtle.Turtle()
    lucia.shape("turtle")
    lucia.color("green")
    lucia.speed("fast")

    lucia.forward(100)
    lucia.right(120)

    lucia.forward(100)
    lucia.right(120)

    lucia.forward(100)
    lucia.right(120)

main()
