# 5명 이상이면 성의 첫번째 따서 쓰기

n = int(input())
alphabet = [0]*26
names=""

for _ in range(n):
    name = input()
    alphabet[ord(name[0])-97]+=1

for i in range(26):
    if alphabet[i]>=5:
        names+=chr(i+97)

if names=="":
    print("PREDAJA")
else:
    print(names)
