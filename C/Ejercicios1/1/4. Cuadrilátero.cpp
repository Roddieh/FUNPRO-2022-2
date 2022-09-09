#include<stdio.h>
int main(){
	int anguloAlfa=100, anguloBeta=90, anguloGamma=90, anguloDelta=90, sumaAngulos, analizarSumaDeAng;
	sumaAngulos= anguloAlfa+anguloBeta+anguloGamma+anguloDelta;
	analizarSumaDeAng= sumaAngulos==360;
	printf("%d", analizarSumaDeAng);
	return 0;
}
