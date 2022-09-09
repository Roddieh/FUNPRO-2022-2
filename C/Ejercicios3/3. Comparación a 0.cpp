#include <stdio.h>

int main(){
	double numero;
	printf("Ingresar el numero a comparar: ");
	scanf("%lf", &numero);
	if (numero==0){
		printf("%lf es igual a 0", numero);
	} else{
		printf("%lf es diferente a 0", numero);
	}
	return 0;
}
