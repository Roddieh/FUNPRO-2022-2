#include<stdio.h>
#include<math.h>

int main(){
	double x, imagen;
	printf("Ingrese el valor de x a evaluar: ");
	scanf("%lf", &x);
	if (x<5){
		imagen= pow(x,2);
		printf("f(%lf) es %lf", x, imagen);
	} else if(x<10){
		imagen= pow(x,3)-1;
		printf("f(%lf) es %lf",x, imagen);
	} else{
		imagen= x/2;
		printf("f(%lf) es %lf",x, imagen);
	}
	return 0;
}
