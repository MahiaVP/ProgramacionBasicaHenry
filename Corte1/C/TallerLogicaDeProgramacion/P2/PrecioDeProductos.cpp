#include <stdio.h>

int main (){
    int k,p;
    float a,precio;
    printf("Precio total de productos vendidos.\n");
    do{
         char palabra[50];
         printf("Indique el nombre del producto:");
         scanf("%s",palabra);
         printf("Indique el precio unitario del producto:");
         scanf("%f",&a);
         printf("Indique cuantas unidades vendio del producto:");
         scanf("%d",&p);
         precio=a*p;
         printf("%d unidades de %s le generan %.3f\n",p,palabra,precio);
         printf("Desea continuar?\n0) No.\n1) Si.\n");
         scanf("%d",&k);
       } while (k==1);
         
}
