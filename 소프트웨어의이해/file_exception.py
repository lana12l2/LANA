def read_file():
    lst=[]
    try:
        f=open(input("텍스트 파일명 입력(확장자 포함):"))
        count=1
        while True:
            line=f.readline()
            if len(line)==0:
                break
            line=line.strip()
            line='%2d'%count+' '+line
            lst.append(line)
            count+=1
        for i in lst:
            msg=i+'\n'
            print(msg)
        print("파일의 끝입니다.")
        f.close()
    except FileNotFoundError as e:
        print(e)


read_file()



