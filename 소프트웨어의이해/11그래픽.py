'''from tkinter import *
tk=Tk()
canvas=Canvas(tk,width=500,height=500)
canvas.pack()
canvas.create_line(100,100,400,400)


from tkinter import *
tk=Tk()
canvas=Canvas(tk,width=500,height=500)
canvas.pack()
canvas.create_rectangle(100,100,400,400)


from tkinter import *
import random
tk=Tk()
canvas=Canvas(tk,width=500,height=500)
canvas.pack()
choices=['red','blue','green','purple','violet','orange']
for i in range(200):
    x1=random.randrange(400)
    y1=random.randrange(400)
    x2=x1+random.randrange(200)-100
    y2=y1+random.randrange(200)-100
    canvas.create_rectangle(x1,y1,x2,y2,fill=random.choice(choices))

from tkinter import *
import random
import time
tk=Tk()
canvas=Canvas(tk,width=500,height=500)
canvas.pack()
width=500
height=500
step=5
for i in range(10,250,step):
    x1=width/2-i
    y1=height/2-i
    x2=width/2+i
    y2=height/2+i
    canvas.create_arc(x1,y1,x2,y2,extent=170,style=CHORD)  #순서잘외워주기.
    #tk.update()        #이거없으면 최종결과만 나옴. 동심원은 맞는데 하나씩 그려지지 않음.
    time.sleep(0.05)


from tkinter import *
import time
tk=Tk()
canvas=Canvas(tk,width=500,height=500)
canvas.pack()
canvas.create_polygon(100,400,200,400,200,200,100,400)
for i in range(70):     
    canvas.move(1,0,-5)   #아이디는 자동임 여기선느 1임. 자동으로 붙여지는거 ㅇㅇ
    tk.update()
    time.sleep(0.05)'''



from tkinter import *
import time
tk=Tk()
canvas=Canvas(tk,width=600,height=600)
canvas.pack()
scores=[]
print("input 5 scores(0~100)")
for i in range(5):
    score=int(input("score"))
    scores.append(score)
k=0
for s in scores:
    if s>=90:
        color='green'
    elif 80<=s<90:
        color='blue'
    elif 60<=s<80:
        color='orange'
    else:
        color='red'
    x1=100
    y1=100+k
    x2=x1+s*3
    y2=y1+50       #높이가 50 100씩 밑으로 내려가게코딩.
    canvas.create_rectangle(x1,y1,x2,y2,fill=color)
    canvas.create_text(x2+40,y1+20,text=str(s))  #문자열 왼쪽상단지점 지정.
    k+=100       #이게있어야 밑으로 내려감!!
    tk.update()
    time.sleep(0.5)




    











































































                        
