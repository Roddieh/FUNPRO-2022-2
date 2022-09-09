#include <stdio.h>

int main (){
	double masa=75, estatura=1.65;
	double imc= masa/(estatura*estatura);
	printf("El IMC es %lf\n", imc);
	return 0;
}
