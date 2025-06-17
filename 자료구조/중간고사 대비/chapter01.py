
def fibo(fb):  #피보나치
    a=0
    b=0
    while True:
        a,b=b,a+b
        if b>n:
            break
        fb.append(b)
n=100000
fb=[0,1]
fibo(fb)
print(fb)
print("# of fibos=",len(fb))



def find_prime(num): #소수찾기
    for i in range(2,num+1):
        prime=True
        for j in range(2,i):
            if i%j==0:
                prime=False
                break
        if prime:
            prime_list.append(i)
    print(prime_list)

prime_list=[]
find_prime(100) 
    


class Fraction: #분수객체생성
    def __init__(self,up,down):
        self.num=up
        self.den=down
    
    def gcd(self,a,b): #!!!중요!!! 암기하기
        while a%b!=0:
            a,b=b,a%b
        return b
