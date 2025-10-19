#include <stdio.h>

int main (){
    int k,a,b,c;
    printf("Valor maximo y minimo.\n");
    do{
       printf("Escriba 3 numeros enteros separados por un solo espacio entre si: ");
       scanf("%d %d %d",&a,&b,&c);
       if (a<b && b<c){
               printf("El valor minimo es: %d.\nEl valor maximo es: %d.\n",a,c);
               printf("Desea continuar?\n0) No.\n1) Si.\n");
               scanf("%d",&k);
               } else if (a<c && c<b){
                      printf("El valor minimo es: %d.\nEl valor maximo es: %d.\n",a,b);
                      printf("Desea continuar?\n0) No.\n1) Si.\n");
                      scanf("%d",&k);
                      } else if (b<a && a<c){
                             printf("El valor minimo es: %d.\nEl valor maximo es: %d.\n",b,c);
                             printf("Desea continuar?\n0) No.\n1) Si.\n");
                             scanf("%d",&k);
                             } else if (b<c && c<a){
                                    printf("El valor minimo es: %d.\nEl valor maximo es: %d.\n",b,a);
                                    printf("Desea continuar?\n0) No.\n1) Si.\n");
                                    scanf("%d",&k);
                                    } else if (c<a && a<b){
                                           printf("El valor minimo es: %d.\nEl valor maximo es: %d.\n",c,b);
                                           printf("Desea continuar?\n0) No.\n1) Si.\n");
                                           scanf("%d",&k);
                                           } else {
                                                  printf("El valor minimo es: %d.\nEl valor maximo es: %d.\n",c,a);
                                                  printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                  scanf("%d",&k);
                                                  }
       }while (k==1);
}
