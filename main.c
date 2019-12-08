#include <stdio.h>
#include <stdlib.h>

void mostrar(int *v,int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d  ", v[i]);
	printf("\n");
}
int *terceira(int *v,int n){
	int i;
	for(i=0;i<n;i++){
		v[i]=v[i]*(v[i]/3);
	}
	return v;
}
int main(){
	int *v,n=10,i;
	v=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		v[i]=rand()%100;
	printf("Valores do vetor:\n");
	mostrar(v,n);
	v=terceira(v,n);
	printf("valores do vetor multiplicado por sua terceira parte:\n");
	mostrar(v,n);
	free(v);
	return 0;
}