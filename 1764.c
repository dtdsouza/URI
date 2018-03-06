#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct{
	int vertice1,vertice2;
	int custo;
}Aresta;

void mergeSort(Aresta vetor[], int comeco, int fim);
void mesclar(Aresta vetor[], int comeco, int meio, int fim);
int verifica(int pai[],int tam);
void makeSet(int m,int pai[],int altura[]);
void une(int a,int b,int altura[],int pai[]);
int find(int i, int pai[]);
void link(int a,int b,int altura[],int pai[]);
int igual(int a,int b,int pai[]);


int main(){
	int m,n,i,custoTot,economia;
	clock_t inicio, fim;
	double duracao;
	
	//m=numero de vertices  n=numero de arestas
	scanf("%d %d",&m,&n);
	
	while(n!=0 || m !=0){
		Aresta arestas[n];
		int pai[m];
		int altura[m];
		custoTot=0;
		economia=0;
		
		//inicializo meus conjuntos
		makeSet(m,pai,altura);

		//leio e armazeno todas as arestas em um vetor
		for(i=0;i<n;i++){
			scanf("%d %d %d",&arestas[i].vertice1,&arestas[i].vertice2,&arestas[i].custo);
			custoTot += arestas[i].custo;
		}	
	
		//ordeno essas arestas baseadas no custo
		
		mergeSort(arestas,0,n-1);
		
		
			
		i=0;
		inicio=clock();
		while( !verifica(pai,m) ){ // enquanto n tiver percorido todos os vertices
			if( !igual(arestas[i].vertice1,arestas[i].vertice2,pai) ){
				une(arestas[i].vertice1, arestas[i].vertice2,altura,pai);
				economia += arestas[i].custo;
			}
			i++;
		}
		fim= clock();
		printf("%d\n",economia);
		duracao = (double)(fim-inicio)/CLOCKS_PER_SEC;
		printf("duração = %lf\n\n",duracao);
		//m=numero de vertices  n=numero de arestas
		scanf("%d %d",&m,&n);
	}

	return 0;
}


/**
 * parâmetros: ponteiro para posição inicial do vetor, primera posição do vetor, ultima posição do vetor;
 * Ordena o vetor
**/
void mergeSort(Aresta vetor[], int comeco, int fim){

    if (comeco < fim){ // se meu vetor for válido (não unitário)
        int meio = (comeco+fim)/2; //divido o vetor no meio

        mergeSort(vetor, comeco, meio); // mergeSort na primeira metade
        mergeSort(vetor, meio+1, fim); // mergeSort na segunda metade
        mesclar(vetor, comeco, meio, fim); //juntar os vetores criados
    }
    
}

/**
 * parâmetros: ponteiro do vetor, primera posição do vetor,posição do meio do vetor, ultima posição do vetor;
 * Mescla os vetores separados ordenando-os em um vetor auxiliar, depois transcrevendo-os para o vetor original; 
**/
void mesclar(Aresta vetor[], int comeco, int meio, int fim){
    int ini,mei,aux;
    Aresta vet[fim-comeco+1]; // vetor ordenado e mesclado

    //inicializando variaveis
    ini = comeco;
    mei = meio+1;
    aux = 0;

    while(ini<=meio && mei<=fim){
        if(vetor[ini].custo <= vetor[mei].custo){
            vet[aux].vertice1 = vetor[ini].vertice1;
            vet[aux].vertice2 = vetor[ini].vertice2;
            vet[aux].custo = vetor[ini].custo;
            ini++;
        }
        else{
            vet[aux].vertice1 = vetor[mei].vertice1;
            vet[aux].vertice2 = vetor[mei].vertice2;
            vet[aux].custo = vetor[mei].custo;
            mei++;
        }
        aux++;
    }

    while(ini<=meio){  //Caso exista elementos na primeira metade que não foram mesclados
        vet[aux].vertice1 = vetor[ini].vertice1;
        vet[aux].vertice2 = vetor[ini].vertice2;
        vet[aux].custo = vetor[ini].custo;
        aux++;
        ini++;
    }

    while(mei<=fim){   //Caso exista elementos na primeira metade que não foram mesclados
        vet[aux].vertice1 = vetor[mei].vertice1;
        vet[aux].vertice2 = vetor[mei].vertice2;
        vet[aux].custo = vetor[mei].custo;
        aux++;
        mei++;
    }

    for(aux=comeco;aux<=fim;aux++){   //copia o novo vetor para o vetor original
        vetor[aux].vertice1 = vet[aux-comeco].vertice1;
        vetor[aux].vertice2 = vet[aux-comeco].vertice2;
        vetor[aux].custo = vet[aux-comeco].custo;
    }

}


/**
 * parâmetro: ponteiro do vetor, tamanho do vetor
 * faz cada vertice ser seu próprio pai
 * */
void makeSet(int m, int pai[],int altura[]){
	int i;
	for(i=0;i<m;i++){
		pai[i]=i;
		altura[i] = 0;
	}
}

int verifica(int pai[],int tam){
	int cont=0,i;
	for(i=1;i<tam;i++){
		if( igual(i-1,i,pai) )
			cont++;
	}
	if (cont == tam-1)
		return 1;
	
	return 0;
}

int find(int i, int pai[]){
    if (pai[i] != i)
    {
        pai[i] = find(pai[i],pai);
    }
    return pai[i];
}

void une(int a,int b,int altura[],int pai[]){
	link( find(a,pai) , find(b,pai), altura, pai);
}

void link(int a,int b,int altura[],int pai[]){
	if (altura[a] > altura[b]){
		pai[b] = a;
	}
	else if(altura[b] > altura[a]){
		pai[a] = b;
	}
	else{
		pai[a] = b;
		altura[b]++;
	}
}

int igual(int a,int b,int pai[]){
	if( find(a,pai) == find(b,pai) )
		return 1;
	
		return 0;
}



