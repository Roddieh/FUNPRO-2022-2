#include <stdio.h>
#include <math.h>
int main(){
	double semiPer, a, b, c, area;
	printf("Ingrese los lados del triángulo: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	semiPer= (a+b+c)/2;
	area= sqrt(semiPer*(semiPer-a)*(semiPer-b)*(semiPer-c));
	if (a+b>c && a+c>b && b+c>a){
		printf("El área del triangulo es %lf\n", area);
	} else{
		printf("El triángulo ingresado no existe!\n");
	}
	return 0;
}
