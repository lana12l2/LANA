from tkinter import *
import time
tk=Tk()
canvas=Canvas(tk,width=500,height=500)
a=time.localtime()
x=a[6]
if x==0:
    date="월"
elif x==1:
    date="화"
elif x==2:
    date="수"
elif x==3:
    date="목"
elif x==4:
    date="금"
elif x==5:
    date="토"
else:
    date="일"
mytime=str(a[0])+"년"+str(a[1])+"월"+str([2])+"일"+date
canvas.create_text(100,100,text=mytime,width=5)
