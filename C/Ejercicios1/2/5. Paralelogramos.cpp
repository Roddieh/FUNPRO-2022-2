#include<stdio.h>
int main(){
	double ladoAB=7, ladoBC=5, ladoCD=7, ladoDA=5, anguloA=120, anguloB=60, anguloC=120, anguloD=60;
	int analizarLados, analizarAng, esCuad, esRect, esRomb, esRombde;
	analizarLados= ladoAB==ladoBC && ladoBC==ladoCD;
	analizarAng= anguloA==anguloB && anguloB==anguloC;
	esCuad= analizarLados==1 && analizarAng==1;
	esRect= analizarLados==0 && analizarAng==1;
	esRomb= analizarLados==1 && analizarAng==0;
	esRombde= analizarLados==0 && analizarAng==0;
	printf("%d",esCuad);
	printf("%d",esRect);
	printf("%d",esRomb);
	printf("%d",esRombde);
	return 0;
}
