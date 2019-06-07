#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float Alt, PesoIdeal;
	int sexo;
	
	printf("Peso ideal\n\n");
	printf("Digite seu sexo (1 Fem - 2 Masc): ");
		scanf("%d",&sexo);
	printf("Digite sua altura: ");
		scanf("%f",&Alt);
		
	if(sexo == 1){
		PesoIdeal = (62.1 * Alt) - 44.7;
		printf("O peso que ideal para você é: %.2f", PesoIdeal);
	} 
	if(sexo == 2){
		PesoIdeal = (72.7 * Alt) - 58;
		printf("O peso que ideal para você é: %.2f", PesoIdeal);	
	}
	
	return 0;
}
