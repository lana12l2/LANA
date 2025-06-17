from tkinter import *
import random
import time
tk=Tk()
canvas=Canvas(tk,width=500,height=500)
canvas.configure(background='white')
canvas.pack()
x=250
y=250
for i in range(10000):
    dice=random.randint(1,3)
    if dice==1:
        px=250
        py=50
        mycolor='red'
    elif dice==2:
        px=450
        py=450
        mycolor='green'
    else:
        px=50
        py=450
        mycolor='blue'
    x=(x+px)/2
    y=(y+py)/2
    canvas.create_line(x,y,x+1,y+1,fill=mycolor)    #점찍는건데 길이를 1로한 선그으면됨.
    tk.update()
    time.sleep(0.01)
    
