#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float peso, altura, imc;
	int i, pessoas;
	
	i = 1;
	
	//O programa a seguir calcula o IMC do usu�rio e informa sua situa��o.
	printf("IMC\n");
	
	printf("N�mero de pessoas: ");
		scanf("%d",&pessoas);
		
	system("cls");
	
	while(i<=pessoas){
		
		printf("Informa��es da %d� pessoa:\n\n", i);
		printf("Informe seu peso em KG: ");
			scanf("%f",&peso);
		printf("Informe sua altura em metros: ");
			scanf("%f",&altura);
			
		imc = peso / pow(altura,2);
		
		if (imc < 18){
			printf("Magreza!\n");
			printf("IMC: %.2f\n\n",imc);
		}else
			if (imc >= 18 && imc <=24.9){
				printf("Saud�vel!\n");
				printf("IMC: %.2f\n\n",imc);
			}else
				if (imc >=25.0 && imc <=29.9){
					printf("Sobrepeso!\n");
					printf("IMC: %.2f\n\n",imc);
				}else
					if (imc >= 30.0){
						printf("Obesidade!\n");
						printf("IMC: %.2f\n\n",imc);
					}
						
	i++;
		
	}
	
	
				
	//Gostaria de controlar melhor os valores reais digitados. Regras de ponto ou v�rgula.
				
	return 0;
}
