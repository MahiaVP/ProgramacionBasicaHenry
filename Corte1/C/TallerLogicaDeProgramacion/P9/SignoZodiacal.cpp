#include <stdio.h>

int main (){
    int d,m,k;
    printf("Programa para saber cual es su signo zodiacal.\n");
    do{
    printf("Digite su fecha de nacimiento en numeros.\nEl formato es DD MM.\nSepare el dia y el mes con un espacio.\nEjemplo: 3 de mayo (3 5).\n");
    scanf("%d %d",&d,&m);
    if(m==1){
             if(d<21){
             printf("Su signo es Capricornio.\n");
             printf("Desea continuar?\n0) No.\n1) Si.\n");
             scanf("%d",&k);
             } else {
               printf("Su signo es Acuario.\n");
               printf("Desea continuar?\n0) No.\n1) Si.\n");
               scanf("%d",&k);
                  }
    }else if (m==2){
             if(d<20){
             printf("Su signo es Acuario.\n");
             printf("Desea continuar?\n0) No.\n1) Si.\n");
             scanf("%d",&k);
             }else {
               printf("Su signo es Piscis.\n");
               printf("Desea continuar?\n0) No.\n1) Si.\n");
               scanf("%d",&k);
                  }
             }else if (m==3){
                   if(d<21){
                   printf("Su signo es Piscis");
                   printf("Desea continuar?\n0) No.\n1) Si.\n");
                   scanf("%d",&k);
                   } else {
                     printf("Su signo es Aries.\n");
                     printf("Desea continuar?\n0) No.\n1) Si.\n");
                     scanf("%d",&k);
                     }
                   }else if (m==4){
                         if(d<21){
                         printf("Su signo es Aries.\n");
                         printf("Desea continuar?\n0) No.\n1) Si.\n");
                         scanf("%d",&k);
                         } else {
                         printf("Su signo es Tauro.\n");
                         printf("Desea continuar?\n0) No.\n1) Si.\n");
                         scanf("%d",&k);
                         }
                         }else if(m==5){
                               if(d<21){
                               printf("Su signo es Tauro.\n");
                               printf("Desea continuar?\n0) No.\n1) Si.\n");
                               scanf("%d",&k);
                               } else {
                               printf("Su signo es Geminis.\n");
                               printf("Desea continuar?\n0) No.\n1) Si.\n");
                               scanf("%d",&k);
                               }
                               }else if(m==6){
                                     if(d<22){
                                     printf("Su signo es Geminis.\n");
                                     printf("Desea continuar?\n0) No.\n1) Si.\n");
                                     scanf("%d",&k);
                                     } else {
                                     printf("Su signo es Cancer.\n");
                                     printf("Desea continuar?\n0) No.\n1) Si.\n");
                                     scanf("%d",&k);
                                     }
                                     }else if(m==7){
                                           if(d<23){
                                           printf("Su signo es Cancer.\n");
                                           printf("Desea continuar?\n0) No.\n1) Si.\n");
                                           scanf("%d",&k);
                                           } else {
                                           printf("Su signo es Leo.\n");
                                           printf("Desea continuar?\n0) No.\n1) Si.\n");
                                           scanf("%d",&k);
                                           }
                                           }else if(m==8){
                                                 if(d<24){
                                                 printf("Su signo es Leo.\n");
                                                 printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                 scanf("%d",&k);
                                                 } else {
                                                 printf("Su signo es Virgo.\n");
                                                 printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                 scanf("%d",&k);
                                                 }
                                                 }else if(m==9){
                                                       if(d<24){
                                                       printf("Su signo es Virgo.\n");
                                                       printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                       scanf("%d",&k);
                                                       } else {
                                                       printf("Su signo es Libra.\n");
                                                       printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                       scanf("%d",&k);
                                                       }
                                                       }else if(m==10){
                                                             if(d<24){
                                                             printf("Su signo es Libra.\n");
                                                             printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                             scanf("%d",&k);
                                                             } else {
                                                             printf("Su signo es Escorpio.\n");
                                                             printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                             scanf("%d",&k);
                                                             }
                                                             }else if(m==11){
                                                                   if(d<23){
                                                                   printf("Su signo es Escorpio.\n");
                                                                   printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                                   scanf("%d",&k);
                                                                   } else {
                                                                   printf("Su signo es Sagitario.\n");
                                                                   printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                                   scanf("%d",&k);
                                                                   }
                                                                   }else{
                                                                         if(d<22){
                                                                         printf("Su signo es Sagitario.\n");
                                                                         printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                                         scanf("%d",&k);
                                                                         } else {
                                                                         printf("Su signo es capricornio.\n");
                                                                         printf("Desea continuar?\n0) No.\n1) Si.\n");
                                                                         scanf("%d",&k);
                                                                         }
                                                                         }
    }while (k==1);
}
