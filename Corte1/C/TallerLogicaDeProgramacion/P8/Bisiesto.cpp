#include <stdio.h>

int main (){
    int a,k;
    printf("Programa para verificar si un año es bisiesto.\n");
    do{
    printf("Digite el año: ");
    scanf("%d", &a);
    if ( a%4 == 0){
       printf("Si es bisiesto.\n");
       printf("Desea continuar?\n0) No.\n1) Si.\n");
       scanf("%d",&k);
       } else {
              printf("El año no es bisiesto.\n");
               printf("Desea continuar?\n0) No.\n1) Si.\n");
               scanf("%d",&k);
               }
       }while (k==1);
}
