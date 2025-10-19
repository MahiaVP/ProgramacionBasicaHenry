#include <stdio.h>

int main(){
    printf("Comparacion de numeros.\n");
    
    int a, b, k;
    do{
        printf("Escriba dos numeros separados por un espacio: ");
        scanf("%d %d",&a,&b);
        if (a<b){
                 printf("%d es mayor.\n",b);
        }else if(b<a){
              printf("%d es mayor.\n",a);
              }else{
                    printf("Los numeros son iguales.\n");
                    }
        printf("Desea continuar?\n0) No.\n1) Si.\n");
        scanf("%d",&k);
    }while(k==1);

}
