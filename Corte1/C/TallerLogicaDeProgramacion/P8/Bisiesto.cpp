#include <stdio.h>

int main (){
    int a,k;
    printf("Programa para verificar si un a�o es bisiesto.\n");
    do{
    printf("Digite el a�o: ");
    scanf("%d", &a);
    if ( a%4 == 0){
       printf("Si es bisiesto.\n");
       printf("Desea continuar?\n0) No.\n1) Si.\n");
       scanf("%d",&k);
       } else {
              printf("El a�o no es bisiesto.\n");
               printf("Desea continuar?\n0) No.\n1) Si.\n");
               scanf("%d",&k);
               }
       }while (k==1);
}
