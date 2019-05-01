## Getting inputs

inp = input()

args = inp.split(" ")

p  = int(args[0])
j1 = int(args[1])
j2 = int(args[2])
r  = int(args[3])
a  = int(args[4])

## Verificando Roubo
if (r == 1 and a == 1):
    print("Jogador 2 ganha!")
else: 
    if (r == 1 and a == 0):
        print("Jogador 1 ganha!")
## Caso não tenha roubo, segue normalmente
    else:
        response = (j1 + j2) % 2
        if (p == 1 and response == 1):
            print("Jogador 2 ganha!")
        else:
            if (p == 0 and response == 0):
                print("Jogador 2 ganha!")
            else:
                print("Jogador 1 ganha!")

