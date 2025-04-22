n, m = map(int, input().split())

if n == 0 or m == 0:
    print(1)
else:
    if m >= n:
        k = 2 * m + n - 1
    else:
        k = 2 * n + m - 1
    print(k)
