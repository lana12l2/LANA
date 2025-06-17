m=float(input("과세 표준 금액 입력(만원 단위):"))
tax=0
if m<=1200:
    tax=m*0.06
elif m<=4600:
    tax=72+(m-1200)*0.15
elif m<=8800:
    tax=582+(m-4600)*0.24
elif m<=15000:
    tax=1590+(m-8800)*0.35
elif m<=30000:
    tax=3760+(m-15000)*0.38
elif m<=50000:
    tax=9460+(m-30000)*0.4
elif m<=100000:
    tax=17460+(m-50000)*0.42
else:
    tax=38460+(m-100000)*0.45
tax=int(tax)
print("근로소득세액:%d만원"%tax)
    
