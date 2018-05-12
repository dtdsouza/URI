n = int(input())
vetor = []
instancia = 0

while True:
    try:
        numeros = str(input()).split()
        instancia = instancia+1
        achou=0

        for i in range(0,n):
            ak = int(numeros[i])
            somatorio = 0

            for j in range(0,i):
                somatorio += int(numeros[j])

            if ak == somatorio:
                print("Instancia {}".format(instancia))
                print("{}\n".format(ak))
                achou = 1
                break;

        if achou == 0:
            print("Instancia {}".format(instancia))
            print("nao achei\n")

        n = int(input())
    except EOFError:
        break
