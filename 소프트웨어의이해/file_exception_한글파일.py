def read_file():
    lst=[]
    try:
        f = open(input(),encoding="UTF-8")     ##잘모르겠음 오류남..
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
