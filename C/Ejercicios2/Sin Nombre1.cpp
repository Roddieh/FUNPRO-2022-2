#include <stdio.h>
#include <math.h>
int main(){
	double lado, area;
	printf("Escribe el lado del cuadrado: ");
	scanf("%lf",&lado);
	area= pow(lado,2);
	printf("El área del cuadrado es: %lf", area);
	return 0;
}
