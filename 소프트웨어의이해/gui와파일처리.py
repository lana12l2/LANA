'''def read_line():
    f=open('i.txt')
    while True:
        line=f.readline()
        if len(line)==0:
            break
        line=line.strip()
        mymemo.append(line)
    f.close()
mymemo=[]
read_line()
for i in mymemo: 
    print(i)'''     #파일읽기  기본


'''filename=input()
f=open(filename)
num={}
for line in f:
    list=line.split()
    for word in list:         #딕셔너리 서치시 키값으로 서치함.
        if word in num:
            num[word]+=1
        else:
            num[word]=1
for word in num:
    print(word,num[word])'''      #파일 단어수찾기


'''def filecount():    #파일 줄, 단어, 문자수 찾기
    file=input()
    f=open(file)
    wc=0
    lc=0
    cc=0
    for line in f:
        lc+=1
        cc=cc+len(line)
        x=line.split()
        wc=wc+len(x)   #len 써줘야하는거 주의.
    return((lc,wc,cc))

print(filecount())'''    #위에가 리턴이라서 프린트 해줘야함.












































