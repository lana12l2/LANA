while True: 
    a=input("시간을 초 단위로 입력하세요.")
    if a=='':                        #순서가 매우 중요! 인트처리 하기전에 미리 복사해저 저장해두기~
        break
    second=int(a)
    minute=second//60
    hour=minute//60
    if second<60:
        print(second,"초 입니다")
    else:
        second=second%60
        print(hour,"시",minute,"분",second,"초 입니다.")
    x=second


    
count=1   #와일문사용
summ=0
n=int(input("1부터n까지 더하기"))
while count<=n:
    summ+=count
    count+=1
print(summ)



summ=0       #포문 사용
n=int(input())
for i in range(n+1):
    summ+=i
print(summ)



limit=int(input())
count=0
summ=0
while summ<=limit:
    summ+=count
    count+=1

print(count,summ)




limit=int(input())
summ=0
count=1
while True:
    summ=summ+count
    count+=1
    if summ>limit:
        print(count-1,summ-count)
        break
        
def pelindrome(str):          #맞으면 트루, 틀리면 펄스 '반환'!!
    return str==str[::-1]
text=input("입력")
if pelindrome(text):
    print("yes")

def saleprice(price):
    result=price*(1-rate/100)
    return result
o=int(input())
saleprice(o)





















    
