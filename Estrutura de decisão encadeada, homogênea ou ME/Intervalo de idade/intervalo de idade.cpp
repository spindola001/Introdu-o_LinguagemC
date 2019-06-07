#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int idade;
	
	printf("Intervalo de iddade\n\n");
	printf("Digite sua idade: ");
		scanf("%d",&idade);
		
	if (idade >= 10 && idade <=18)
		printf("Sua idade está entre 10 e 18 anos de idade!\n");
	else{
		if (idade < 10)
			printf("Sua idade está abaixo de 10 anos de idade!\n");
		else{
			if (idade > 18)
			printf("Sua idade está acima de 18 anos de idade!\n");
		}
	}
	
	system("PAUSE");
	
	return 0;
		
}
