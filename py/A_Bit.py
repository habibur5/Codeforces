""" t= int(input())
cnt =0
while t>0:
    t-=1
    a = input()
    # print(a)
    if a =='x++' or a=='++x'or a =='X++' or a=='++X':
        cnt+=1
    elif a=="x--" or a=="--x" or a =='X--' or a=='--X':
        cnt-=1
print(cnt) """

## 2nd method small code 

x=0
for i in range(int(input())):
    x=x+1 if '+' in input() else x-1
print(x)