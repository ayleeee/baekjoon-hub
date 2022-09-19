while True:
    number = int(input())
    if number == -1 :
        break
    list = []
    for i in range(1,number):
        if number % i == 0:
            list.append(i)

    if sum(list) == number:
        print(number, " = ", " + ".join(str(i) for i in list), sep="")
    else:
        print(number, "is NOT perfect.")



