#include <stdio.h>

int main (){
	int n,multi=0,k;
	do{
		int c=0;
		printf("Escriba un numero: ");
		scanf("%d",&n);
		do{
		multi=c*n;
		printf("%d x %d = %d\n",n,c,multi);
		c++;
			}while(c<=10);
		printf("Desea continuar?\n0) No.\n1) Si.\n");
		scanf("%d",&k);
	}while (k==1);
}
