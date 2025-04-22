n = int(input())
a = list(map(int, input().split()))

x = a[-1]
for i in range(n - 2, -1, -1):
    if a[i + 1] < a[i]:
        x = a[i]

res = [val for val in a if val != x]

if not res:
    print(-1)
else:
    print(*res)
