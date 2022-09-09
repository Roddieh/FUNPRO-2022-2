#include <stdio.h>
int main(){
	double l1=12.5, l2=12.5, l3=12.5, l4=12.5;
	int es_cuadrado= l1==l2 && l2==l3 && l3==l4;
	int es_rectang= (l1==l2 || l1==l3 || l1==l4) && (l2==l3 || l3==l4);
	printf("¿Es cuadrado? %d", es_cuadrado);
	return 0;
}
