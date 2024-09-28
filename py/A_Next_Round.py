# Get user input as a string
user_input = input()
numbers_as_string = user_input.split()
numbers = [int(x) for x in numbers_as_string]

x=0
a = list(map(int, 
    input().strip().split()))[:numbers[0]]
for i in a:
    if i>=a[numbers[1]-1] and i>0:
        x=x+1

print(x)
