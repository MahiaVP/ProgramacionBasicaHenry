#include <stdio.h>
#define PI 3.14159

int main (){
	int n,k,g;
	float a,b,c,per,area;
	do{
		printf("Escoja la figura a calcular:\n1) Cuadrado.\n2) Rectangulo.\n3) Triangulo.\n4) Circulo.\n");
		scanf("%d",&n);
		printf("Que desea calcular?\n1) Perimetro.\n2) Area.\n");
		scanf("%d",&g);
	if (g==1){
		if (n==1){
		printf("Digite la medida de uno de los lados: ");
		scanf("%f",&a);
		per=4*a;
		printf("El perimetro es: %.3f.\n",per);
			} else if(n==2){
				printf("Digite la medida de la base y la altura separadas por un solo espacio: ");
				scanf("%f %f",&a,&b);
				per=2*a+2*b;
				printf("El perimetro es: %.3f.\n",per);
				} else if (n==3){
					printf("Digite la medida de los tres lados por un solo espacio: ");
					scanf("%f %f %f",&a,&b,&c);
					per=a+b+c;
					printf("El perimetro es: %.3f.\n",per);
				} else {
					printf("Digite el valor del radio: ");
					scanf("%f",&a);
					per=2*PI*a;
					printf("El perimetro es: %.3f.\n",per);	
				}
				printf("Desea continuar?\n0) No.\n1)Si.\n");
				scanf("%d",&k);
		}else {
			if (n==1){
			printf("Digite la medida de uno de los lados: ");
			scanf("%f",&a);
			area=a*a;
			printf("El area es: %.3f.\n",area);
			} else if(n==2){
				printf("Digite la medida de la base y la altura separadas por un solo espacio: ");
				scanf("%f %f",&a,&b);
				area=a*b;
				printf("El area es: %.3f.\n",area);
				} else if (n==3){
					printf("Digite la medida de la base y la altura separadas por un solo espacio: ");
					scanf("%f %f",&a,&b);
					area=a*b/2;
					printf("El area es: %.3f.\n",area);
				} else {
					printf("Digite el valor del radio: ");
					scanf("%f",&a);
					area=PI*a*a;
					printf("El area es: %.3f.\n",area);
		}
		printf("Desea continuar?\n0) No.\n1)Si.\n");
		scanf("%d",&k);
	}
	} while(k==1);	
}
