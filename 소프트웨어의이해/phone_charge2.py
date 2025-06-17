call=int(input("음성 통화 시간(초):"))
m=int(input("문자 건수:"))
data=int(input("데이터 사용량(MB):"))
default=37400
add=0
if call<=120*60 and call>0 and m<=200 and data<=1024:
    add=0
if call>7200:
    add+=(call-7200)*1.98
if m>200:
    add+=(m-200)*22
if data>1024:
    add+=(data-1024)*55
total=default+add
add=int(add)
total=int(total)
add=format(add,',')
total=format(total,',')
print("초과 요금:%s원"%add)
print("총 이용 요금:%s원"%total)
