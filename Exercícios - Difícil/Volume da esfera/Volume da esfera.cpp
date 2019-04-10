#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*
O programa a seguir calcula a volume de uma esfera.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Pi, Raio, Volume;
	printf("Volume de uma esfera");
	
	printf("\nDigite o valor do raio:");
		scanf("%f",&Raio);
	
	//Efetua o calculo baseando-se em uma fórmula matemática e retorna um valor ao usuário.
	Pi = 3.14;
	Volume = (4 * Pi * (pow(Raio,3)) / 3);
	
	printf("O volume da esfera é: %.4f", Volume);
	
	return 0;
}
