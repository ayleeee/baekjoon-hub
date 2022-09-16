n = int(input())
pattern = input().split("*")

front = pattern[0]
back = pattern[1]

for _ in range(n):
    fileName = input()
    if fileName[:len(front)] == front and fileName[-len(back):] == back and len("".join(pattern))<=len(fileName):
        print("DA")
    else:
        print("NE")

