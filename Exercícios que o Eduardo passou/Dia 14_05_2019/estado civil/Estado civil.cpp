#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int opcao;
	
	printf("Estado Civil\n");
	printf("1- S\n2- C\n3- D\n4- V\n");
	printf("Qual seu estado civil?\n");
		scanf("%d",&opcao);
		
	switch (opcao){
		case 1: printf("Solteiro\n\n");
		break;
		case 2: printf("Casado\n\n");
		break;
		case 3: printf("Divorciado\n\n");
		break;
		case 4: printf("Viúvo\n\n");
		break;
		default: printf("Opção inválida!\n\n");
		break;
	}
	
	system("pause");
	
	return 0;
}
