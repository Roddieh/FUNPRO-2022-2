#include <stdio.h>

int main(){
	double gradosC, gradosF;
	printf("Introduzca la temperatura en grados Celsius: ");
	scanf("%lf", &gradosC);
	/*Con la función scanf recibimos el valor de la variable gradosC
	y así podemos realizar el cálculo en Fahrenheit*/
	gradosF= (gradosC*(double)9/5)+32;
	printf("La temperatura en grados Fahrenheit es de %lf\n", gradosF);
	return 0;
}
