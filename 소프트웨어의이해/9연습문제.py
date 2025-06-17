class notfount(Exception):
    def __str__(self):
        return "찾을 수 없습니다."
    pass




'''def get(key,dic):
    try:
        print(dic[key])
    except:
       print("찾을수없음")
x={'a':1,'b':2,'c':3}      
get('a',x)    #문자열로 키찾기.'''


def value_in_list(lst,value):
    try:
        for i in range(len(lst)):
            if lst[i]==value:
                return i
    except:
       return "None"   #리턴으로 하고 호출할때 프린트하기!

print(value_in_list([1,2,3,4,5],10))
