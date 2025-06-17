import random
import easygui  #까먹지말기
easygui.msgbox("~ 컴퓨터 속 미쿠와 가위바위보 !!!! 5판 3선승제 미쿠를 이겨라 ~")  
count=5
uw=0
cw=0
n=1

while True:
    user=easygui.buttonbox(" %d번째 판 "%n+"\n가위 바위 보 중 하나를 선택하세요",choices=["가위","바위","보"])
    if user=="가위":
        y=1
    elif user=="바위":
        y=2
    else:
        y=3
    for com in range(random.randint(1,3)):
        if com==1:
            x="가위"
        elif com==2:
            x="바위"
        else:
            x="보"
    if com==y:
        easygui.msgbox(" 모두 %s 를 냈습니다. 비겼습니다.시합횟수에는 적용되지 않습니다.\n컴퓨터 %d : %d 사용자"%(user,cw,uw))
    elif y==com+1:
        uw+=1
        count-=1
        n+=1
        easygui.msgbox("컴퓨터는 %s를 냈습니다. 당신이 이겼습니다.\n컴퓨터 %d : %d 사용자"%(x,cw,uw))
    elif y==com+2:
        cw+=1
        count-=1
        n+=1
        easygui.msgbox("컴퓨터는 %s를 냈습니다. 당신이 졌습니다.\n컴퓨터 %d : %d 사용자"%(x,cw,uw))
    if uw==3 or cw==3:
        easygui.msgbox("~경기종료~")
        break
    elif count==0:
        break
        
        
    
                  
