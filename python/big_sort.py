c = '\n'
ls = list()
n = int(input())
t = 0
while (t < n):
    ls.append(input())
    t += 1
# print(ls)
# ls2 = ls[:-1]
ls.sort(key = int)

for item in ls:
    print(item)