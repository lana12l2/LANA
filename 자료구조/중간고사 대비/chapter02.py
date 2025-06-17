#



import random #주사위 비율계산
def throw_dice(count,n):
    for i in range(n):
        eye=random.randint (1,6)
        count[eye-1]+=1 #배열 0부터 시작해서

def calc(count):
    ratio=[]
    total=sum(count)
    for i in range(6):
        ratio.append(count[i]/total)
    return ratio


import copy #깊은 복사.원본변경 불가. 복제될때 아예 다른 메모리가 생성됨->변경시에도 복제된놈꺼에서 움직임
a=[[2,3,4,],5]
b=copy.deepcopy(a)
b[0][1]='f'
b[1]=7

#2-10 리스트의 생성
num1=[]
for i in range(5):
    num1.append(i)
num2=[i for i in range(5)]
num3=list(range(5))
print(num1)
print(num2)
print(num3)



#2-14 확장장 단어 출현 횟수에 따라 내림차순 정렬
sentence="Well, you did do me and you bet I felt it.  I tried to be chill, but you are so hot that I melted.  I fell right through the cracks, and now I am trying to get back.  Before the cool done run out, I will be giving it my bestest.  And nothing is going to stop me but divine intervention.  I reckon it is again my turn to win some or learn some."
words=sentence.lower()
words=words.split()
dic={}
for word in words:
    if word not in dic:
        dic[word]=0
    else:
        dic[word]+=1

#freq=list(dic.values()) #.value()는 리스트 아님님
freq=sorted(dic.items(),key=lambda x:x[1],reverse=True)
for word,count in freq:
        
    print(word,'%d'%count,end=' ')
    print()


