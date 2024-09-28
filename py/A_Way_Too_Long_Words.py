t = int(input())
while(t>0):
    t=t-1
    s = input()
    a = len(s)
    if a>10:
        b = a-2
        print(s[0]+str(b)+s[-1])
    else:
        print(s)