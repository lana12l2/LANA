#list=[1,2,3,4,5,6,7,8,9]
#target=int(input("1-9입력:"))
#for index in range(len(list)):
    #if list[index]>=target:
        #print("%d번:%d"%((index+1),list[index])) #ppt4,23p


#list = [24.9, 29.3, 28.3, 29.9, 29.6, 32.5, 29.7, 26.3, 31.8, 34.3, 36.0, 28.0, 24.9, 31.4, 33.9, 28.9, 29.6, 24.8, 29.8, 31.2, 29.6, 31.7, 32.1, 24.4, 26.4, 30.0, 30.0, 31.2, 28.8, 33.1]
#maxday=0
#max=-100
#for index in range(len(list)):
    #if list[index]>max:
        #max=list[index]
        #maxday=index+1
#print("월의 최고기온- %d일:%.2f"%(maxday,max)) #ppt4,24 print는 최고 하나에 대해서만실행


#sum=0
#print("1부터n까지더하기")
#n=int(input("n?"))
#for count in range(1,n+1):
    #sum=sum+count
#print("합:%d"%sum)


#balance=0
#rate=0.003
#amount=10000
#for month in range(1,13):
    #balance=balance*(1+rate)
    #balance=balance+amount
    #print("%2.d개월 입금,현재금액 %10.2f원"%(month,balance))


#for fahr in range(0,101,10):
#    celsius=(fahr-32)*5/9
#    print("화씨 %3.d도는 섭씨 %7.2f도 입니다"%(fahr,celsius))

#for cel in range(-50,301,25):
#  fahr=cel*1.8+32
#    print("섭씨 %4.d도는 화씨 %7.2f도 입니다"%(cel,fahr))


count=1
sum=0
limit=1000
while sum+count<=limit:
    sum=sum+count
    count=count+1
print(sum,count-1,"까지")


count=1
sum=0
while sum<=limit:
    sum=sum+count
    count=count+1
print(sum-count,count-1) ##안되는거



print("1부터n까지 더하기")
n=int(input("n?"))
sum=0
x=1
while x<= n:
    sum=sum+x
    x=x+1
print(sum)
    
    
























    
      

        
