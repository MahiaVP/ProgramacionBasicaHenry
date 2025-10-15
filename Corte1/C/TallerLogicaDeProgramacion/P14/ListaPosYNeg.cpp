#include <stdio.h>

int main(){
	int k,n;
	printf("Programa que determina cuantos nuemros son negativos y cuantos son positivos dentro de una lista.\n\n");
	do{
		int neg=0,pos=0;
		do{
			printf("Digite un valor.(Cuando desee terminar la lista, digite 0): ");
			scanf("%d",&n);
			if(n<0){
				neg=neg+1;
			} else if (n>0 && n!=0){
				pos=pos+1;
			}
		}while (n!=0);
		printf("%d son negativos.\n%d son positivos.\n",neg,pos);
		printf("Desea hacer otra lista?\n1)Si.\n0)No.\n");
		scanf("%d",&k);
	}while(k==1);
}

