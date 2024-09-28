""" author: habiburrahman0001
    date: 6-14-2024 
 """
for _ in range(int(input())):
    n,x = list(map(int, input().split()))
    lst = [0]+[int (i) for i in input().split()]
    print(max([lst[i]-lst[i-1] for i in range(1,n+1)]+[2*(x-lst[-1])]))