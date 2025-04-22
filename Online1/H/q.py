import bisect

n, m = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort()

t = 0
for b in B:
    less = bisect.bisect_left(A, b)
    greater = len(A) - bisect.bisect_right(A, b)
    t += less * greater

print(t)