## Getting input
myInput = input()

args = myInput.split(" ")

## logic

## calc possible sums

sum1 = int(args[0]) + int(args[1])
sum2 = int(args[0]) + int(args[2])
sum3 = int(args[1]) + int(args[2])

## if conditions
if (int(args[0]) == int(args[1]) or int(args[0]) == int(args[2]) or int(args[1]) == int(args[2])):
    print("S")
else:
    if (int(args[2]) == sum1 or int(args[1]) == sum2 or int(args[0]) == sum3):
        print("S")
    else:
        print("N")
