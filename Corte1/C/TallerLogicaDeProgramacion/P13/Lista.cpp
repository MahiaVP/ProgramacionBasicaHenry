#include <stdio.h>

int main (){
	int k,suma=0,c=0,promedio=0,m;
	printf("Programa para calcular el promedio de una lista de numeros, la cual acaba en un numero negativo.\n");
	do{
		do{
			printf("Digite un numero. (Recuerde que el ultimo numero de la lista debe ser negativo.): ");
			scanf("%d",&k);
			suma=suma+k;
			c=c+1;
		}while (k>0);
		promedio=suma/c;
		printf("%d\n",promedio);
		
		printf("Quiere hacer otra lista?\n1)Si.\n0)No\n");
		scanf("%d",&m);
	}while(m==1);
}
