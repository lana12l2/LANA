call=float(input("음성 통화 시간(초)를 입력하세요:"))
call=int(call*1.98)
data=float(input("데이터 사용량(MB)를 입력하세요:"))
data=int(data*55)
default=12100
total=default+call+data
default=format(default,',')
call=format(call,',')
data=format(data,',')
total=format(total,',')
print("기본 요금: %s원"%default)  #문자열로 변환했으므로 %s사용
print("음성 통화 요금: %s원"%call)
print("데이터 사용 요금: %s원"%data)
print("총 이용 요금: %s원"%total)

