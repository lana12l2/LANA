'''import time
for i in range(10):
    print(time.asctime())
    time.sleep(1)'''
from tkinter import *
import time
tk=Tk()
canvas=Canvas(tk,width=500,height=500)
canvas.pack()
canvas.configure(background='white')
while True:
    a=time.localtime()
    hour=a[3]
    min=a[4]
    sec=a[5]
    canvas.delete('all')    #새로 지워줘야 밑에서 또 쓸수있음
    myclock=str(hour)+":"+str(min)+":"+str(sec)
    canvas.create_text(250,250,text=myclock,font=("Arial",25))
    time.sleep(1)
    tk.update()  #이거 반영해줘야 나옴
