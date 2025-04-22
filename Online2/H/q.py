from collections import deque

n = int(input())
p = list(map(int, input().split()))

INF = int(1e9)
rev = (n == 2 or p[0] - 1 == p[1] or p[1] - 1 == p[2])
ind = p.index(1)

dist = [[INF] * n for _ in range(2)]
dist[rev][ind] = 0
que = deque()
que.append((rev, ind))

while que:
    r, i = que.popleft()

    ni = (i - 1 + n) % n
    if dist[r][ni] > dist[r][i] + 1:
        dist[r][ni] = dist[r][i] + 1
        que.append((r, ni))

    nr = int(not r)
    ni = n - 1 - i
    if dist[nr][ni] > dist[r][i] + 1:
        dist[nr][ni] = dist[r][i] + 1
        que.append((nr, ni))

print(dist[0][0])
