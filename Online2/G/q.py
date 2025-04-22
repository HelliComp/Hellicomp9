import sys

INF = 10**18

n, d = map(int, input().split())
vec = [tuple(map(int, input().split())) for _ in range(n)]

vec.sort()
res = [vec[0]]
for i in range(1, len(vec)):
    if vec[i][0] <= res[-1][1]:
        res[-1] = (res[-1][0], max(res[-1][1], vec[i][1]))
    else:
        res.append(vec[i])
vec = res

ans = 0
prv = -INF

for i in range(len(vec)):
    start = max(vec[i][0], prv + d)
    temp = (vec[i][1] - start + d) // d
    ans += temp
    prv = start + (temp - 1) * d

print(ans)
