//11721EBI026 Marcela Castellani

#include <stdio.h>
int s(int num[], int qtd){
	int s=0, i;
    for(i=0; i<qtd; i++){
    	s=s+n[i];
	}
	return s;
}
float media(float numero, int qtd){
   float media=0;
   media=numero/qtd;
   return media;
}
int main(){
	int i=0,n[20], qtd, resultado;
	printf("\nDigite entre 5 e 20 numeros: ");
	scanf("%d", &qtd);
	getchar();
	do{
		printf("\nNum[%d]: ", i+1);
		scanf("%d", &num[i]);
		getchar();
		i++;
	}while(i<qtd);
resultado=s(n,qtd);
printf("\nA media dos elementos eh: %.2f",media(resultado,qtd));
 return 0;
}
