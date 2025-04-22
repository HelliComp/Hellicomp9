n, k = map(int, input().split())
arr = list(map(int, input().split()))

a = arr[0]

for i in range(1, n):
    b = arr[i]
    if abs(b - a) > k:
        print(i + 1)
        break
    a = b
