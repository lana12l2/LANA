최대=-100
최소=1000
total=0
count=0
s=1
print("점수 입력(종료:0)")
while True:
    s=int(input())
    total=total+s
    count+=1
    if s==0:
        count=count-1
        break
    if s>100 or s<0:
        print("1~100 정수를 다시 입력하세요(종료:0)")
        total=total-s
        count=count-1
    if s>=최대 and 1<=s<=100:
        최대=s
    if s<=최소 and 1<=s<=100:
        최소=s
print("최고 점수:",최대)
print("최저 점수:",최소)
print("합계:",total)
print("평균:","%.2f"%(total/count))
    
    


