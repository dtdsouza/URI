#include <stdio.h>
#include <stdlib.h>

void makeSet(int m,int pai[],int altura[]);
void une(int a,int b,int altura[],int pai[]);
int find(int i, int pai[]);
void link(int a,int b,int altura[],int pai[]);
int igual(int a,int b,int pai[]);



int main(){
	int n,i,j,k,cont,ref;
	int n_vertices,n_arestas,c,d;
	char a,b;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		cont =0;
		scanf("%d %d",&n_vertices,&n_arestas);
		int pai[n_vertices];
		int altura[n_vertices];
		int ordem[n_vertices];
		
		makeSet(n_vertices,pai,altura);
		for(j=0;j<n_arestas;j++){
			scanf("\n%c %c",&a,&b);
			c = a-97;
			d = b-97;
			
			if( !igual( (find(c,pai)) , (find(d,pai)) ,pai) )
				une(c,d,altura,pai);
				
			
		}
		printf("Case #%d:",i+1);
		
		for(j=0;j<n_vertices;j++){
			ordem[j]=find(j,pai);
			//printf("%d ",ordem[j]);
		}
		
		
		printf("\n");
		for(j=0;j<n_vertices;j++){
			ref = ordem[j];
			if(ref != -1){
				for(k=j;k<n_vertices;k++){
					if(ordem[k] == ref){
							printf("%c,",(char)k+97);
							ordem[k]=-1;
					}
				}
				printf("\n");
				cont++;
			}
		}
		printf("%d connected components\n\n",cont);	
	}
	
	//printf("\n");
	return 0;
}

void makeSet(int m, int pai[],int altura[]){
	int i;
	for(i=0;i<m;i++){
		pai[i]=i;
		altura[i] = 0;
	}
}

int find(int i, int pai[]){
    while(i != pai[i] && i != -1){
		i = pai[i];
	}
    return i;
}

void une(int a,int b,int altura[],int pai[]){
	link( find(a,pai) , find(b,pai), altura, pai);
}

void link(int a,int b,int altura[],int pai[]){
	a = find(a,pai);
	b = find(b,pai);
	
	if (altura[a] > altura[b]){
		pai[b] = a;
	}
	else{
		pai[a] = b;
		if(altura[a] == altura[b]){
			altura[b]++;
		}
	}
}

int igual(int a,int b,int pai[]){
	if( find(a,pai) == find(b,pai) )
		return 1;
	
		return 0;
}


