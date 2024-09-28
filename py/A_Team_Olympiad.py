input() # ignore
studs = {'1': [], '2': [], '3': []}
for n, i in enumerate(input().split(), 1):
	studs[i].append(int(n))
print(min(map(len, studs.values())))
for i in zip(*studs.values()):
	print(*i)