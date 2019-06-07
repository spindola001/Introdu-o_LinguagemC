#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float A, B, C;
	
	printf("É ou não um triângulo?\n\n");
	printf("Digite o lado A:");
		scanf("%f",&A);
	printf("Digite o lado B:");
		scanf("%f",&B);
	printf("Digite o lado C:");
		scanf("%f",&C);
		
	if (A + B > C && A + C > B && C + B > A){
		if (A == B && B == C){
			printf("O triângulo é equilátero!\n");
		}else 
		if (A != B && B != C && A != C ){
			printf("O triângulo é escaleno!\n");
		}else 
			printf("O triângulo é isoceles\n");
	}else
		printf("Os valores não formam um triângulo!\n");
		
	system("PAUSE");
		
	return 0;
	
}
