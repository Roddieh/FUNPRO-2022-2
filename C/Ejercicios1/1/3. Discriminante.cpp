#include<stdio.h>
int main(){
	int coefExp2=3, coefExp1=100, coefExp0=5, discriminante, analizarDisc;
	discriminante= (coefExp1)*(coefExp1)-4*(coefExp2)*(coefExp0);
	analizarDisc=discriminante>=0;
	printf("%d", analizarDisc);
	return 0;
}
