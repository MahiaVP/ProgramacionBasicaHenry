#include <stdio.h>

int main(){
    printf("Programa para imprimir tres numeros pares entre dos numeros dados.\n\n");
    int k,n,n2,divi=0,num[3],i=0;
    
    do{
        printf("Escriba dos numeros separados por un espacio:\n");
        scanf("%d %d",&n,&n2);
        if(n<n2){
            printf("El primer numero debe ser mayor que el segundo.\nDesea volverlo a intentar?\n1)Si.\n0)No.\n");
            scanf("%d",&k);
        } else{
               i=0;
               do{
                  n=n-1;
                  divi=n%2;
                  if(divi==0){
                  num[i]=n;
                  i++;
                  }
               }while(n>n2 && i<3);
        if (i == 3) {
              printf("%d\n%d\n%d\n", num[0], num[1], num[2]);
        } else {
          printf("No hay suficientes numeros pares entre los dados.\n");
        }
        printf("Desea volverlo a intentar?\n1) Si\n0) No\n");
        scanf("%d", &k);
        }
    }while(k==1);
}
