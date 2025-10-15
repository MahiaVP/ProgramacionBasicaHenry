#include <stdio.h>

int main(){
	printf("Programa para determinar si un numero es primo.\n\n");
	
	int k,n,m,div,j=0;
	do{
		j=0;
		printf("Ingrese un numero: ");
		scanf("%d",&n);
		m=n;
		do{
			div=n%m;
			if (div==0){
				j=j+1;
			}
			m=m-1;
		}while(m>0);
		if(j==2){
			printf("El numero %d es primo.\n",n);
		} else {
			printf ("El numero %d no es primo.\n",n);
		}
		printf ("Desea verificar otro numero?\n1)Si.\n0)No.\n");
		scanf("%d",&k);
	}while(k==1);
}
