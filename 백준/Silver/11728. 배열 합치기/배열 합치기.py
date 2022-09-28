import sys

read = lambda:sys.stdin.readline().rstrip()

N,M = map(int,read().split())

listA = list(map(int,read().split()))
listB = list(map(int,read().split()))

answer = listA+listB
answer.sort()

print(*answer)