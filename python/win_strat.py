t = int(input())
while t != 0 :
    n = input()
    ls = list(map(int, input().split()))
    ls.sort()
    ls2 = ls[::-1]

    p1 = 0
    p2 = 0

    for i in range(0, int(n)):
        if i == 0:
            p1+=ls2[i]
        
        if i == 1 or i == 2:
            p2 += ls2[i]
        
        if i > 2 and i % 2 == 1:
            p1 += ls2[i]
        
        if i >2 and i % 2 == 0:
            p2 += ls2[i]

    if(p1 > p2):
        print("first")

    if(p1 < p2):
        print("second")
    
    if(p1 == p2):
        print("draw")

    t -= 1