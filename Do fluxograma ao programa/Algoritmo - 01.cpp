#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir calcula o perímetro recebendo do usuário a área.
*/
int main(){
	setlocale(LC_ALL, "portuguese");
	float perimetro, a;
	
	printf("Calculando perímetro!\n");
	printf("Digite o valor da área: ");
		scanf("%f",&a);
	
	/*
	Efetua o cálculo de acordo com uma fórmula matemática e devolve
	o resultado ao usuário.
	*/
	perimetro = 4 * a;
	
	printf("O perímetro é: %.2f", perimetro);
	
	return 0;
}
