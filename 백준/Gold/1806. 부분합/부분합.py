import sys

n,s = map(int,sys.stdin.readline().split())
numbers = list(map(int,sys.stdin.readline().split()))
result = sys.maxsize
start = 0
end = 0
sum = 0

while True:
    if sum>=s:
        result = min(result,end-start)
        sum-=numbers[start]
        start+=1
    elif end == n:
        break;
    else:
        sum += numbers[end]
        end+=1

if result == sys.maxsize:
    print(0)
else:
    print(result)
