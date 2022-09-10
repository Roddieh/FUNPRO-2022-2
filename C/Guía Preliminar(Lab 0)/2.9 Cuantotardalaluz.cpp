#include <stdio.h>

int main(){
	double velocidadLuz, distanciaTierra, tiempoMin, tiempoSeg;
	tiempoSeg= 150000000000/(double)299792458 ;
	tiempoMin= tiempoSeg/60;
	printf("La luz demora en llegar desde el sol %lf segundos\n", tiempoSeg);
	printf("La luz demora en llegar desde el sol %lf minutos\n", tiempoMin);
	return 0;
}
