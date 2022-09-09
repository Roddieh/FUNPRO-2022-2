#include<stdio.h>
int main(){
	int ladoAB=2, ladoBC=3, ladoCA=3, analizarEquilatero;
	analizarEquilatero= ladoAB==ladoBC && ladoBC==ladoCA;
	printf("%d", analizarEquilatero);
	return 0;
}
