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
		case 1: printf("Voc� est� em janeiro!");
		break;
		case 2: printf("Voc� est� em fevereiro!");
		break;
		case 3: printf("Voc� est� em mar�o!");
		break;
		case 4: printf("Voc� est� em abril!");
		break;
		case 5: printf("Voc� est� em maio!");
		break;
		case 6: printf("Voc� est� em junho!");
		break;
		case 7: printf("Voc� est� em julho!");
		break;
		case 8: printf("Voc� est� em agosto!");
		break;
		case 9: printf("Voc� est� em setembro!");
		break;
		case 10: printf("Voc� est� em outubro!");
		break;
		case 11: printf("Voc� est� em novembro!");
		break;
		case 12: printf("Voc� est� em dezembro!");
		break;
		
		default: printf("Comando inv�lido!");
		break;
	}
	return 0;
}
