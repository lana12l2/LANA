import easygui
import random
while True:
    x=random.randint(1,100)
    k=x%2
    y=easygui.buttonbox("홀수 또는 짝수 선택(1~100)",choices=["홀수","짝수","종료"])
    if y=="종료":
         break
    if k==0:
        if y=="짝수":
            easygui.msgbox("정답")
        else:
            easygui.msgbox("땡")
    if k==1:
        if y=="짝수":
            easygui.msgbox("땡")
        else:
            easygui.msgbox("정답")
    
        
    
                  
