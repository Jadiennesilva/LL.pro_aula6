#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int idade;
	
	
	printf("digite sua idade: ");
	scanf("%d" , &idade);
	
	idade= idade % 2;
	


    if (idade%2== 00){
    	
       printf("sua idade vai ser par:/n");  
    }


    if (idade == 1){
	
	   printf("sua idade nao é par:\n");
    }


	system("pause");
	return 0;
}

    

   


    

