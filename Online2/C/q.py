n = int(input())
ans = 0

for _ in range(n):
    chars = input().split()  
    v = []
    ok = False

    for c in chars:
        a = 1 if c == 'a' else 0

        if v and v[-1] == 1 and a == 1:
            ok = True

        v.append(a)

    if sum(v) >= 4:
        ok = True

    ans += ok

print(ans)
