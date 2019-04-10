#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir informa ao usu�rio, seu sal�rio l�quido e bruto,
com base em suas horas trabalhadas no m�s multiplicadas pelo valor da
hora trabalhada e seu b�nus por cada dependente.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float SalarioLiq, SalarioBruto, ValorHora, HorasMes, BonusDep;
	int N_Dep;
	
	//Pede os valores ao usu�rio, bem como o n�mero de dependentes.
	printf("Calculo salarial");
	printf("\nDigite o n�mero de dependentes:");
		scanf("%d",&N_Dep);
	printf("Digite o valor da hora trabalhada:");
		scanf("%f",&ValorHora);
	printf("Digite a quantidade de horas trabalhadas no m�s:");
		scanf("%f",&HorasMes);
	
	//Efetua o c�lculo e retorna para o usu�rio, o valor de seu sal�rio l�quido e bruto.	
	BonusDep = 300;
	SalarioBruto = ValorHora * HorasMes;
	SalarioLiq = SalarioBruto + (N_Dep * BonusDep);
	
	printf("O sal�rio bruto �: %.2f reais.", SalarioBruto);
	printf("\nO sal�rio l�quido �: %.2f reais.", SalarioLiq);
	
	return 0;
}
