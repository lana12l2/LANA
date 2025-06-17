def write_file():
    f=open('score.txt','w')
    for item in mymemo:
        msg=item+'\n'
        f.write(msg)
    f.close()

mymemo=[]
print('''국어와 영어 점수를 입력하세요(종료=ENTER)
예) 95 80''')
while True:
    s=input()
    if s=='':
        break
    mymemo.append(s)
write_file()
print('score.txt 저장 완료')
        
