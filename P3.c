//Marcela Castellani 11721EBI026



#include <stdio.h>

int Bin(int decimal, int vetor[256]){
int r[100], save, i=0, j=0, base=2, n=0;
	if(decimal < 0)
	{ n = decimal;
	  decimal = (-decimal) - 1;
	  save = decimal;		}
	else if(decimal >= 0)
	{	n = decimal;
		save = decimal;	}
	r[0] = 1;
	for(i=0; decimal >= base; i++)
	{	r[i] = decimal%base;	
		decimal =decimal/base;
		if(decimal < base)
		{	i++;
			r[i] = decimal;		} 
	}	if(save>base){ i--;	}
	decimal = save;	
	save = 32;
	for(j=0; j<save; j++)
	{	if(j < (save-(i+1)))
		{	vetor[j] = 0;		}
		else
		{	vetor[j] = r[i];
			i--;
		}
		if(n < 0)
		{	if(vetor[j] == 0){	vetor[j] = 1;		}
			else if(vetor[j] == 1){	vetor[j] = 0;			}
		}
	}
		return j; 
}

int main ()
{
	int opcao, i=0, j, k, op1, op2, op3, vetor_n[256], vetor_op1[256], vetor_c[256];

printf("\n      CALCULADORA BITWISE       \n Digite a opcao desejada:");
printf("\n1-NOT \n2-AND \n3-OR \n4-XOR \n5-Right Shift \n6-Left Shift \n");
scanf("%d", &opcao);
				if(opcao == 7){return 0;}
		else if(opcao != 1 && opcao <= 7)
		{	printf("\nDigite dois valores para ser operados: ");
			scanf("%d %d", &op1, &op2);
			getchar();	}
		else if(opcao == 1)
		{	printf("\nDigite o valor a ser operado: ");
			scanf("%d", &op1);
			getchar();
		}
			
		switch(opcao){
			case 1:
				j = Bin(op1, vetor_n);
				printf("\nNOT %d (", op1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") : ");	}	}
				op1 = ~op1;
				j = Bin(op1, vetor_op1);
				printf(" %d (", op1);
				for(i=0; i<j; i++){	printf("%d", vetor_op1[i]);  if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 2:
	 			j = Bin(op1, vetor_n);
				printf("\n%d (", op1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") AND");	}	}
				j = Bin(op2, vetor_op1);
				printf(" %d (", op2);
				for(i=0; i<j; i++){	printf("%d", vetor_op1[i]);  if(i==(j-1)){	printf(") :");	}	}
				op3 = op1 & op2;
				j= Bin(op3, vetor_c);
				printf(" %d (" ,op3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 3:
				j = Bin(op1, vetor_n);
				printf("\n%d (", op1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") OR");	}	}
				j = Bin(op2, vetor_op1);
				printf(" %d (", op2);
				for(i=0; i<j; i++){	printf("%d", vetor_op1[i]);  if(i==(j-1)){	printf(") :");	}	}
				op3 = op1 | op2;
				j= Bin(op3, vetor_c);
				printf(" %d (" ,op3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 4:
				j = Bin(op1, vetor_n);
				printf("\n%d (", op1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") XOR");	}	}
				j = Bin(op2, vetor_op1);
				printf(" %d (", op2);
				for(i=0; i<j; i++){	printf("%d", vetor_op1[i]);  if(i==(j-1)){	printf(") :");	}	}
				op3 = op1 ^ op2;
				j= Bin(op3, vetor_c);
				printf(" %d (" ,op3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 5:
				j = Bin(op1, vetor_n);
				printf("\n%d (", op1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") >>");	}	}
				j = Bin(op2, vetor_op1);
				printf(" %d (", op2);
				for(i=0; i<j; i++){	printf("%d", vetor_op1[i]);  if(i==(j-1)){	printf(") :");	}	}
				op3 = op1 >> op2;
				j= Bin(op3, vetor_c);
				printf(" %d (" ,op3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 6:
				j = Bin(op1, vetor_n);
				printf("\n%d (", op1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") >>");	}	}
				j = Bin(op2, vetor_op1);
				printf(" %d (", op2);
				for(i=0; i<j; i++){	printf("%d", vetor_op1[i]);  if(i==(j-1)){	printf(") :");	}	}
				op3 = op1 << op2;
				j= Bin(op3, vetor_c);
				printf(" %d (" ,op3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			default:
				break;
		}
	return 0;
} 
