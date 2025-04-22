n = int(input())
a = [0] + list(map(int, input().split()))
dp = [0] * (n + 1)
b = []

for i in range(1, n + 1):
    while b and b[-1][0] < a[i]:
        b.pop()

    if not b:
        dp[i] = a[i] * i
    else:
        dp[i] = dp[b[-1][1]] + a[i] * (i - b[-1][1])

    b.append((a[i], i))
    print(dp[i] + 1, end=" ")

print()
