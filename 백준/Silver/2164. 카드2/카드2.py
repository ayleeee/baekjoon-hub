from collections import deque

n = int(input())

queue=[]
queue = deque([i for i in range(1,n+1)])

while(len(queue)>1):
    queue.popleft()
    top = queue.popleft()
    queue.append(top)

print(*queue)

