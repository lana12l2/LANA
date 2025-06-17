'''(문제4) 위상 정렬 (20점)
방향 그래프의 간선 정보를 입력 받아 그래프의 인접 리스트를 생성하고 위상 정렬을 수행하시오.
(그림 10.3의 예시 그래프 및 추가 방향 그래프에 대해서 테스트를 수행한다)
(* 프로그램 9.2를 활용하고 이에 기반하여 위상 정렬 코드를 작성할 것)
(조건)
- 초기 인접 리스트를 출력한다.
- 위상 정렬 수행 과정에서 큐의 상태 및 각 정점의 진입 차수 정보를 단계별로 갱신하여 출력한다.
- 위상 정렬 순서를 출력한다.
- 그래프에 사이클이 있는 예시와 없는 예시를 각각 테스트할 것'''

class Node:
    def __init__(self,value):
        self.data=value #노드 번호
        self.inbound=0 #진입차수 
    
class topo_sort:
    def __init__(self):
        self.queue=[]
        self.graph={}
        self.nodes={} #{노드번호:노드 객체}
        
    
    def create(self,edges):
        for s,d in edges:
            if s not in self.nodes: #노드를 처음 생성
                self.nodes[s]=Node(s)
            if d not in self.nodes:
                self.nodes[d]=Node(d)

            if s not in self.graph: #인접리스트 생성
                self.graph[s]=[]
            self.graph[s].append(d)
            self.nodes[d].inbound+=1 # d 노드의 진입차수 증가
            if d not in self.graph:
                self.graph[d]=[]
        print("초기 인접 리스트")
        for key in sorted(self.graph.keys()):
            print(f"{key}:{self.graph[key]}")
        print()

            
    def add_zero(self):
            for node in self.nodes:
                if self.nodes[node].inbound==0:
                    self.queue.append(node) #노드 번호(객체아님) 을추가

    def sort(self):
        step=0
        
        self.add_zero()
        result=[]
        
        while self.queue:
            print()
            print(f"현재 큐: {self.queue}")
            print("진입 차수:", {n: self.nodes[n].inbound for n in self.nodes})
            current=self.queue.pop(0)
            result.append(current)
            if current in self.graph:
                for other in self.graph[current]:
                    self.nodes[other].inbound-=1
                    if self.nodes[other].inbound==0:
                        self.queue.append(other)

            step+=1
        if len(result) == len(self.nodes):
            print("\n위상 정렬 결과:", result)
        else:
            print("\n사이클이 존재하여 위상 정렬이 불가능합니다.")



            

example1 = [(0, 2), (1, 2), (2, 4), (3, 5), (5, 4), (4, 6), (4, 7), (5, 8), (6, 9), (7, 10)]
print("<그림 10.3의 예시 그래프>\n")
ts1 = topo_sort()
ts1.create(example1)
ts1.sort()

print("\n")

example2 = [(0, 1), (1, 2), (2, 3), (3, 1)]  # 1 → 2 → 3 → 1 (사이클)
print("<사이클 있는 그래프 예시>\n")
ts2 = topo_sort()
ts2.create(example2)
ts2.sort()



