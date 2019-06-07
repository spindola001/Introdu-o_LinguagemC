#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int mes;
	
	printf("Doze meses\n\n");
	printf("Digite um valor de um a doze: ");
		scanf("%d",&mes);
		
	switch (mes){
		case 1: printf("Você está em janeiro!");
		break;
		case 2: printf("Você está em fevereiro!");
		break;
		case 3: printf("Você está em março!");
		break;
		case 4: printf("Você está em abril!");
		break;
		case 5: printf("Você está em maio!");
		break;
		case 6: printf("Você está em junho!");
		break;
		case 7: printf("Você está em julho!");
		break;
		case 8: printf("Você está em agosto!");
		break;
		case 9: printf("Você está em setembro!");
		break;
		case 10: printf("Você está em outubro!");
		break;
		case 11: printf("Você está em novembro!");
		break;
		case 12: printf("Você está em dezembro!");
		break;
		
		default: printf("Comando inválido!");
		break;
	}
	return 0;
}
