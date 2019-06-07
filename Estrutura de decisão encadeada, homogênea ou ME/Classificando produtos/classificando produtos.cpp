#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int opcao;
	
	printf("Classificando produtos");
	printf("1- Carne\n2- Arroz\n3- Feijão\n4- Óleo\n5- Calsa\n6- Blusa de frio\n7- Creme dental\n8- Detergente\n9- Desinfetante\n10- Limpa alumínio\n11- Vassoura\n12- Palha de aço\n13- Lustra móveis\n14- Água sanitária\n15- Pano de chão\n\n");
	printf("Escolha um produto seguindo o menu acima:");
		scanf("%d",&opcao);	
		
	switch (opcao){
		case 1: printf("Seu produto é um alimento não perecível!\n\n");
		break;
		case 2: case 3: case 4: printf("Seu produto é um alimento perecível!\n\n");
		break;
		case 5: case 6: printf("Seu produto se encaixa no vestuário!\n\n");
		break;
		case 7: printf("Seu produto se encaixa em higiene pessoal!\n\n");
		break;
		case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: printf("Seu produto se encaixa em limpeza e utencílios domésticos!\n\n");
		break;
		
		default: printf("Opção inválida!\n\n");
		break;
	}
	
	system("PAUSE");
	
	return 0;
}
