n, x, y = map(int, input().split())

ans = -1
s = ""
check = False

for i in range(n):
    t, k = map(int, input().split())

    if t == 1:
        y += k
    else:
        y -= k

    if y < 0 and not check:
        ans = i + 1
        s = "Bache Ha"
        check = True

    if y >= x and not check:
        ans = i + 1
        s = "Madam HashtPa"
        check = True

print(ans)
print(s)
