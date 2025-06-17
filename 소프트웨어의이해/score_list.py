lst=[]
count=0
while True:
    n=input("숫자를 입력해주세요. 종료=[ENTER]:")
    if n!='':
        num=int(n)
        lst.append(num)
        count+=1   
    if count==0 and n=='':
        print("숫자가 존재하지 않습니다.")     #조건끼리의 순서 주의하기!!
        break
    if n=='':
        lst.sort()
        최대값=lst[count-1]
        최소값=lst[0]
        if count%2!=0:
            중간값=lst[(count-1)//2]
        elif count%2==0:
            중간값=(lst[(count//2)-1]+lst[count//2])/2
        print(lst)
        print("최대값:",최대값)
        print("최소값:",최소값)
        print("중간값:",중간값)
        break


        
    

    
#0 1 2 3
 #2 3 4 5 6 7 카운트6 인덱스 2,3
    # 1 2 3 4 5 카운트 5 인덱스 2
    
