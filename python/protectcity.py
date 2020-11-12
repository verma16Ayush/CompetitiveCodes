t = int(input())
while(t):
    a, b = tuple(map(int, input().split()))
    str = input()
    seg = list(filter(None, str.split('0')))
    blow_cost = len(seg) * a
    safes = str.replace('0', ' ')
    safes = safes.strip()
    fillcost = safes.count(' ') * b

    ans = min(blow_cost, fillcost + a)
    t-=1
    print(ans)
