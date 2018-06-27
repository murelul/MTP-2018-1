//Marcela Castellani 11721EBI026

#include <stdio.h>
#include <stdlib.h>
void gerador(float * vetor, int tam) {
	int i;  
	for(i = 0; i < tam; i++) 
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;}
float somar(float v[], int n){
	 if (n == 0) return 0;
   else {
      float s;
      s = somar (v, n-1);
      if (v[n-1] > 0) s += v[n-1];
      return (s);}}
float produto(float v[], int n){
	float mult = 1.0f;
	for(int i=0; i<n; i++)
		mult = mult*v[i];
	return mult;
}

int main(){
	srand(123456);
	int opcao, n=100;
	float num[100];
	gerador (num, n);
	do{
	printf("\nDigite: \n1 - Somatorio.\n2 - Produto.\n3 - Sair do prgrama.");
	printf("\nDigite a opcao: ");
	scanf("%d", &opcao);	
	getchar();
	switch(opcao){
		case 1:
			printf("\nSomatorio: %f", somar(num, n));
			break;
		case 2:
			printf("\nProduto: %f", produto(num,n));
			break;
		case 3:
			return 0;
		default:
			break;
	}}while(opcao != 4);
	return 0;}
