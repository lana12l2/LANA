'''try:
    x=int(input("숫자입력"))
    print(9/x)
except ZeroDivisionError as e:
    print('0으로 나눌수없어여',e)
except ValueError as e:
    print('정수입력하셈',e)'''   # 예외처리 기본, 나머지 개념도암기하기



'''r=[1,2,3,4]
try:
    x=int(input("인덱스입력"))
    y=int(input("나눌숫자입력"))
    print(r[x]/y)
except ZeroDivisionError as e:
    print("0으로나눌수없음",e)
except ValueError as e:
    print("잘못된값입력",e)
except IndexError as e:
    print("인덱스잘못입력",e)     
else:
    print("올바르게계산됨")
finally:
    print('예외처리문 수행완료')'''  #try-except-else-finally 문 구성


'''def c(x):
    return 10/x
def b(y):
    return c(y-1)
def a():
    return print(b(int(input())))
a()          ''' #헷갈림
  
'''def c(x):
    return 10/x
def b(y):
    return c(y-1)
def a():
    try:
        return print(b(int(input())))
    except:
        print('예외발생')
a()''' #위에서 수정한거임 a 에서 호출후 예외처리가능하게


class NegativeInputException(Exception):
    pass
    def __str__(self):  #중요
        return "음수 입력"
    
def inputtotal():
    try:
        total=0
        while True:
            try:
                score=int(input())
                if score<0:
                    raise NegativeInputException
                total=total+score
            except ValueError:
                print('정수입력')
           
    except NegativeInputException as e:
        print(e)
        return total
    
print(inputtotal())
            






































 





























