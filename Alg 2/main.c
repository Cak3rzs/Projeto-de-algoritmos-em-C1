#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c;
	printf("Digite um nmr inteiro:");
	scanf("%d", &a);
	printf("Digite outro nmr inteiro:");
	scanf ("%d", &b);
		if(a == b){
			c = a+b;
			printf("\n A soma de A e B = %d", c );
	}
		if(a != b){
			c= a*b;
			printf("\n A  multiplicacao de A e B = %d", c);
		}
	printf("\n O valor de c eh= %d", c);
}
