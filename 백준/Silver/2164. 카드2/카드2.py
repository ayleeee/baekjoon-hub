from collections import deque

n = int(input())

queue=[]
queue = deque([i for i in range(1,n+1)])

while(len(queue)>1):
    queue.popleft()
    top = queue[0]
    queue.append(top)
    queue.popleft()

print(*queue)

