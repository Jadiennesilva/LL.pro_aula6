#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int idade;
	
	
	printf("digite sua idade: ");
	scanf("%d" , &idade);


    if (idade >= 18){
    	
    printf("maior de idade:/n");  
}


    if (idade <= 18){
	
	printf("menor de idade:\n");
}


	system("pause");
	return 0;
}

    

   


    

