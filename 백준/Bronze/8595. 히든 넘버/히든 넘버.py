import re

N = int(input())
sentence = input()

answer = re.findall('[0-9]{1,6}',sentence)
answer = list(map(int,answer))

if len(answer)==0:
    print("0")
else:
    print(sum(answer))