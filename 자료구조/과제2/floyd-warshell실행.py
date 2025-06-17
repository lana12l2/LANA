'''(문제3) Floyd-Warshall 알고리즘을 구현하시오. (30점)
구현 프로그램은 각 비용행렬과 각 정점 간 경로를 출력해야 한다. (아래의 조건을 만족해야 하며,
그림 10.2와 연습문제 10-2, 10-3의 그래프로 각각 테스트할 것)
(조건)
비용행렬(dist)과 동일한 크기의 p배열(prev)을 단계별로 출력한다.
최종 비용행렬에서 두 정점간 최단 경로(정점들의 시퀀스)를 재귀적으로 역추적한다.
* 경로 (a, b)에 대한 p배열에 경유 정점 k1이 존재하면 경로는 (a, k1, b)이 된다.'''


def create_matrix(edges): #A-1 생성
    print("dist: A-1")
    print("---------------")
    vertices = set() # 집합을 이용해 정점 목록 만든다.
    for edge in edges:
        start, end, cost = edge
        vertices.add(start)
        vertices.add(end)
    vertices = sorted(list(vertices))  # 인덱스 고정
    index={v:i for i,v in enumerate(vertices)} #a:0, b:1 ...형태
    inf=float('inf')
    global n
    n=len(vertices)
    dist=[[inf]*n for _ in range(n)]
    prev=[[None]*n for _ in range(n)]
    for i in range(n):
        dist[i][i]=0
    for start,end,cost in edges: #직접 연결된 정점들
        i,j=index[start],index[end]
        dist[i][j]=cost
        prev[i][j] = None #경유점 없음
        
    for i in range(n):
        print(i,':',end='     ')
        for j in range(n):
            print(dist[i][j],end=' ')
        print()
    return dist,prev


def update(dist,prev):
    for k in range(n):         # 경유 노드
        print("\ndist: A",k)
        print("---------------")
        for i in range(n):     # 출발 노드
            print(i,":",end=' ')
            for j in range(n): # 도착 노드
                if dist[i][j]>dist[i][k]+dist[k][j]:
                    dist[i][j] = dist[i][k] + dist[k][j]
                    prev[i][j]=k

                print(dist[i][j],end=' ')
            print()
        print()


def path(prev,s,d):
    if prev[s][d]==None:
        return []
    else:
        k=prev[s][d]
        return path(prev,s,k)+[k]+path(prev,k,d)
    

    
example=[(0,1,4),(0,2,11),(1,0,6),(1,2,2),(2,0,3)]

dist,prev=create_matrix(example)
update(dist,prev)
print("<최단 경로>")

for i in range(n):
    len=0
    for j in range(n):
        if i!=j:
            p=[i]+path(prev,i,j)+[j]
            print("s~d:",i,j,end="\t")
            print("path",p,end='\t')
            print("len=",dist[i][j])







