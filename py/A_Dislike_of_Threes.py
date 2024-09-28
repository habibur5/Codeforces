a = int(10e3)
lis =[]
for i in range(1,a):
    if i%3 !=0 and i%10 != 3 and i !=3 :
        lis.append(i)
for i in range(int(input())):
    b=int(input())
    print(lis[b-1])