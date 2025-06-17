#answer=[]
def searchn(lst,key):
    answer=[]
    if not lst:
        return False
    elif lst[0]==key:        
            answer.append(0)
            searchn(lst[1:],key)
            return answer
    else:
         
        
        
        
        
#예제보다 두세줄 이상이 마지노선

print(searchn([2,2,3,3,4,5],2))
