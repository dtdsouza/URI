args = input().split(" ")
sum = 0

for i in range(3):
    sum += int(args[i])

print(sum % 24)
