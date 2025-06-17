'''class Employee:
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
    def pay(self):
        return self.salary
class Manager(Employee):
    def __init__(self,name,salary,bonus):
        super().__init__(name,salary)    #!!!여기는 self 없고, 부모꺼 끌어오는과정!!
        self.bonus=bonus
    def pay(self):
        return self.salary+self.bonus
    def getbonus(self):
        return self.bonus
kim=Employee('kim',200)     #문자열로 이름 입력하는거 주의할 것.!!!!
lee=Manager('lee',200,100)
#super().__init__(salary,bonus)'''



'''from turtle import *
class my_turtle(Turtle):
    def setturtle(self,color):
        self.color(color)
        self.shape('turtle')  #이거두개는 Turtle에 있는 메소드임. .color,.shape
a=my_turtle()
b=my_turtle()
a.setturtle('red')
b.setturtle('blue')
b.left(180)
angle=75
a.speed(3)
b.speed(3)
for i in range(200):
    a.forward(i)
    b.forward(i)
    a.right(angle)
    b.right(angle)'''


class Person:
    def sleep(self):
        print("잠을잡니다")

class Student(Person):
    def study(self):
        print('공부를합니다')
    def play(self):
        print("큐티를합니다")
class Worker(Person):
    def work(self):
        print('일합니다.')
    def play(self):
        print('친구와놉니다')
class lana(Worker,Student):
    def smu(self):
        print('숙대에다닙니다.')
'''a=lana()
a.study()
a.sleep()
a.work()
a.smu()
a.play()'''
print(lana.mro())   #메소드 뒤에 ()붙이는거 잊지말기.
    





































    

