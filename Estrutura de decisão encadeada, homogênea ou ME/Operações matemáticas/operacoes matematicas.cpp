#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float a, b, resultado;
	int operacao;
	
	printf("||||||||||||||||||Opera��es matem�ticas|||||||||||||||||||\n\n");
	printf("1 - Soma \n2 - Subtra��o \n3 - Divis�o \n4 - Multiplica��o\n\n");
	printf("Escolha uma opea��o matem�tica: ");
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
		default: printf("Comando inv�lido! Tente novamente...\n\n");
		break;	
	}
	
	system("PAUSE");
	return 0;
	
}
