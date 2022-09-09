#include<stdio.h>
int main(){
	int ladoAB=8, ladoBC=2, ladoCA=1, analizarDesig;
	analizarDesig= ladoAB+ladoBC>ladoCA && ladoBC+ladoCA>ladoAB;
	printf("%d", analizarDesig);
	return 0;
}
