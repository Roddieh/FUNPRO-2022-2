#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main(){
	double radio, area;
	printf("Escriba el radio del c�rculo: ");
	scanf("%lf", &radio);
	area= PI*(pow(radio,2));
	printf("El �rea del c�rculo es de %lf m^2", area);
	return 0;
}
