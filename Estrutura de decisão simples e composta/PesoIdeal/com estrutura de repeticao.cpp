#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float Alt, PesoIdeal;
	int sexo, i, pessoas;
	
	i = 1;
	
	printf("Peso ideal\n\n");

	printf("Quantos pessoas ir�o ser apresentadas? ");
		scanf("%d",&pessoas);
		
	system("cls");
	
	printf("Peso ideal\n\n");
	
	while(i<=pessoas){
		
		printf("Infora��es sobre a %d� pessoa:\n", i);
		printf("Digite seu sexo (1 Fem - 2 Masc): ");
			scanf("%d",&sexo);
		printf("Digite sua altura: ");
			scanf("%f",&Alt);
		
		switch(sexo){
			case 1: PesoIdeal = (62.1 * Alt) - 44.7;
					printf("O peso que ideal para voc� �: %.2f\n\n", PesoIdeal);
			break;
			case 2: PesoIdeal = (72.7 * Alt) - 58;
					printf("O peso que ideal para voc� �: %.2f\n\n", PesoIdeal);
			break;
		}
		
		i++;
	
	}

	return 0;
}
