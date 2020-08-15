t = int(input())
while(t):
    s = input().split('0')
    s.sort(reverse=True)
    aliceScr = 0
    turn = 0
    for ele in s:
        if turn % 2 == 0:
            aliceScr += len(ele)
        turn += 1
    
    print(aliceScr)
    t -= 1