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
	int N_Dep, i, nroFunc;
	
	i = 1;
	nroFunc = 10;
	
	printf("Calculo salarial\n\n");
	
	do{
		
		printf("%d� Funcion�rio:\n\n", i);
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
			
		printf("O sal�rio bruto �: %.2f reais.\n", SalarioBruto);
		printf("O sal�rio l�quido �: %.2f reais.\n", SalarioLiq);
		
		i++;
		
	}while(i<=nroFunc);
	
	system("pause");
	
	return 0;
}
