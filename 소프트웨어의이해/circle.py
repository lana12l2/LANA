import turtle
turtle.setup(width=500,height=500)
edges=50
length=600/50
angle=360/50
r=(600/3.14)/2
t=turtle.Pen()
t.pencolor('blue')
t.width(5)
t.speed(5)
t.up()   
t.left(90)
t.forward(r)
t.down()
t.right(90)
for i in range(edges):
    #t.up(r)
    t.forward(length)
    t.right(angle)
turtle.exitonclick()
