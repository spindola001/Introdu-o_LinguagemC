#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float A, B, C;
	
	printf("� ou n�o um tri�ngulo?\n\n");
	printf("Digite o lado A:");
		scanf("%f",&A);
	printf("Digite o lado B:");
		scanf("%f",&B);
	printf("Digite o lado C:");
		scanf("%f",&C);
		
	if (A + B > C && A + C > B && C + B > A){
		if (A == B && B == C){
			printf("O tri�ngulo � equil�tero!\n");
		}else 
		if (A != B && B != C && A != C ){
			printf("O tri�ngulo � escaleno!\n");
		}else 
			printf("O tri�ngulo � isoceles\n");
	}else
		printf("Os valores n�o formam um tri�ngulo!\n");
		
	system("PAUSE");
		
	return 0;
	
}
