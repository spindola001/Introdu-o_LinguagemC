#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int opcao;
	
	printf("Classificando produtos");
	printf("1- Carne\n2- Arroz\n3- Feij�o\n4- �leo\n5- Calsa\n6- Blusa de frio\n7- Creme dental\n8- Detergente\n9- Desinfetante\n10- Limpa alum�nio\n11- Vassoura\n12- Palha de a�o\n13- Lustra m�veis\n14- �gua sanit�ria\n15- Pano de ch�o\n\n");
	printf("Escolha um produto seguindo o menu acima:");
		scanf("%d",&opcao);	
		
	switch (opcao){
		case 1: printf("Seu produto � um alimento n�o perec�vel!\n\n");
		break;
		case 2: case 3: case 4: printf("Seu produto � um alimento perec�vel!\n\n");
		break;
		case 5: case 6: printf("Seu produto se encaixa no vestu�rio!\n\n");
		break;
		case 7: printf("Seu produto se encaixa em higiene pessoal!\n\n");
		break;
		case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: printf("Seu produto se encaixa em limpeza e utenc�lios dom�sticos!\n\n");
		break;
		
		default: printf("Op��o inv�lida!\n\n");
		break;
	}
	
	system("PAUSE");
	
	return 0;
}
