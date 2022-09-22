import re

answer = []
for i in range(5):
    codeName = input()
    fbi = len(re.findall("FBI",codeName))!=0
    if fbi:
        answer.append(i+1)

if len(answer)==0:
    print("HE GOT AWAY!")
else:
    print(*answer)