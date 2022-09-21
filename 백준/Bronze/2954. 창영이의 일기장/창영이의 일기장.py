import re

sentence = input()
answer = re.sub('(a|e|i|o|u)p(a|e|i|o|u)','\\1', sentence)
print(answer)