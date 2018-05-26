#include <stdio.h>

int main()
{	char string[256], *p;
	int i=0, text[256], op, contar,*pts;
	printf("Voce deseja: \n1 - Criptografar \n2 - Descriptografar \n");
	scanf("%d", &op);
	getchar();
	switch(op){
		case 1:
			for(i=0; i<256; i++){ string[i] = '\0'; }
			printf("Digite um texto: ");
			fgets(string, 256, stdin);
			for(contar=0; string[contar] != '\0'; contar++);	
			pts = (int*)string;
			printf("\nFrase criptografada: \n");
			for(i=0; i<contar; i++){	
				if(*(pts+i) != 0 ){
					printf("%i ", *(pts+i));}
					} 
			break;
		case 2:
			p = (char*)text;
			i=0; contar=0;
			printf("\nDigite uma sequencia de numeros e para encerrar digite 0: \n");
			do{
				scanf("%d", &contar);
	 			getchar();
				text[i] = contar;
				i++;
			}while(contar != 0);
			p = (char*)&text;
			printf("\nMensagem descriptografada: \n");
			for(i=0; i<sizeof(text) && *(p+i) != 0; i++){
				printf("%c", *(p+i));}
			break;
		default:
			break;
	}
	return 0;
  }
