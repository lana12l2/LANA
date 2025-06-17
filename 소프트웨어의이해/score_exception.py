class InvalidException(Exception):
    pass

class BreakException(Exception):
    pass


def input_total():
    try:
        total=[]
        count=0
        maxlst=[]
        minlst=[]
        while True:
            try:
                score=int(input())
                if score==-1:
                    raise BreakException
                if score>100 or score<0:
                    raise InvalidException
                total.append(score)
                maxlst.append(score)
                minlst.append(score)
                count+=1
            except ValueError:
                print('잘못된 입력입니다. 다시 입력하세요')
            except InvalidException:
                print("유효한 점수가 아닙니다. 다시 입력하세요.")             
    except BreakException as e:  
        print('최고 점수:',max(maxlst))
        print('최저 점수',min(minlst))
        print('합계:',sum(total))
        print('평균:','%.2f'%(sum(total)/count))

print("점수 입력(종료:-1)")            
input_total()




























