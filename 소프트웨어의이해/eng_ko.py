def print_menu():
    print("========영한사전========")
    print("1.단어 추가 \n2.단어 조회/수정\n3.단어 삭제\n4.전체 단어 출력\n5.종료")
    print('='*24)
    
def show_word(dic):
    print()
    for eng,kor in dic.items():
        print('%-15s'%eng,kor)
        
        
def add_word(dic):
    print()
    while True:
        eng=input("단어를 입력하세요. 종료=[ENTER]: ")
        if eng=='':
            print_menu()
            break
        if eng in dic:
            print("이미 존재하는 단어입니다.")
        else:
            kor=input("뜻을 입력하세요:")
            dic[eng]=kor
            
        
def edit_word(dic):
    print()
    x=input("조회할 단어를 입력하세요 종료=[ENTER]:")
    #if x in dic:
     #   print("단어:",x)
      #  print("뜻:",dic[x])
    if x not in dic:
        print("%s은(는) 사전에 존재하지 않습니다."%x)
        print_menu()
    if x in dic:
        print("단어:",x)
        print("뜻:",dic[x])
        while True:
            z=input("수정하시겠습니까? (y/n):")
            if z!="y":
                print("잘못된 입력입니다.")
            if z=="y":
                print("단어:",x)
                dic[x]=input("뜻:")
                print("수정되었습니다.")
                print_menu()
                break
            elif z=="n":
                print_menu()
                break

            
            
def delete_word(dic):
    print()
    y=input("삭제할 단어를 입력하세요. 종료=[ENTER]:")
    if y in dic:
        del dic[y]
        print("%s가 삭제되었습니다."%y)
    else:
        print("%s은(는) 사전에 존재하지 않습니다."%y)
    print_menu()
dic={}
print_menu()
while True:
    menu=int(input("선택:"))
    if menu>5 or menu<1:
        print()
        print("메뉴를 다시 선택해주세요.")
        print_menu()
    if menu==1:
        add_word(dic)
    elif menu==2:
        edit_word(dic)
    elif menu==3:
        delete_word(dic)
    elif menu==4:
        show_word(dic)
        print_menu()
    if menu==5:
        break




    
