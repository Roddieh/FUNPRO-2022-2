#include <stdio.h>
int main(){
	double pH;
	printf("Introduzca el pH de la disoluci�n: ");
	scanf("%lf", &pH);
	int es_acida= pH<7, es_neutra= pH==7, es_alcalina= pH>7;
	printf("�La disoluci�n es �cida? %d\n", es_acida);
	printf("�La disoluci�n es neutra? %d\n", es_neutra);
	printf("�La disoluci�n es alcalina? %d\n", es_alcalina);
	return 0;
}
