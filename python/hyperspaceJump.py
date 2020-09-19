def gcd(a, b):
    if(b == 0):
        return a
    return gcd(b, a % b)
n = int(input())

for i in range(0, n):
    str = input()
    a = int(str[1: str.find('+')])
    b = int(str[str.find('+') + 1 : str.find(')')])
    c = int(str[str.find('/') + 1::])

    if(a + b > c):
        gc = gcd(a + b

    

