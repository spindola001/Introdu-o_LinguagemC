#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int opcaoC, acompanhamento;
	float precoUnit, precoFritas, precoRefri, total;
	char opcaoAC;
	
	printf("Card�pio McDonalds\n\n");
	printf("1- BigMc\t\tR$28,50\n2- Quarteir�o\t\tR$28,50\n3- McChicken\t\tR$17,50\n4- Cheddar McMel\tR$28,70\n5- McMax\t\tR$35,50\n\n");
	printf("Escolha um lanche: ");
		scanf("%d",&opcaoC);
		
	system("CLS");
		
	switch (opcaoC){
		case 1: printf("Voc� escolheu: BigMc	R$20,00\n\n");
			printf("Deseja acompanhamento? S/N\n");
				scanf("%s",&opcaoAC);
		
			system("CLS");
		
			precoUnit = 20;
			precoFritas = 10;
			precoRefri = 6.50;
				
				
			if (opcaoAC == 'S' || opcaoAC == 's'){
				printf("1- Fritas\t\t\t\tR$10,00\n2- Refrigerante\t\t\t\tR$6,50\n3- Acompanhamento completo\t\tR$16,50\n\n");
				printf("Escolha seu acompanhamento:");
					scanf("%d",&acompanhamento);
					
				system("CLS");	
					
				switch (acompanhamento){
					case 1: printf("Voc� escolheu um BigMac com fritas. Bom apetite!\n");
						total = precoUnit + precoFritas;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 2: printf("Voc� escolheu um BigMac com refrigerante. Bom apetite!\n");
						total = precoUnit + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 3: printf("Voc� escolheu um BigMac com acompanhamento completo. Bom apetite!\n");
						total = precoUnit + precoFritas + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					default: printf("Op��o inv�lida!");
					break;
				}
			}else{
				total = precoUnit;
				printf("Voc� optou por um lanche sem acompanhamento.");
				printf("Total a pagar: R$%.2f\n", total);
			}
		break;
		case 2: printf("Voc� escolheu: Quarteir�o	R$28,50\n");
			printf("Deseja acompanhamento? S/N\n");
				scanf("%s",&opcaoAC);
		
			system("CLS");
		
			precoUnit = 28.50;
			precoFritas = 10;
			precoRefri = 6.50;
				
				
			if (opcaoAC == 'S' || opcaoAC == 's'){
				printf("1- Fritas\t\t\t\tR$10,00\n2- Refrigerante\t\t\t\tR$6,50\n3- Acompanhamento completo\t\tR$45,00\n\n");
				printf("Escolha seu acompanhamento:");
					scanf("%d",&acompanhamento);
					
				system("CLS");	
					
				switch (acompanhamento){
					case 1: printf("Voc� escolheu um Quarteir�o com fritas. Bom apetite!\n");
						total = precoUnit + precoFritas;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 2: printf("Voc� escolheu um Quarteir�o com refrigerante. Bom apetite!\n");
						total = precoUnit + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 3: printf("Voc� escolheu um Quarteir�o com acompanhamento completo. Bom apetite!\n");
						total = precoUnit + precoFritas + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					default: printf("Op��o inv�lida!");
					break;
				}
			}else{
				total = precoUnit;
				printf("Voc� optou por um lanche sem acompanhamento.");
				printf("Total a pagar: R$%.2f\n", total);
			}
		break;
		case 3: printf("Voc� escolheu: McChicken	R$17,50\n");
			printf("Deseja acompanhamento? S/N\n");
				scanf("%s",&opcaoAC);
		
			system("CLS");
		
			precoUnit = 17.50;
			precoFritas = 10;
			precoRefri = 6.50;
				
				
			if (opcaoAC == 'S' || opcaoAC == 's'){
				printf("1- Fritas\t\t\t\tR$10,00\n2- Refrigerante\t\t\t\tR$6,50\n3- Acompanhamento completo\t\tR$34,00\n\n");
				printf("Escolha seu acompanhamento:");
					scanf("%d",&acompanhamento);
					
				system("CLS");	
					
				switch (acompanhamento){
					case 1: printf("Voc� escolheu um McChicken com fritas. Bom apetite!\n");
						total = precoUnit + precoFritas;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 2: printf("Voc� escolheu um McChicken com refrigerante. Bom apetite!\n");
						total = precoUnit + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 3: printf("Voc� escolheu um McChicken com acompanhamento completo. Bom apetite!\n");
						total = precoUnit + precoFritas + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					default: printf("Op��o inv�lida!");
					break;
				}
			}else{
				total = precoUnit;
				printf("Voc� optou por um lanche sem acompanhamento.");
				printf("Total a pagar: R$%.2f\n", total);
			}
		break;
		case 4: printf("Voc� escolheu: Cheddar McMelt	R$28,70\n");
				printf("Deseja acompanhamento? S/N\n");
				scanf("%s",&opcaoAC);
		
			system("CLS");
		
			precoUnit = 28.70;
			precoFritas = 10;
			precoRefri = 6.50;
				
				
			if (opcaoAC == 'S' || opcaoAC == 's'){
				printf("1- Fritas\t\t\t\tR$10,00\n2- Refrigerante\t\t\t\tR$6,50\n3- Acompanhamento completo\t\tR$45,20\n\n");
				printf("Escolha seu acompanhamento:");
					scanf("%d",&acompanhamento);
					
				system("CLS");	
					
				switch (acompanhamento){
					case 1: printf("Voc� escolheu um Cheddar McMelt com fritas. Bom apetite!\n");
						total = precoUnit + precoFritas;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 2: printf("Voc� escolheu um Cheddar McMelt com refrigerante. Bom apetite!\n");
						total = precoUnit + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 3: printf("Voc� escolheu um Cheddar McMelt com acompanhamento completo. Bom apetite!\n");
						total = precoUnit + precoFritas + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					default: printf("Op��o inv�lida!");
					break;
				}
			}else{
				total = precoUnit;
				printf("Voc� optou por um lanche sem acompanhamento.");
				printf("Total a pagar: R$%.2f\n", total);
			}
		break;
		case 5: printf("Voc� escolheu: McMax	R$35,50\n");
			printf("Deseja acompanhamento? S/N\n");
				scanf("%s",&opcaoAC);
		
			system("CLS");
		
			precoUnit = 35.50;
			precoFritas = 10;
			precoRefri = 6.50;
				
				
			if (opcaoAC == 'S' || opcaoAC == 's'){
				printf("1- Fritas\t\t\t\tR$10,00\n2- Refrigerante\t\t\t\tR$6,50\n3- Acompanhamento completo\t\tR$52,00\n\n");
				printf("Escolha seu acompanhamento:");
					scanf("%d",&acompanhamento);
					
				system("CLS");	
					
				switch (acompanhamento){
					case 1: printf("Voc� escolheu um McMax com fritas. Bom apetite!\n");
						total = precoUnit + precoFritas;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 2: printf("Voc� escolheu um McMax com refrigerante. Bom apetite!\n");
						total = precoUnit + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					case 3: printf("Voc� escolheu um McMax com acompanhamento completo. Bom apetite!\n");
						total = precoUnit + precoFritas + precoRefri;
						printf("Total a pagar: R$%.2f\n", total);
					break;
					default: printf("Op��o inv�lida!");
					break;
				}
			}else{
				total = precoUnit;
				printf("Voc� optou por um lanche sem acompanhamento.");
				printf("Total a pagar: R$%.2f\n", total);
			}
		break;
	
		default: printf("Comando inv�lido!");
		break;	
	}
	
	system("PAUSE");
	
	return 0;
}
