n, m = map(int, input().split())

res = []

if m % 2 == 1:
    res.append(m)

for i in range(1, m, 2):
    res.extend([i, i, i + 1, i, i + 1, i + 1])

if m % 2 == 1:
    res.extend([m, m])

while len(res) < n:
    res.append(1)

if len(res) > n:
    print(-1)
else:
    print(*res)
