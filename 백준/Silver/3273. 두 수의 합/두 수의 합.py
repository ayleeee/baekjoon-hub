import sys

n = int(input())

numbers = sorted(list(map(int,sys.stdin.readline().split())))

x = int(input())

answer = 0

left,right = 0, n-1

while left<right:
    result = numbers[left]+numbers[right]
    if result == x:
        answer+=1
        left+=1
    elif result<x:
        left+=1
    else:
        right-=1

print(answer)