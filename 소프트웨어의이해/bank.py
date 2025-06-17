class Account:
    count=0
    def __init__(self,name,num,amount):
        self.__name=name
        self.__num=int(num)
        self.__amount=int(amount)
        self.__balance=0
        self.__balance+=self.__amount
        Account.count+=1
        self.__History=[]
        self.__History.append(('신규 %8d 원 잔액 %8d 원' %(amount,self.__balance)))
    def getBalance(self):
        return self.__balnace
    def deposit(self,amount):
        self.__balance+=amount
        print(amount,'원이 입금되었습니다.')
        self.__History.append(('입금 %8d 원 잔액 %8d 원'%(amount,self.__balance)))
        return self.__balance        #리턴한값 나중에프린트해주면됨
    def withdraw(self,amount):
        if self.__balance<amount:
            print("잔액이 부족합니다.")
        else:
            self.__balance-=amount
            print(amount,'원이 출금되었습니다.')
            self.__History.append(('출금 %8d 원 잔액 %8d 원'%(amount,self.__balance)))
            return self.__balance          
    def getHistory(self):
        print("계좌번호: ",self.__num," , "," 소유자: ",self.__name)
        for i in self.__History:
            print(i)                       #return self.__History로하고 밑에서 프린트해도실행됨
    def __str__(self):
        msg="계좌번호 : "+str(self.__num)+","+" 소유자 : "+str(self.__name)+","+" 잔액 = "+str(self.__balance)
        return msg

def menu():
    print("="*38)
    print(" "*9,"SOOKMYUNG BANK ATM")
    print("="*38)
    print("1. 신규 계좌 생성")
    print("2. 잔액 조회")
    print("3. 입금")
    print("4. 출금")
    print("5. 거래 내역 조회")
    print("6. 전체 계좌 조회")
    print("7. 종료")
    print('-'*40)


dic={}
while True:
    menu()
    a=int(input("선택 : "))
    if a==7:
        break
    if a==1:
        name=input("계좌 소유자 이름을 입력하세요 : ")
        while True:
            num=int(input("생성할 계좌 번호를 입력하세요 :"))     
            if num not in dic:
                amount=int(input("입금할 금액을 입력하세요 : "))
                dic[num]=Account(name,num,amount)
                print()
                print("[생성된 계좌 정보]")
                print(dic[num])
                break                          #msg사용
            else:
                print("사용할 수 없는 계좌 번호입니다. 다시 입력하세요.")
    if a==2:
        num=int(input("계좌 번호를 입력하세요:"))
        if num in dic:
            print(dic[num])
        else:
            print("해당 계좌가 없습니다.")
    if a==3:
        num=int(input("계좌 번호를 입력하세요:")) 
        if num not in dic:
            print("해당 계좌가 없습니다.")  
        else:
            amount=int(input("입금할 금액을 입력하세요: "))
            dic[num].deposit(amount)
    if a==4:
        num=int(input("계좌 번호를 입력하세요: ")) 
        if num not in dic:
            print('해당 계좌가 없습니다.')
        else:  
            amount=int(input("출금하실 금액을 입력하세요: "))
            dic[num].withdraw(amount)
               
    if a==5:
        num=int(input("계좌 번호를 입력하세요 : "))
        if num in dic.keys():
             dic[num].getHistory()                             #메소드 겟히스토리 에서 for i in self.__History:         print(i) 하고                                                #호출할때 if num in dic: 
        else:                                                                               #print(dic[num].getHistory()) 하면 끝에 none 이 붙음 !! 질문
            print("해당 계좌가 없습니다.")          
    if a==6:
        for i in dic.keys():      
            print(dic[i])        
        print('전체계좌수 =',Account.count)


        
        




























        

