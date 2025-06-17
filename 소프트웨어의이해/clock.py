from tkinter import *
import time
import math

tk = Tk()
canvas = Canvas (tk, width=500,height=500)
canvas.configure(background='white')
canvas.pack()

width = 500
height = 500
cx = width/2
cy = height/2
sr = height /2 - 50   #초침
mr = height /2 - 80  #분침
hr = height /2 - 110  #시침
tr=height/2-10    #눈금생성

while 1:
    t = time.localtime()       
    
    hour = (t[3] + t[4]/60)* 30    #1시간이 30도이므로
    minute = (t[4] + t[5]/60)*6    #1분이 6도이므로
    second = t[5]*6          #현재 초를 각도로 변환

    canvas.delete("all")
    canvas.create_arc(10,10,width-10,height-10, extent=359,style=CHORD, width = 2)  #반지름 240
    
    hx = hr * math.sin(hour/360 * 3.14*2)
    hy = hr * math.cos(hour/360 * 3.14*2)
    canvas.create_line(cx, cy, cx+hx, cy-hy, fill='Blue', width = 10)    
    mx = mr * math.sin(minute/360 * 3.14*2)
    my = mr * math.cos(minute/360 * 3.14*2)

    canvas.create_line(cx, cy, cx+mx, cy-my, fill='Green', width = 6)
    
    sx = sr * math.sin(second/360 * 3.14*2)
    sy = sr * math.cos(second/360 * 3.14*2)
    
    canvas.create_line(cx, cy, cx+sx, cy-sy, fill='Red', width = 2)
    canvas.create_arc(cx-10, cy-10, cx+10, cy+10, extent=359,style=CHORD, width = 2,fill='black')
    tk.update()
    time.sleep(0.05)
    

    '''for i in range(1,13):
        angle=i*30
        x_start=cx+tr*math.sin(math.radians(angle))
        y_start=cy-tr*math.cos(math.radians(angle))
        x_end=cx+(tr-20)*math.sin(math.radians(angle))
        y_end=cy-(tr-20)*math.cos(math.radians(angle))
        canvas.create_line(x_start,y_start,x_end,y_end,width=5)

        num=str(i)
        num_start=cx+(tr-40)*math.sin(math.radians(angle))
        num_end=cy-(tr-40)*math.cos(math.radians(angle))
        canvas.create_text(num_start,num_end,text=num,font=("Arial",15))
    tk.update()
    time.sleep(1)'''      #윤아가알려준거

    for i in range(0,360,6):
        angle=math.radians(i)            #########라디안 써야됨!!!!!!!!!!!!
        val_sin=math.sin(angle)
        val_cos=math.cos(angle)
        if i%5==0:
            canvas.create_line(250+225*val_sin,250-225*val_cos,250+240*val_sin,250-240*val_cos,width=4)
        else:
            canvas.create_line(250+230*val_sin,250-230*val_cos,250+240*val_sin,250-240*val_cos,width=1)
    tk.update()































