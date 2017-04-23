import turtle

def main():
    window = turtle.Screen()
    window.bgcolor("red")

    draw_square()
    draw_circle()
    draw_triangle()

    window.exitonclick()

def draw_square():
    brad = turtle.Turtle()
    brad.shape("turtle")
    brad.color("yellow", "blue")
    brad.speed(2)

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
