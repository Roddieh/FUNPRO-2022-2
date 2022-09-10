#include <stdio.h>

int main(){
	double v1cm3=80, p1mmHg=750, p2atm=1.2;
	double v2cm3= (v1cm3*p1mmHg)/(double)(p2atm*760);
	printf("El gas ocupa %lf cm^3\n", v2cm3);
	return 0;
}
