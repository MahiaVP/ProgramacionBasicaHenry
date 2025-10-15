#include <stdio.h>

int main(){
	char contrase[]= "hola";
	char contra[4];
	int i,k,m=0,intento=0,c;
	
	do{
		printf("Escriba la clave. Digite maximo 4 caracteres: ");
		scanf("%s",&contra);
		m=0;
		for (i=0;i<4;i++) {
		
			if (contrase[i]==contra[i]){
				m=m+1;
			} else{
				i=4;
				} 
		}
		if (m==4){
			printf("Correcto\n");
			c=1;
			k=0;
		}else{
			printf("Incorrecto\n");
		}
		intento=intento+1;
		
		if(intento<3 && c!=1){
			printf("Desea volver a intentarlo?\n1)Si.\n0)No.\n");
			scanf("%d",&k);
		}
		
	}while(k==1 && intento<3);
	if (c!=1){
		printf("Ha alcanzado el maximo de intentos permitidos.\n");
	}
}


