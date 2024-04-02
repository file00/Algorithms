# Studying Words

# Given a word in alphabetic case, write a program to find out which alphabet is the most used in the word, except it is not case sensitive.
from collections import Counter

W = input().upper()
cnt = dict(Counter(W))

max = max(cnt.values())
rst = list()
for k,v in cnt.items():
    if v == max:
        rst.append(k)

if len(rst) == 1:
    print(rst[0])
else:
    print('?')