#include <stdio.h>

int main (){
	double l=3.6;
	double area= l*l;
	printf("El area del cuadrado es %lf\n", area);
	double base= 5, altura=10;
	double areaRectang= base*altura;
	double areaTriang= areaRectang/2;
	printf("El area del rectángulo es %lf\n", areaRectang);
	printf("El area del triángulo es %lf\n", areaTriang);
	return 0;
}
