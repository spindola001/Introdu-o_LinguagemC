#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float inicioTurno, fimTurno;
	//O programa a seguir administra os turnos de uma empresa.
	printf("Turno de trabalho\n");
	printf("Informe o hor�rio de in�cio do seu turno: ");
		scanf("%f",&inicioTurno);
	printf("Informe o hor�rio final do seu turno: ");
		scanf("%f",&fimTurno);
		
	if (inicioTurno >= 5 && fimTurno <= 12.59)
		printf("Manh�");
	else{
		if (inicioTurno >= 13 && fimTurno <= 20.59)
			printf("Tarde");
		else{
			if (inicioTurno >= 21 && fimTurno <= 4.59)
				printf("Noite");
			else{
				printf("Comando inv�lido!");
			}
		}
	}
	
	//O programa apresenta alguns problemas na estrutura de decis�o.
	//Se o turno for, por exemplo, das 18h at� as 22h, o programa n�o apresenta o turno.
	
	return 0;
}
