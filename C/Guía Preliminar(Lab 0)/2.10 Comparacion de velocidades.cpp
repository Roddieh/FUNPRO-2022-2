#include <stdio.h>

int main(){
	double v1_kph=140, v2_mph=90;
	int v1_es_mayor= v1_kph > v2_mph*1.609344;
	printf("¿La velocidad v1 es mayor? %d\n", v1_es_mayor);
	return 0;
}
