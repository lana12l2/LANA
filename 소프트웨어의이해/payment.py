price=float(input("음식 가격을 입력:"))
tax=price*(10.5/100)
tip=price*(15/100)
print("세금:%.2f"%tax) #2자리수까지 표현하기, 실수형이므로 %f사용
print("팁 금액:%.2f"%tip)
print("지불 총액:%.2f"%(tax+tip+price))
