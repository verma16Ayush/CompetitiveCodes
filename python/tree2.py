t = int(input())
while(t):
    s = set()
    l = list()
    n = int(input())
    l = list(map(int, input().split()))
    for i in l:
        s.add(i)
    
    print(len(s))
    t -= 1
    