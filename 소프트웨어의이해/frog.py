# Frog game
from tkinter import *
import random
import time

class Frog:
    def __init__(self, canvas, car1, car2, car3, color):
        self.canvas = canvas
        self.car1 = car1
        self.car2 = car2
        self.car3 = car3
        
        self.id = canvas.create_oval(10,10,50,50, fill= color)        
        self.canvas.move(self.id, 250, 420)    #암기
        self.x = 0
        self.y = 0
        self.step = 60
        self.score = 0
        self.life = 5
        self.canvas_width = self.canvas.winfo_width()
        self.canvas.bind_all('<KeyPress-Up>', self.move_up)
        self.canvas.bind_all('<KeyPress-Left>', self.move_left)   #self.canvas.bind_all("<Deypress-
        self.canvas.bind_all('<KeyPress-Right>', self.move_right)
        canvas.create_text(90,40,text = "score : "+str(self.score))
        canvas.create_text(400,40,text = "life : "+str(self.life))  #위치, 모든변수값 초기화
        
    def hit_car(self, pos):
        car_pos = self.canvas.coords(self.car1.id)   #coords함수이용하는거임
        if pos[2] >= car_pos[0] and pos[0] <= car_pos[2]:
            if pos[1] >= car_pos[1] and pos[1] <= car_pos[3]:
                return True   #충돌로간주

        car_pos = self.canvas.coords(self.car2.id)
        if pos[2] >= car_pos[0] and pos[0] <= car_pos[2]:
            if pos[1] >= car_pos[1] and pos[1] <= car_pos[3]:
                return True

        car_pos = self.canvas.coords(self.car3.id)
        if pos[2] >= car_pos[0] and pos[0] <= car_pos[2]:
            if pos[1] >= car_pos[1] and pos[1] <= car_pos[3]:
                return True
            
        return False
        
    def draw(self):    
        self.canvas.move(self.id, self.x, self.y)
        self.x = 0
        self.y = 0
        
        pos = self.canvas.coords(self.id)
        
        if pos[0] <=0:
            self.canvas.move(self.id, self.step/2, self.y)  #닿으면 새로운 위치로
            self.x = 0
        elif pos[2] >=self.canvas_width:
            self.canvas.move(self.id, -self.step/2, self.y)   #다시왼족으로가도록 새 위치로 바꿔
            self.x = 0
        elif pos[1] < 60:           #집도달
            self.score =self.score +10
            canvas.create_rectangle(10,10,200,60, outline=tk.cget("bg"), fill=tk.cget("bg"))  
            canvas.create_text(90,40,text = "score : "+str(self.score))               
            self.canvas.move(self.id, 250-pos[0],420)

        if self.hit_car(pos) == True :
            self.life = self.life -1
            print("you hit by car")   #쉘에나옴, create_text이용해서해야 캔버스에뜸
            time.sleep(1)
            
            if self.life <0:
                canvas.create_text(250,260, text = "G A M E  O V E R")
            else:    
                canvas.create_rectangle(300,10,550,60, outline=tk.cget("bg"), fill=tk.cget("bg"))    #숫자나 글씨 업데이트할때 겹치는거 방지하기위해
                canvas.create_text(400,40,text = "life : "+str(self.life))

                self.canvas.move(self.id, 250-pos[0],430-pos[1])   #위치지정
        
            
    def move_up(self, evt):   #방향메소드
        self.y = -self.step
            
    def move_left(self, evt):
        self.x = -self.step/2      #위아래로 60. 좌우로는 30씩 움직임 스텝이 60이므

    def move_right(self, evt):
        self.x = self.step/2
        
    def move_down(self,evt):
        self.y=self.step
        

class Car:
    def __init__(self, canvas, x, y, color, speed):
        self.canvas = canvas
        self.id = canvas.create_rectangle(10,10,100,60, fill = color)    #사각형으로 만들고 아이디로 받아오면 무브함수 쓸대 아이디 넣어주고 움직일수있음
        self.canvas.move(self.id, x, y)
        self.speed = speed
        self.x = speed
        self.y = 0    
        
    def draw(self):
        self.canvas.move(self.id, self.x, self.y)
        
        pos = self.canvas.coords(self.id)    #코드함수 부르면 위치가 불러와짐
        if pos[0] <=-100:
            self.canvas.move(self.id, 600, 0)
        elif pos[2] >=700:                            
            self.canvas.move(self.id, -700, 0)
def change_speed(evt):
    global game_speed              #현재상태 기억하는 것도필요, 노말 페스트 두개중에서 토글되게해도됨
    game_speed=game_speed*10.0
    if game_speed>100:
        game_speed=1
    print(game_speed)

    
tk = Tk()
tk.title("Frog")
tk.resizable(0,0)     
tk.wm_attributes("-topmost", 1)   #맨윙에 윈도우띄우
canvas = Canvas (tk, width=500,height=500) #, bd=0, bg=tk.cget("bg"), highlightthickness=0)

canvas.pack()
tk.update()
game_speed = 0.01

car1 = Car(canvas, 10,60, "red", 2)
car2 = Car(canvas, 500, 180, "green",-5)
car3 = Car(canvas, 10, 300, "yellow",3)

frog = Frog(canvas, car1, car2, car3, "blue")  #객체넘겨주기

canvas.bind_all('<space>',change_speed)

canvas.create_line(0,175,500,175 )
canvas.create_line(0,295,500,295 )
canvas.create_line(0,415,500,415 )
while 1:  
    if frog.life >= 0:
        car1.draw()
        car2.draw()
        car3.draw()       
        frog.draw()    
    tk.update_idletasks()
    tk.update()
    time.sleep(0.01)
    
    
