#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir calcula o per�metro recebendo do usu�rio a �rea.
*/
int main(){
	setlocale(LC_ALL, "portuguese");
	float perimetro, a;
	
	printf("Calculando per�metro!\n");
	printf("Digite o valor da �rea: ");
		scanf("%f",&a);
	
	/*
	Efetua o c�lculo de acordo com uma f�rmula matem�tica e devolve
	o resultado ao usu�rio.
	*/
	perimetro = 4 * a;
	
	printf("O per�metro �: %.2f", perimetro);
	
	return 0;
}
