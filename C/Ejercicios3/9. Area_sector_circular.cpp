#include<stdio.h>
#include<math.h>

#define PI 3.1416
int main(){
	double radio, angulo, area;
	int esAnguloRestringido;
	printf("Escriba el valor del radio y del ángulo respectivamente: ");
	scanf("%lf %lf", &radio, &angulo);
	area= (PI*pow(radio,2)*angulo)/360;
	esAnguloRestringido= 0<angulo && angulo<360;
	if (esAnguloRestringido==1 && radio>0){
		printf("El area del sector circular es: %lf\n", area);
	} else{
		printf("Los datos de entrada son incorrectos");
	}
	return 0;
}
