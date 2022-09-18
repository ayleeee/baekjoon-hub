import re

while True:
    password = input()
    if password == 'end':
        break
    flag1 = len(re.findall('[aeiou]',password)) !=0
    flag2 = len(re.findall('[aeiou]{3}|[^aeiou]{3}',password)) == 0
    flag3 = len(re.findall('([a-df-np-z])\\1', password)) == 0

    if flag1 and flag2 and flag3:
        print(f'<{password}> is acceptable.')
    else:
        print(f'<{password}> is not acceptable.')
