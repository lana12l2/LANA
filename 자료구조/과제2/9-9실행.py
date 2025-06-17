'''

(문제2) (9-9) 최소비용 신장트리 (Prim 방법)
프로그램 9.3(Kruskal 방법)을 수정하여 Prim의 방법으로 최소 비용 신장 트리를 탐색하는 프로그
램을 작성하시오.
- 연습문제 9-1, 9-2, 9-3의 예시 그래프를 사용하여 작성한 프로그램을 테스트한다.
- 탐색 시작 노드를 사용자로부터 입력 받는다. (시작 노드가 변경되는 경우도 처리할 것)
- 최소 비용 신장 트리에 간선이 추가되는 순서대로 출력한다'''

class Node:
    def __init__(self,value):
        self.data=value
class Graph:
    def __init__(self):
        self.graph={} #인접 리스트
        self.v_list={} #정점 집합
        self.edge=[] 
        self.total=0

    def create(self,v,data,weight):
        node=Node(data)
        if v not in self.graph:
            self.graph[v]=[]
        self.graph[v].append((node,weight))

   
        
    def prim(self,start):
        self.v_list={start:[start]}
        self.edge=[]
        self.total=0 #초기화해야 나중에 변경 가능
        min_cost=10000
       
        while len(self.edge)<len(self.graph)-1:
            tmp=[]
            for u in self.v_list[start]:
                for node, cost in self.graph[u]:
                    v=node.data #노드 이름 객체아님
                    if v not in self.v_list[start]:
                        tmp.append((cost,u,v))

            tmp.sort()   
            min_cost,from_v,to_v=tmp[0]
            self.v_list[start].append(to_v)
            self.edge.append((from_v,to_v,min_cost))
            self.total+=min_cost
            print(f"간선 추가: {from_v} - {to_v} (비용 {min_cost})")


g=Graph()
network=[(1,5,6),(1,6,8),(2,3,17),(2,6,9),(5,6,7),(3,7,15),(3,4,5),(3,8,3),(4,8,4),(6,7,10)]
for v,node,weight in network:
    g.create(v,node,weight)
    g.create(node,v,weight) #양방향으로 연결해야 prim함수에서 검색됨
print("network=",network)
while True:
    a=int(input("시작 정점: "))
    if a==0:
        break
    elif a not in g.graph:
        print("정점이 존재하지 않습니다.")
    else:
        g.prim(a)
        print()
        print("간선:",g.edge)
        print("정점 리스트",g.v_list)
        print("최소 비용 신장 트리의 총 비용:",g.total)











