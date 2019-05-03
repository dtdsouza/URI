## Getting inputs

n = int(input())

args = list(map(int, input().split()))

m2 = 0
m3 = 0
m4 = 0
m5 = 0

for i in range(n):
    if (args[i] % 2 == 0):
        m2 += 1
    if (args[i] % 3 == 0):
        m3 += 1
    if (args[i] % 4 == 0):
        m4 += 1
    if (args[i] % 5 == 0):
        m5 += 1

print(m2," Multiplo(s) de 2")
print(m3," Multiplo(s) de 3")
print(m4," Multiplo(s) de 4")
print(m5," Multiplo(s) de 5")
