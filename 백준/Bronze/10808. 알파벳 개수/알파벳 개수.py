sentence = input()
alphabet = [0]*26

for i in sentence:
    alphabet[ord(i)-97]+=1

print(*alphabet)