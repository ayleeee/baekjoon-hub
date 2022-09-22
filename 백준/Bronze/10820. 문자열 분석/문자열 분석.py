import re
import sys


while True:
    sentence = sys.stdin.readline().rstrip('\n')
    if not sentence:
        break;

    s = len(re.findall('[a-z]',sentence))
    l = len(re.findall('[A-Z]',sentence))
    n = len(re.findall('[0-9]',sentence))
    b = len(re.findall(' ', sentence))

    print(s,l,n,b)
