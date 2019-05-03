## Getting input
t = int(input())

args = input().split(" ")
s = 0

## Algorith
for i in range(5):
    if(int(args[i]) == t):
        s += 1

print(s)
