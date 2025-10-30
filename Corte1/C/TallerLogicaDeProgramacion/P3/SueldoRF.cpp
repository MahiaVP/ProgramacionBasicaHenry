#include <stdio.h>
#include <string.h>

int main (){
    int k;
    float h,precio,sb,rf,sn,rete=0.05;
    char nombre[100];
    printf("Nomina del trabajador.\n");
    do{
       printf("Indique el nombre del trabajador: ");
       getchar();
       fgets(nombre, 100, stdin);
       printf("Indique el precio que cobra por hora el trabajador: ");
       scanf("%f",&precio);
       printf("Indique la cantidad de horas trabajadas: ");
       scanf("%f",&h);
       sb = h*precio;
       rf = sb*rete;
       sn = sb-rf;
       printf("Trabajador: %s\nSueldo bruto: %.2f.\nRetencion: %.2f.\nSueldo neto: %.2f.\n",nombre,sb,rf,sn);
       printf("Desea continuar?\n0) No.\n1) Si.\n");
       scanf("%d",&k);
       } while (k==1);
}
    


