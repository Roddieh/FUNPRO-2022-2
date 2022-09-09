#include <stdio.h>

int main(){
	double v1cm3=200, t1C=20, t2C=90;
	double v2cm3= (v1cm3*t2C)/t1C;
	printf("El volumen final es %lf cm^3\n", v2cm3);
	return 0;
}
