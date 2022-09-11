#include<stdio.h>

int main(){
	double a1=1, a2=-3, a3=1;
	double D, R;
	D= (3*a2-a1*a1)/(double)9;
	R= (9*a1*a2-27*a3-2*a1*a1*a1)/54;
	int tiene_raices_reales_y_diferentes= D*D*D+R*R<0;
	printf("¿Tiene raices reales y diferentes? %d\n",tiene_raices_reales_y_diferentes);
	return 0;
}
