import sys
sys.path.append("C:\Module")


engScore=[]
korScore=[]
line=[]

def read_file():
    f=open('score.txt')
    while True:
        line=f.readline()
        if len(line)==0:
            break
        line=line.strip()
        line=line.split()
        for i in range(len(line)):
            if i%2==0:
                korScore.append(int(line[i]))
            else:
                engScore.append(int(line[i]))
    f.close()
        
                  
read_file()
from mod1 import mean
from mod1 import median
print("\t국어  영어")
print("평균  ", mean(korScore, engScore))
print("중간값", median(korScore, engScore))




