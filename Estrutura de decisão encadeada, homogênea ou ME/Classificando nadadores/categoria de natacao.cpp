#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int idade;
	
	printf("Classificando nadadores\n\n");
	printf("Informe sua idade: ");
		scanf("%d",&idade);
		
	if (idade >= 5 && idade <= 7)
		printf("Este é um nadador infantil A!\n");
	else{
		if (idade >= 8 && idade <= 10)
			printf("Este é um nadador infantil B!\n");
		else{
			if (idade >= 11 && idade <= 13)
				printf("Este é um nadador juvenil A!\n");
			else{
				if (idade >= 14 && idade <= 17)
					printf("Este é um nadador juvenil B!\n");
				else{
					if (idade >= 18)
						printf("Este é um nadador senior!\n");
					else
						printf("Idade inválida. Nossos nadadores tem idade acima de cinco anos!\n");
				}
			}
		}
	}
	system("PAUSE");
	
	return 0;
}
