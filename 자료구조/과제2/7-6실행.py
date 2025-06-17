#링크드 최대힙
'''
연결리스트에 최대 힙을 표현하는 linked max heap을 구현하시오.
다음 예시의 입력값들을 하나씩 추가하여 최대힙을 구성하여 출력하고, 최대값(루트)를 하나씩 삭
제하는 과정을 보이시오.

<예시>
- 7-6 예시 [10, 20, 30, 40, 56, 35, 60, 70, 85]
- 연습문제 7-1 입력값 [25,30,17,14,49,66,23,39]
- 193쪽, 예제 입력값 [15,20,8,30,18,48,35]

<기능>
1. 노드 추가 : 마지막 노드 다음 위치에 추가한 후 최대힙을 재구성한다.
(중복 값이 없는 경우에만 추가)
2. 노드 삭제(루트 삭제) : 루트 삭제 후 마지막 노드가 대신한 후 힙 재구성한다.
3. 노드 추가 또는 삭제 연산 후 최종 최대힙의 모든 노드 값 postorder로 출력한다
'''
class Node:
    def __init__(self,item):
        self.llink=None
        self.data=item
        self.parent=None
        self.rlink=None
  
    
class Heap:
    def __init__(self):
        self.head=Node(0)
        self.head.llink=self.head
        self.head.rlink=self.head

    def isempty(self):
        if self.head.rlink==self.head:
            return True
        else:
            return False
    
    def heap_up(self,child):
        while child.parent and child.parent!=self.head and child.data>child.parent.data:
            #print(f" swap: {child.data} ↔ {child.parent.data}")
            child.data,child.parent.data=child.parent.data,child.data
            child=child.parent
            
    def heap_down(self,parent):
        while parent and parent!=self.head:
            left=parent.llink
            right=parent.rlink
            max_child=None

            if left and left != self.head and right and right != self.head:
                max_child = left if left.data > right.data else right
            elif left and left != self.head:
                max_child = left
            elif right and right != self.head:
                max_child = right
            else:
                break

            if parent.data < max_child.data:
                parent.data, max_child.data = max_child.data, parent.data
                parent = max_child
            else:
                break


    def view(self,start): #postorder
        if self.isempty():
            print("빈 heap입니다\n")
            return
        if start is None or start==self.head:
            return
        self.view(start.llink)
        self.view(start.rlink)
        print(start.data,end=" ")


    
    def search(self, item):
        if self.isempty():
            return None
        queue = [self.head.llink]
        while queue:
            current = queue.pop(0)
            if current==self.head:
                continue
            if current.data == item:
                return current
            if current.llink and current.llink!=self.head:
                queue.append(current.llink)
            if current.rlink and current.rlink!=self.head:
                queue.append(current.rlink)
        return None

        

    def add_heap(self,item):
        print(f"{item}노드를 추가합니다")
        if self.search(item):
            print("중복된 값입니다")
            return
        new_node=Node(item)  #주의: self.new아님.. 메소드안에서만 사용하는 변수new
        queue=[]
        if self.isempty():
            self.head.llink=new_node
            self.head.rlink=new_node
            new_node.parent=self.head
        else:
            queue.append(self.head.llink)
            while queue:
                current=queue.pop(0)
                if not current.llink:
                    current.llink=new_node
                    new_node.parent=current
                    self.head.rlink=new_node
                    break
                elif not current.rlink:
                    current.rlink=new_node
                    new_node.parent=current
                    self.head.rlink=new_node
                    break
                else:
                    queue.append(current.llink)
                    queue.append(current.rlink)
        self.head.data+=1
        self.heap_up(new_node)
        self.view(self.head.llink)
        print()
    
    

    def delete_heap(self): #루트 삭제
        if self.head.llink==self.head: #헤드노드는 삭제하면안됨
            return
        if self.isempty():
            print("빈 heap입니다")
            return
        print(f"{self.head.llink.data}노드를 삭제합니다")
        if self.head.llink==self.head.rlink: #루트노드 한개만 존재할 때
            del self.head.llink
            self.head.llink=self.head.rlink=self.head
            self.head.data=0
            return

        self.head.llink.data,self.head.rlink.data=self.head.rlink.data,self.head.llink.data
        queue=[self.head.llink]
        prev=parent=None

        while queue: #부모&직전노드 찾기
            current=queue.pop(0)
            if current.llink:
                    queue.append(current.llink)
            if current.rlink:
                    queue.append(current.rlink)
            if current.llink ==self.head.rlink or current.rlink==self.head.rlink: 
                parent=current 
                prev=queue[-2] if len(queue) >= 2 else self.head.llink
                break
            
        if parent:
            if parent.llink==self.head.rlink: #부모->자식 끊기
                parent.llink=None
            elif parent.rlink==self.head.rlink: 
                parent.rlink=None
        self.head.rlink.parent=None #자식->부모 끊기
        del self.head.rlink
        self.head.rlink=prev
        self.head.data-=1
        self.heap_down(self.head.llink)
        self.view(self.head.llink)
        print()


h=Heap()
values=list(map(int,input("입력값을 입력하시오: ").split()))
print()
for value in values:
    h.add_heap(value)
    
print("\n모든 노드 추가 완료, 지금부터 루트를 삭제합니다\n")
for values in values:
    h.delete_heap()
