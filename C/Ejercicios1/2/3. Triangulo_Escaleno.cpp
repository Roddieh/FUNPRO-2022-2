#include<stdio.h>
int main(){
	int ladoAB=1, ladoBC=2, ladoCA=3, analizarEscaleno;
	analizarEscaleno= ladoAB!=ladoBC && ladoBC!=ladoCA;
	printf("%d", analizarEscaleno);
	return 0;
}
