#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int tab, num, res;
	
	puts("Digite a tabuada desejada: ");
		scanf("%d",&tab);
	
	system("CLS");
	
	num = 1;
	
	while(num <= 10){
		 res = tab * num;
		 printf("%d X %d = %d\n", tab, num, res);
		 num++;
	}
	
	system("pause");
	return 0;
}
