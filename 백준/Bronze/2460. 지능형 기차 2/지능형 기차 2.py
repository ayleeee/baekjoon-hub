passengerNum = [0 for i in range(10)]

for i in range(10):
    out, inside = map(int, input().split())
    if i==0:
        passengerNum[i] = inside
    else:
        passengerNum[i] = passengerNum[i-1]+inside

    passengerNum[i]-=out


print(max(passengerNum))


