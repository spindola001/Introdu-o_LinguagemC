 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 /*
 O programa a seguir calcula a m�dia entre dois n�meros.
 */
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	float a, b, Media;
 	
 	printf("M�dia entre dois n�meros\n");
 	printf("Digite um valor: ");
 		scanf("%f",&a);
 	printf("Digite outro valor: ");
 		scanf("%f",&b);
 	
	//Efetua o c�lculo e devolve o resultado ao usu�rio.
 	Media = (a + b) / 2;
 	
 	printf("A m�dia entre %.1f e %.1f �: %.1f", a, b, Media);
 	
 	return 0;
 }
