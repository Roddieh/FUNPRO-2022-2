#include <stdio.h>
int main(){
	double pH;
	printf("Introduzca el pH de la disolución: ");
	scanf("%lf", &pH);
	int es_acida= pH<7, es_neutra= pH==7, es_alcalina= pH>7;
	printf("¿La disolución es ácida? %d\n", es_acida);
	printf("¿La disolución es neutra? %d\n", es_neutra);
	printf("¿La disolución es alcalina? %d\n", es_alcalina);
	return 0;
}
