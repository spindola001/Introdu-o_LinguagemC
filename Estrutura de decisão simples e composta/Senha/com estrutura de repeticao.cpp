#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int Senha, i, chances;
	
	i=1;
	chances=3;
	
	
	printf("Verificando a senha\n\n");
	
	printf("Digite sua senha: ");
		scanf("%d",&Senha);
	
	while(i<chances){
	
		if(Senha == 12345){
			i=3;
			printf("Sua senha está correta! Acesso permitido.\n\n");
		}
		else{
			printf("Senha incorreta.\nTente novamente!\n\n");
			printf("Digite sua senha: ");
				scanf("%d",&Senha);
				
		i++;
		
		
	
		}
		
		
		
	}
	system("cls");
	system("pause");
	return 0;
}
