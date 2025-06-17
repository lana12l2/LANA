import random
import easygui
# 교재 233쪽참고

y=str(random.randint(1111,9999))
count=10
strike=0
ball=0

while True:
    x=easygui.enterbox("1111~9999 사이입력") 

                                       #i,j변수 같이 써도 됨 피피티 46쪽
    for i in range(4):
        if x[i]==y[i] and x[i] in y:
            strike+=1
        if x[i] in y and x[i]!=y[i]:
            ball+=1
    print("스트라이크 %d개, 볼 %d 개"%(strike,ball))
    count=count-1
    if count==0 or y==x:
        break  
    ball=0
    strike=0
   # print(y)
    
print("정답:",y,"\n입력:",x,"\n판정: 스트라이크 %d개, 볼 %d 개"%(strike,ball))


