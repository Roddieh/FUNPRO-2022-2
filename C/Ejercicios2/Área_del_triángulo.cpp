#include <stdio.h>
#include <math.h>
int main(){
	double lado1, lado2, lado3, semiPer, area;
	printf("Escriba los lados del triángulo: ");
	scanf("%lf %lf %lf", &lado1, &lado2, &lado3); /*Cada "%lf" por cada variable de tipo "double" */
	semiPer= (lado1+lado2+lado3)/2;
	area= sqrt(semiPer*(semiPer-lado1)*(semiPer-lado2)*(semiPer-lado3)); 
	printf("El área del triángulo es: %lf",area);
	return 0;
}
