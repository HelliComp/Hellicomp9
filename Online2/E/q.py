s = input()
t = input()

h1 = int(s[0:2])
m1 = int(s[3:5])
sec1 = int(s[6:8])
start = h1 * 3600 + m1 * 60 + sec1

h2 = int(t[0:2])
m2 = int(t[3:5])
sec2 = int(t[6:8])
endt = h2 * 3600 + m2 * 60 + sec2

ans = 0
for cur in range(start, endt + 1):
    h = cur // 3600
    m = (cur % 3600) // 60
    s_ = cur % 60

    digits = [
        h // 10, h % 10,
        m // 10, m % 10,
        s_ // 10, s_ % 10
    ]

    if len(set(digits)) == 6:
        ans += 1

print(ans)
