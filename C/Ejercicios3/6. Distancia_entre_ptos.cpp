#include <stdio.h>
#include <math.h>

int main(){
	double x1,y1,x2,y2, distancia;
	int punto1primerCuad, punto2primerCuad, bandera;
	printf("Escribe los valores de x1, y1, x2 y y2 respectivamente: ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	punto1primerCuad= x1>0 && y1>0;
	punto2primerCuad= x2>0 && y2>0;
	if (punto1primerCuad==1 && punto2primerCuad==1){
		bandera=1;
		distancia= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	} else{
		bandera=0;
		printf("Ambos puntos deben estar en el primer cuadrante");
	}
	if (bandera){
		printf("La distancia entre ambos puntos es %lf\n", distancia);
	}
	return 0;
}
