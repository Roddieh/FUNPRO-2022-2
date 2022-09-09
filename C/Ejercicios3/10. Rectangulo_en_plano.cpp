#include <stdio.h>
#include <math.h>

int main(){
	double xa,ya,xb,yb,xc,yc,xd,yd,
	pendienteAB,pendienteBC,pendienteCD,pendienteDA;
	int sonParalelasABCDBCDA,sonPerpendicularesABBCDACD;
	/*Despues de definir las variables, las pedimos al usuario por medio de printf y scanf*/
	printf("Ingrese coordenadas punto A (x,y): \n");
	scanf("%lf %lf", &xa, &ya);
	printf("Ingrese coordenadas punto B (x,y): \n");
	scanf("%lf %lf", &xb, &yb);
	printf("Ingrese coordenadas punto C (x,y): \n");
	scanf("%lf %lf", &xc, &yc);
	printf("Ingrese coordenadas punto D (x,y): \n");
	scanf("%lf %lf", &xd, &yd);
	
	/*Hallamos las pendientes de cada recta para simplificar código*/
	pendienteAB= (ya-yb)/(xa-xb);
	pendienteBC= (yb-yc)/(xb-xc);
	pendienteCD= (yc-yd)/(xc-xd);
	pendienteDA= (yd-ya)/(xd-xa);

	/*Encapsulamos las condicionales para que las condicionales finales sean más cortas*/
	sonParalelasABCDBCDA= pendienteAB==pendienteCD && pendienteBC==pendienteDA;
	sonPerpendicularesABBCDACD= pendienteAB*pendienteBC==-1 && pendienteDA*pendienteCD==-1;

/*Aplicamos la lógica que requería el problema para hallar si es un rectángulo o no, además de 
mostrar si las rectas son paraleles o no y si son perpendiculares o no*/
	if (sonParalelasABCDBCDA==1 && sonPerpendicularesABBCDACD==1){
		printf("Las rectas (AB,CD) y (BC,DA) son paralelas\n");
		printf("Las rectas (AB,BC) y (AD,CD) son perpendiculares\n");
		printf("El cuadrilátero ABCD es un rectángulo\n");
	} else if(sonParalelasABCDBCDA==1 && sonPerpendicularesABBCDACD==0){
		printf("Las rectas (AB,CD) y (BC,DA) son paralelas\n");
		printf("Las rectas (AB,BC) y (AD,CD) no son perpendiculares\n");
		printf("El cuadrilátero ABCD no es un rectángulo\n");
	} else if(sonParalelasABCDBCDA==0 && sonPerpendicularesABBCDACD==1){
		printf("Las rectas (AB,CD) y (BC,DA) no son paralelas\n");
		printf("Las rectas (AB,BC) y (AD,CD) son perpendiculares\n");
		printf("El cuadrilátero ABCD no es un rectángulo\n");
	} else{
		printf("Las rectas (AB,CD) y (BC,DA) no son paralelas\n");
		printf("Las rectas (AB,BC) y (AD,CD) no son perpendiculares\n");
		printf("El cuadrilátero ABCD no es un rectángulo\n");
	}
	return 0;
}
