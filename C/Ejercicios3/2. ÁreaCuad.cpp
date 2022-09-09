#include <stdio.h>
#include <math.h>
int main(){
	double lado, area;
	printf("Ingrese la longitud(positiva) del cuadrado: ");
	scanf("%lf", &lado);
	area= pow(lado,2);
	if (lado>0){
		printf("El área del cuadrado es: %lf", area);
	} else{
		printf("La longitud debe ser postiva");
	}
	return 0;
}
