from tkinter import *
import random
import time
tk=Tk()
canvas=Canvas(tk,width=500,height=500)
canvas.pack()
x1=250
y1=250
x2=260
y2=260
for i in range(10,240,5):
    canvas.create_arc(x1,y1,x2,y2,extent=359,style=ARC)
    canvas.delete('all')
    canvas.create_arc(x1-i,y1-i,x2+i,y2+i,extent=359,style=ARC)
    tk.update()
    time.sleep(0.05)
#print(1)
for i in range(240,10,-5):
    #canvas.create_arc(x1+i,y1+i,x2-i,y2-i,extent=359,style=ARC)
    canvas.delete('all')
    canvas.create_arc(x1+i,y1+i,x2-i,y2-i,extent=359,style=ARC)
    tk.update()
    time.sleep(0.05) 
    
