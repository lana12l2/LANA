import turtle
turtle.setup(width=500,height=500)
t=turtle.Pen()
t.pencolor('red')
t.width(3)
#t.setheading(60)
for i in range(0,301,8):
    t.forward(i)
    t.left(120)
