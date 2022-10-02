import sys

INF = sys.maxsize

n,m = map(int,sys.stdin.readline().split())
start = 0
end = 0
numbers = []
for i in range(n):
    number = int(sys.stdin.readline())
    numbers.append(number)

numbers.sort()
answer = INF

while start<n and end<n:
    temp = numbers[end]-numbers[start]
    if temp>=m:
        answer = min(answer,temp)
        start+=1
    else:
        end+=1

print(answer)
