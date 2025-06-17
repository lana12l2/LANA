'''class Phone:
    def __init__(self,name,num):
        self.name=name
        self.num=num
    def find_number(self,name):     #self 뒤 변수가 있으면 메소드 실행시 반드시 매개변수에 해당하는 값 넣고 실행해야 됨. 셀프만 있으면 find_number(), 여기는 find_number(search)
        return  self.num

dic={}
while True:   
    myname=input("이름입력")
    if myname=='':
        break
    mynumber=input('번호입력, 10으로시작')
    dic[myname]=Phone(myname,mynumber)
   
search=input("번호를 찾으려면 이름입력")
print(dic[search].find_number(search))'''  #10번



'''class Shape:
    def __init__(self,height,width):
        self.height=float(height)
        self.width=float(width)
    def setheight(self):
        return self.height    #원, 직사각형, 삼각형들이 계산할때 쓸 메소드가 필요해서 세팅 해줘야 함.
    def selfwidth(self):
        return self.width
    
class Triangle(Shape):
    def __init__(self,height,width):
        super().__init__(self,height,width)
    def cal_Tri(self):                   #안 매개변수에 주의하기.
        return setheight()*setwidth()/2
    
class Circle(Shape):
    def __init__(self,r):
        self.r=float(r)
        
    def cal_Cir(self):
        return (self.r)*self.r*3.14
    
class Rect(Shape):
    def __init__(self,height,width):
        super().__init__(self,height,width)
    def cal_Rec(self):
        return setheight()*setwidth()
        
a=Triangle(10,20)
a.cal_Tri()'''  #12번 미완


'''import math
class Complex:
    def __init__(self,real,imagine):
        self.real=real
        self.imagine=imagine
    def i(self):
        return complex(self.real,self.imagine)
    def plus(self,real,imagine):
        self.real+=real
        self.imagine+=imagine
        return complex(self.real,self.imagine)
    def minus(self,real,imagine):
        self.real-=real
        self.imagine-=imagine
        return complex(self.real,self.imagine)
    def multiple(self,real,imagine):
        x=self.real*real
        y=self.imagine*imagine
        return complex(x,y)
    def division(self,real,imagine):
        x=self.real/real
        y=self.imagine/imagine
        return complex(x,y)
    
k=Complex(1,2)
print(k.division(2,3))'''       #11번


'''class Grade:
    def __init__(self,eng,math,sci):
        self.eng=eng
        self.math=math
        self.sci=sci
        
    def total(self):
        return self.eng+self.math+self.sci
    def mean(self):
        return (self.eng+self.math+self.sci)/3
    
k1=Grade(100,90,60)
print(k1.total())
print(k1.mean())'''    #13번


class Person:
    def __init__(self,name):
        self.name=name
    def eat(self):
        print("밥을먹는다")
        
class Student(Person):
    def school(self):
        print("학교에간다")
        
class Univ_st(Student):
    
    def QT(self):
        print("큐티를하다")
        
class Woman(Person):
    def __init__(self,name,tool):   #여기에는 필요한거 셀프까지 다
        super().__init__(name)   #여기에는 부모클래스에서 가져올것만 셀프빼고
        self.tool=tool      #여기는 새로추가할것만
    def makeup(self):
        print(self.tool,"화장을하다")
        
class W_U(Univ_st,Woman):
    def meeting(self):
        print("미팅을하다")


a=W_U('lana','lip')
a.meeting()
a.QT()
a.makeup()
a.eat()
a.school()
a.meeting()    #14 15


        




































        
        
        








































