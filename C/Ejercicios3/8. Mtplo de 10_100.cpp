#include <stdio.h>
int main(){
	int numero;
	printf("Ingrese el n�mero a analizar: ");
	scanf("%d", &numero);
	 if (numero%10==0){
	 	printf("El n�mero ingresado es m�ltiplo de 10\n");
	 } else{
	 	printf("El n�mero ingresado no es m�ltipl de 10\n");
	 }
	if (numero%100==0){
		printf("El n�mero ingresado es m�ltiplo de 100\n");
	} else{
		printf("El n�mero ingresado no es m�ltiplo de 100\n");
	}
	return 0;
}
