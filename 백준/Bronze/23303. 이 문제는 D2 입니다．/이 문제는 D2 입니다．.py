import re

text = input()
answer = len(re.findall('(D2|d2)',text))!=0
if answer:
    print("D2")
else:
    print("unrated")
