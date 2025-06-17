#2-17

score=[]
total=0

def add_this_frame(score,a,b): #이번 프레임의 점수를 기록하고 스트라이크나 스페어일 때를 알려줌
    if a+b>10:
        print("잘못된 점수입니다.")
    if a==10: #strike
        b=0
        score.append([a,b,'/',10])
       
    elif a+b==10: #spare
        score.append([a,b,'/',10])
      
    else:
        score.append([a,b,'-',a+b])

for i in range(9):
    first,second=map(int,input("%d프레임:"%(i+1)).split())
    add_this_frame(score,first,second)
    total+=first+second

    if i>0:
          if score[i-1][0]==10: #이전프레임이 스트라이크
                if first==10: #현재프레임도 스트라이크
                      score[i-1][3]+=10
                      total+=10
                else:
                      score[i-1][3]+=first+second
                      total+=first+second
          elif score[i-1][1]+score[i-1][0]==10 and score[i-1][0]!=10: 
                total+=first
                score[i-1][3]+=first
    if i>1:
          if score[i-2][0]==10 and score[i-1][0]==10:
                score[i-2][3]+=10
                total+=10
    
    print([tuple(frame) for frame in score])
    print("total=%d"%total)


        
print("(입력) %d프레임"%10) #10프레임일때의 이전 프레임 스트라이크 스페어 계산
first,second=map(int,input("%d프레임:"%10).split())
total+=first+second

if first==10: #10프레임 추가
            bonus1,bonus2=map(int,input("추가던지기 2회:").split())
            total+=bonus1+bonus2
            score.append([first,0,'/',first+bonus1+bonus2])
elif first+second==10:
            bonus1=int(input("추가던지기 1회"))
            total+=bonus1
            score.append([first,second,'/',first+second+bonus1])
else:
            score.append([first,second,'-',first+second])


if score[8][0]==10: #앞선 프레임 스트라이크 계산
                if first==10: 
                      score[8][3]+=first+bonus1
                      total+=first+bonus1
                else:
                      score[8][3]+=first+second
                      total+=first+second
elif score[8][1]+score[8][0]==10:
                total+=first
                score[8][3]+=first
    
if score[7][0]==10 and score[8][0]==10:
                score[7][3]+=10
                total+=10



print([tuple(frame) for frame in score])
print("Total=%d"%total)





    