n = int(input())
s = input()

vec = []
res = ""

for i in range(n):
    if i == 0 or s[i] != s[i - 1]:
        vec.append([s[i], 1])
    else:
        vec[-1][1] += 1

for ch, count in vec:
    if count == 1:
        res += ch
    else:
        res += ch + str(count)

if len(res) < n:
    print(res)
else:
    print(s)
