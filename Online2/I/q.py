import bisect

INF = int(8e18)
MAXN = int(1e6 + 10)

n, k = map(int, input().split())
A = list(map(int, input().split()))

for i in range(n):
    A[i] -= i * k

dp = [INF] * MAXN
dp[0] = -INF

ans = 0
for i in range(n):
    ind = bisect.bisect_right(dp, A[i])
    dp[ind] = A[i]
    ans = max(ans, ind)

print(n - ans)
