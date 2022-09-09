#include <stdio.h>
#include <math.h>

int main(){
	double area, ladoa, ladob, ladoc, ladod, ladoIzq, ladoDer,
	ladoDerNumerador, ladoDerDenominador;
	printf("Introduzca el valor de los lados a, b, c y d respectivamente: ");
	scanf("%lf %lf %lf %lf", &ladoa, &ladob, &ladoc, & ladod);
	ladoIzq= (ladoa+ladob)/2;
	ladoDerNumerador= pow(ladoc,2)-pow(ladod,2)+pow((ladoa-ladob),2);
	ladoDerDenominador= 2*(ladoa-ladob);
	ladoDer= sqrt(pow(ladoc,2)-pow(((double)ladoDerNumerador)/ladoDerDenominador,2));
	area= ladoIzq*ladoDer;
	printf("El área del trapecio es: %lf", area);
	return 0;
}
