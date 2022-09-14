# 다 더한 값에서 2가지 값을 빼서 100이 되도록 한다.

heightList=[]
x,y = 0,0
# 9 개의 값을 받는다.
for _ in range(9):
    height = int(input())
    heightList.append(height)

for i in range(9):
    for j in range(i+1,9):
        if sum(heightList) - (heightList[i]+heightList[j]) == 100:
            x = heightList[i]
            y = heightList[j]

heightList.remove(x)
heightList.remove(y)

heightList.sort()
print('\n'.join(map(str,heightList)))


