#include <stdio.h>
int main(){
	int numero;
	printf("Ingrese el número a analizar: ");
	scanf("%d", &numero);
	 if (numero%10==0){
	 	printf("El número ingresado es múltiplo de 10\n");
	 } else{
	 	printf("El número ingresado no es múltipl de 10\n");
	 }
	if (numero%100==0){
		printf("El número ingresado es múltiplo de 100\n");
	} else{
		printf("El número ingresado no es múltiplo de 100\n");
	}
	return 0;
}
