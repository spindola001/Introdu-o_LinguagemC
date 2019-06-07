#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int Senha;
	
	printf("Verificando a senha");
	printf("Digite sua senha: ");
		scanf("%d",&Senha);
	
	if(Senha == 12345){
		printf("Sua senha está correta!");
	}
	else{
		printf("Senha incorreta.\n Tente novamente!");
	}
	return 0;
}
