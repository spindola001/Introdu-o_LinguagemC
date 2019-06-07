#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float a, b, resultado;
	int operacao;
	
	printf("||||||||||||||||||Operações matemáticas|||||||||||||||||||\n\n");
	printf("1 - Soma \n2 - Subtração \n3 - Divisão \n4 - Multiplicação\n\n");
	printf("Escolha uma opeação matemática: ");
		scanf("%d",&operacao);
		
	system("CLS");
		
	
		
	switch (operacao){
		case 1: printf("Digte um valor: ");
					scanf("%f",&a);
				printf("Digite outro valor: ");
					scanf("%f",&b);
				
				resultado = a + b;
				
				printf("%.1f + %.1f = %.1f\n", a, b, resultado);	
		break;
		case 2: printf("Digte um valor: ");
					scanf("%f",&a);
				printf("Digite outro valor: ");
					scanf("%f",&b);
				
				resultado = a - b;
				
				printf("%.1f - %.1f = %.1f\n", a, b, resultado);
		break;
		case 3: printf("Digte um valor: ");
					scanf("%f",&a);
				printf("Digite outro valor: ");
					scanf("%f",&b);
				
				resultado = a / b;	
				
				printf("%.1f / %.1f = %.1f\n", a, b, resultado);
		break;
		case 4: printf("Digte um valor: ");
					scanf("%f",&a);
				printf("Digite outro valor: ");
					scanf("%f",&b);
				
				resultado = a * b;	
				
				printf("%.1f * %.1f = %.1f\n", a, b, resultado);
		break;
		default: printf("Comando inválido! Tente novamente...\n\n");
		break;	
	}
	
	system("PAUSE");
	return 0;
	
}
