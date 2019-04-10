 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 /*
 O programa a seguir calcula a média entre dois números.
 */
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	float a, b, Media;
 	
 	printf("Média entre dois números\n");
 	printf("Digite um valor: ");
 		scanf("%f",&a);
 	printf("Digite outro valor: ");
 		scanf("%f",&b);
 	
	//Efetua o cálculo e devolve o resultado ao usuário.
 	Media = (a + b) / 2;
 	
 	printf("A média entre %.1f e %.1f é: %.1f", a, b, Media);
 	
 	return 0;
 }
