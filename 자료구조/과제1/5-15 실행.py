#5-15
import random

class Node:
    def __init__(self, loc): 
        self.data = 0 #노드의 값
        self.loc = loc #위치
        self.rlink = None
        self.llink = None

class LinkedList:
    def __init__(self,size):
        self.size = size 
        self.order = 1 #플레이어 순서
        self.direction = 1 #기본 시계방향
        self.board = self.create_board(self.size) # 노드들을 개수만큼 생성
        self.player1 = self.board[0] #플레이어 위치 초기화
        self.player2 = self.board[self.size // 2]
        

    def create_board(self, size):
        nodes = [Node(i) for i in range(size)] #size만큼의 노드들을 원소로 가지는 리스트
        for i in range(size):
            nodes[i].rlink = nodes[(i + 1) % size] #반복하면서 노드를 연결하되 size로 나눠서 순환할수있도록 한다
            nodes[i].llink = nodes[(i - 1) % size]
        return nodes

    def move(self, player, steps): #player 가 step만큼 이동
        current = player
        for i in range(steps):
            if self.direction == 1:
                current = current.rlink  # 오른쪽으로 이동
            else:
                current = current.llink  # 왼쪽으로 이동
        return current #이동한 player객체 반환

    def forward(self, player, steps): #앞뒤 한칸 이동
        if player == self.player1:
            self.player1 = self.move(self.player1, steps)
        else:
            self.player2 = self.move(self.player2, steps)

    def backward(self, player, steps):
        if player == self.player1:
            self.player1 = self.move(self.player1, -steps)
        else:
            self.player2 = self.move(self.player2, -steps)

    def change_dir(self): #방향변환
        self.direction *= -1

    def change_player(self): #위치교환
        self.player1, self.player2 = self.player2, self.player1

    def minus(self):  # 노드 삭제
        if self.size <= 4:
            return

        delete_count = int(len(self.board) * 0.2) #삭제해야할 개수
        deleted = 0 #현재 0개삭제
        while deleted < delete_count: 
            node = random.choice(self.board) #랜덤으로 노드 선택
            if node in (self.player1, self.player2): #플레이어 자리에 포함되면 다시실행
                continue  

            node.llink.rlink = node.rlink #객체끼리 연결 변경
            node.rlink.llink = node.llink

            self.board.remove(node) #board에서 삭제
            deleted += 1

        self.size = self.size*0.8


    def end(self): #술래잡기성공 및 탈출
        return self.player1 == self.player2   #t/f반환

    def view(self): #게임판 보기
        display = []
        for node in self.board: #board의 노드를 순회하면서 0 1 2 출력
            if node == self.player1:
                display.append('1')
            elif node == self.player2:
                display.append('2')
            else:
                display.append('0')
        print("[", ' '.join(display), "]",end=' ')


x=int(input("노드 개수 입력"))
print("Game Start!") #실행
myboard = LinkedList(x)
print("player 초기 위치",end='         ')
myboard.view()
print("(방향 =>)")

while True:
    if myboard.end():
        print("%d player won!"%(3-myboard.order)) 
        break

    print(myboard.order,end=' ')
    dice1, dice2 = random.randint(1, 6), random.randint(1, 6)
    
    if myboard.order == 1: #player 1
        
        if dice1 == dice2: #주사위별 행동
            print((dice1,dice2),end=' ')
            if dice1 == 6:
                print("이동방향 전환 ",end=' ')
                myboard.change_dir()
            elif dice1 == 5:
                print("말의 위치 교환 ",end=' ')
                myboard.change_player()
                myboard.view()
                if myboard.direction == 1:
                    print("(방향 =>)")
                else:
                    print("(방향 <=)")
                myboard.order = 3 - myboard.order
                continue
            elif dice1 == 1:
                print("뒤로 한 칸 이동",end=' ')
                myboard.backward(myboard.player1, 1)
            elif dice1 == 4:
                print("노드 20% 삭제 ",end=' ')
                myboard.minus()
            else:
                myboard.forward(myboard.player1, dice1 + dice2)
                print("%d칸 전진"%(dice1+dice2),end="\t") 
        else:
            myboard.forward(myboard.player1, dice1 + dice2)
            print((dice1,dice2),"%d칸 전진"%(dice1+dice2),end="\t") 
    
    
    else: #player 2
        if dice1 == dice2:
            print((dice1,dice2),end=' ')
            if dice1 == 6:
                print("이동방향 전환 ",end=' ')
                myboard.change_dir()
            elif dice1 == 5:
                print("말의 위치 교환 ",end=' ')
                myboard.change_player()
                myboard.view()
                if myboard.direction == 1:
                    print("(방향 =>)")
                else:
                    print("(방향 <=)")
                myboard.order = 3 - myboard.order
                continue
            elif dice1 == 1:
                print("뒤로 한 칸 이동",end=' ')
                myboard.backward(myboard.player2, 1)
            elif dice1 == 4:
                print("노드 20% 삭제 ",end=' ')
                myboard.minus()
            else:
                myboard.forward(myboard.player2, dice1 + dice2)
                print("%d칸 전진"%(dice1+dice2),end="\t") 
        else:
            myboard.forward(myboard.player2, dice1 + dice2)
            print((dice1,dice2),"%d칸 전진"%(dice1+dice2),end="\t") 

   
    myboard.view()
    if myboard.direction==1:
        print("(방향 =>)")
    else:
        print("(방향 <=)")
    myboard.order = 3 - myboard.order


