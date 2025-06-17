#2-10
class Fraction:  
    def __init__(self,up,down):
        self.num=up
        self.den=down

    def __str__(self):
        return (str(self.num)+"/"+str(self.den))  
    
    def gcd(self,a,b):
        while(a%b!=0):
            a,b=b,a%b
        return b
    
    def __add__(self,other):
        new_num=self.num*other.den+other.num*self.den
        new_den=self.den*other.den
        return Fraction(new_num,new_den).abbreviation()
    
    def __mul__(self,other):
        new_num=self.num*other.num
        new_den=self.den*other.den
        return Fraction(new_num,new_den).abbreviation()
    
    def abbreviation(self):   #약분
        common=self.gcd(self.num,self.den)
        return Fraction(self.num//common,self.den//common)
    
    def decimal_fraction(self,x): #소수->분수 변환
        count=0
        while(x%1!=0):  #소수점이 있을때까지 반복
            x=x*10
            count+=1
        num=int(x)  #정수로 변환해야 분자분모가 정수로 나옴(중요)
        den=10**count
        return Fraction(num,den).abbreviation() #약분해서 반환
    
print("1: 소수->분수  2:소수의 합-> 분수")
a=Fraction(1,1)   #분모분자가 1
if (int(input())==1):
    b=float(input("소수를 입력하세요: "))
    print(a.decimal_fraction(b))
else:
    x=float(input("첫번째소수를 입력하세요: "))
    y=float(input("두번째소수를 입력하세요: "))
    print(a.decimal_fraction(x+y))
