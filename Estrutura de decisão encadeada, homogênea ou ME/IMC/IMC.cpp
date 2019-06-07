#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float peso, altura, imc;
	//O programa a seguir calcula o IMC do usuário e informa sua situação.
	printf("\t\tIMC\n");
	printf("Informe seu peso em KG: ");
		scanf("%f",&peso);
	printf("Informe sua altura em metros: ");
		scanf("%f",&altura);
		
	imc = peso / pow(altura,2);
	
	if (imc < 18){
		printf("Magreza!");
		printf("%.2f",imc);
	}else
		if (imc >= 18 && imc <=24.9){
			printf("Saudável!");
			printf("%.2f",imc);
		}else
			if (imc >=25.0 && imc <=29.9){
				printf("Sobrepeso!");
				printf("%.2f",imc);
			}else
				if (imc >= 30.0){
					printf("Obesidade!");
					printf("%.2f",imc);
				}
				
	//Gostaria de controlar melhor os valores reais digitados. Regras de ponto ou vírgula.
				
	return 0;
}
