n, pos = map(int, input().split())

for _ in range(n):
    a, b, c = map(int, input().split())

    if pos == a:
        pos = b
    elif pos == b:
        pos = a

    if pos == c:
        print("Yes")
    else:
        print("No")
