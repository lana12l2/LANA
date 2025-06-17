#3-6
def ispalindrome(string):  
    while(len(string)//2):
        if string[0]!=string[-1]:
            return False
        string.pop(0)
        string.pop(-1)
        ispalindrome(string)
    return True

string=input("문자열을 입력:\t")  
string=list(string)  #리스트로 변환해서 pop을 사용
ispalindrome(string)
if ispalindrome(string)==True:
    print("회문입니다.")
else:
    print("회문이 아닙니다.")



