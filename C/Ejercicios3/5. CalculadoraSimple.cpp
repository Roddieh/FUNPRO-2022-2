#include<stdio.h>
int main(){
	double operando1, operando2, resultado;
	char operador;
	int bandera;
	printf("Ingrese el operando 1 y operando 2, luego el operador: ");
	scanf("%lf %lf %c", &operando1, &operando2, &operador);
	if (operador== '+'){
		bandera=1;
		resultado= operando1+operando2;
	} else if (operador== '-'){
		bandera=1;
		resultado= operando1-operando2;
	} else if (operador== '*'){
		bandera=1;
		resultado= operando1*operando2;
	} else if (operador== '/'){
		if(operando2==0){
			bandera=0;
			printf("En la división no se puede dividir entre 0\n");
		} else{
			bandera=1;
			resultado= operando1/operando2;
		}
	}
	if (bandera){
	printf("El resultado es %lf\n", resultado);
	}
	return 0;
}
