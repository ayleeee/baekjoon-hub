import sys

n = int(input())
for i in range(n):
    first,second = map(str,sys.stdin.readline().split())
    sf  = ''.join(sorted(first))
    ss = ''.join(sorted(second))

    if sf == ss :
        print("Possible")
    else:
        print("Impossible")
