for _ in range(int(input())):
    m = int(input())
    s = input()
    print(2 if ("...") in s else (s.count('.')))
