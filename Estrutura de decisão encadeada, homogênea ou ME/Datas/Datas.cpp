#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int dia1, mes1, ano1, dia2, mes2, ano2, maiorDia, maiorMes, maiorAno, menorDia, menorMes, menorAno;
	//O programa recebe duas data e as apresenta em ordem cescente.
	printf("Datas\n");
	printf("Informe o primeiro dia: ");
		scanf("%d",&dia1);
	printf("Informe o primeiro mes: ");
		scanf("%d",&mes1);
	printf("Informe o primeiro ano: ");
		scanf("%d",&ano1);
		
	system("CLS");
		
	printf("Informe o segundo dia: ");
		scanf("%d",&dia2);
	printf("Informe o segundo mes: ");
		scanf("%d",&mes2);
	printf("Informe o segundo ano: ");
		scanf("%d",&ano2);
		
	if (ano1 > ano2){
		maiorAno = ano1;
		maiorMes = mes1;
		maiorDia = dia1;
		menorAno = ano2;
		menorMes = mes2;
		menorDia = dia2;
		
		system("CLS");
		
		printf("Data menos recente: %.2d/%.2d/%d\nData mais recente: %.2d/%.2d/%d", menorDia, menorMes, menorAno,maiorDia, maiorMes, maiorAno);
	}else{
		if (ano1 < ano2){
			maiorAno = ano2;
			maiorMes = mes2;
			maiorDia = dia2;
			menorAno = ano1;
			menorMes = mes1;
			menorDia = dia1;
			
			system("CLS");
			
			printf("Data menos recente: %.2d/%.2d/%d\nData mais recente: %.2d/%.2d/%d", menorDia, menorMes, menorAno,maiorDia, maiorMes, maiorAno);
		}else{
			if (mes1 > mes2){
				maiorAno = ano1;
				maiorMes = mes1;
				maiorDia = dia1;
				menorAno = ano2;
				menorMes = mes2;
				menorDia = dia2;
				
				system("CLS");
				
				printf("Data menos recente: %.2d/%.2d/%d\nData mais recente: %.2d/%.2d/%d", menorDia, menorMes, menorAno,maiorDia, maiorMes, maiorAno);
			}else{
				if (mes1 < mes2){
					maiorAno = ano2;
					maiorMes = mes2;
					maiorDia = dia2;
					menorAno = ano1;
					menorMes = mes1;
					menorDia = dia1;
					
					system("CLS");
					
					printf("Data menos recente: %.2d/%.2d/%d\nData mais recente: %.2d/%.2d/%d", menorDia, menorMes, menorAno,maiorDia, maiorMes, maiorAno);
				}else{
					if (dia1 > dia2){
						maiorAno = ano1;
						maiorMes = mes1;
						maiorDia = dia1;
						menorAno = ano2;
						menorMes = mes2;
						menorDia = dia2;
						
						system("CLS");
						
						printf("Data menos recente: %.2d/%.2d/%d\nData mais recente: %.2d/%.2d/%d", menorDia, menorMes, menorAno,maiorDia, maiorMes, maiorAno);
					}else{
						if (dia1 < dia2){
							maiorAno = ano2;
							maiorMes = mes2;
							maiorDia = dia2;
							menorAno = ano1;
							menorMes = mes1;
							menorDia = dia1;
							
							system("CLS");
							
							printf("Data menos recente: %.2d/%.2d/%d\nData mais recente: %.2d/%.2d/%d", menorDia, menorMes, menorAno,maiorDia, maiorMes, maiorAno);
						}else{	
								system("CLS");
								
								printf("As datas são iguais!");
						}
					}
				}
			} 
		}
	}
	
	
	
	
	
	
	return 0;
}
