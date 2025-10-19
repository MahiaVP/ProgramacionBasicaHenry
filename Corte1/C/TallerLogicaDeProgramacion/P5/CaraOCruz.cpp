#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    int monto,k;
    printf("Programa para apostar.\nSi sale cara obtendra el doble de lo apostado.\nSi sale cruz perdera todo.\n");
    do{
    printf("Indique la cantidad a apostar: ");
    scanf("%d",&monto);
    srand(time(NULL));
    int resultado = rand() % 2;
    if (resultado == 0) {
        printf("Cruz\nMala suerte :( ha perdido todo.\n");
        printf("Desea continuar?\n0) No.\n1) Si.\n");
        scanf("%d",&k);
        } else {
               printf("Cara\nFelicidades!! Ha ganado el doble de su apuesta.\n");
               printf("Desea continuar?\n0) No.\n1) Si.\n");
               scanf("%d",&k);
               }
    }while (k==1);
}
