from tkinter import *
import random
import time

class Frog:
    def __init__(self,canvas,car1,car2,car3,color):          #객체 생성시에 굳이 입력받지 않아도 자동으로 초기화해줘야 하는 값들이 많음. 생명, 점수 등등
        self.canvas=canvas
        self.car1=car1
        self.car2=car2
        self.car3=car3
        self.id=canvas.create_oval(10,10,50,50,fill='color')     #객체 지정 !!!!!
        self.canvas.move(self.id,250,420)
        self.x=0
        self.y=0
        self.step=60
        self.life=5
        self.score=0
        self.canvas_width=self.canvas.winfo_width()      #캔버스 넓이알아내기!!!
        self.canvas.bind_all('<KeyPress-Up>',self.move_up)
        self.canvas.bind_all('<KeyPress-Right>',self.move_right)
        self.canvas.bind-all('<KeyPress-Left>',self.move_left)
        canvas.create_text(90,40,text="score"+str(self.score))
        canvas.create_text(400,40,text="life"+str(self.life))
        
    def hit_car(self,pos):
        car_pos=self.canvas.coords(self.car1.id)
        if pos[2]>=car_pos[0] and pos[0]<=car_pos[2]:
            if pos[1]>=car_pos[1] and pos[1]<=car_pos[3]:
                return True
        car_pos=self.canvas.coords(self.car2.id)
        if pos[2]>=car_pos[0] and pos[0]<=car_pos[2]:
            if car_pos[1]<=pos[1]<=car_pos[3]:
                return True
        car_pos=self.canvas.coords(self.car3.id)
        if pos[2]>=car_pos[0] and pos[0]<=car_pos[2]:
            if pos[1]>=car_pos[1] and pos[1]<=car_pos[3]:
                return True
        return False          #위 세가지 상황이 아닌 경우에는 모두 false로 반환



    def draw(self):
        self.canvas.move(self.id,self.x,self.y)      #따로 파라미터 없고 걍 self.x  self.y씀
        self.x=0
        self.y=0
        pos=self.canvas.coords(self.id)    #위에 포스
        if pos[0]<=0:
            self.canvas.move(self.id,self.step/2,self.y)  #이동시키고 self.x 초기화
            self.x=0
        elif pos[2]>=self.canvas_width:
            self.canvas.move(self.id,-self.step/2,self.y)
            self.x=0
        elif pos[1]<60:   #목표지점 도달
            self.score+=10
            canvas.create_rectangle(10,10,200,60,outline=tk.cget('bg'),fill=tk.cget('bg'))  #상자로 가리고 
            canvas.create_text(90,40,text="score"+str(self.score))                        #그위에 덮어쓰기
            self.canvas.move(self.id,250-pos[0],420)
            if self.hit_car(pos)==True:   #self.hit_car(pos)임
                if self.life<0:
                    canvas.create_text(250,260,text="gameover")
                else:
                    canvas.create_rectangle(300,10,550,60,outline=tk.cget('bg'),fill=tk.cget('bg'))
                    canvas.create_text(400,40,text="life"+str(self.life))
                    self.canvas.move(self.id,250-pos[0],430-pos[1])

    def move_up(self,evt):
        self.y=-self.step
    def move_right(self,evt):
        self.x=self.step/2
    def move_left(self,evt):
        self.x=-self.step/2              ########self,evt이고 self.x에 self.step/2 대입하는방식



class Car:              #상속받은 클래스가 아니면 클래스 뒤에는 변수 쓰지 않는다.메소드에만 쓰는거임.
    def __init__(self,canvas,x,y,color,speed):
        self.canvas=canvas
        self.id=canvas.create_rectangle(10,10,100,60,fill=color)     #####객체 지정하고 self.id 만들기
        self.canvas.move(self.id,x,y)
        self.x=speed
        self.y=0
        self.speed=speed
    def draw(self):
        self.canvas.move(self.id,self.x,self.y)
        pos=self.canvas.coords(self.id)
        if pos[0]<=-100:
            self.canvas.move(self.id,600,0)
        elif pos[2]>=700:
            self.canvas.move(self.id,-700,0)


tk=Tk()
tk.title('Frog')
tk.resizable(0,0)
tk.wm_attributes("-topmost",1)
canvas=Canvas(tk,width=500,height=500)
canvas.pack()
tk.update()
car1=Car(canvas,10,60,"red",2)
car2=Car(canvas,500,180,"green",-3)
car3=Car(canvas,10,300,"yellow",1)
frog=Frog(canvas,car1,car2,car2,"blue")
while True:
    if frog.life>=0:
        car1.draw()
        car2.draw()
        car3.draw()
        frog.draw()
    tk.update_idletasks()
    tk.update()
    time.sleep(0.01)
    
            
        
        
        
                                            

        
        
            
            
        
        





































    
        
