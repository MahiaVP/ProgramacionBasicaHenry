#include <stdio.h>

int main(){
    printf("Categoria de nota del examen.\n");
    int k;
    float nota;
    do{
    printf("Digite la nota que saco en su examen de 1 a 10. Puede incluir decimales: ");
    scanf("%f",&nota);
    if (nota < 5){
       printf("Suspenso.\n");
       printf("Desea continuar?\n0) No.\n1) Si.\n");
       scanf("%d",&k);
       } else if (nota>=5 && nota<7){
         printf("Aprobado.\n");
         printf("Desea continuar?\n0) No.\n1) Si.\n");
         scanf("%d",&k);
         }else if (nota>=7 && nota<9){
               printf("Notable.\n");
               printf("Desea continuar?\n0) No.\n1) Si.\n");
               scanf("%d",&k);
               } else if (nota>=9 && nota<10){
                      printf("Sobresaliente.\n");
                      printf("Desea continuar?\n0) No.\n1) Si.\n");
                      scanf("%d",&k);
                      } else if (nota ==10){
                             printf("Matricula de honor.\n");
                             printf("Desea continuar?\n0) No.\n1) Si.\n");
                             scanf("%d",&k);
                             } else {
                                    printf("Opcion no valida.\n");
                                    printf("Desea continuar?\n0) No.\n1) Si.\n");
                                    scanf("%d",&k);
                                    }
    }while (k==1);
}
