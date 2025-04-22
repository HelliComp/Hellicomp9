n = int(input())
cnt = 0

l = map(int, input().split())

for a in l:
    cnt += a % 2

if cnt % 2 == 1:
    print("Odd")
else:
    print("Even")