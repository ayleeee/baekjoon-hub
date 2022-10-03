import sys


n = int(sys.stdin.readline())

for i in range(n):
    testCase =list(map(int,sys.stdin.readline().split()))
    minValue = 100001
    sum = 0
    for a in testCase:
        if a%2==0:
            minValue = min(minValue,a)
            sum+=a
    print(sum,minValue)
