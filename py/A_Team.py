l=[]
for i in range(int(input())):
    j = input().split()
    m = 0
    if j.count('1') >= 2:
        m+=1
        l.append(m)
print(sum(l))