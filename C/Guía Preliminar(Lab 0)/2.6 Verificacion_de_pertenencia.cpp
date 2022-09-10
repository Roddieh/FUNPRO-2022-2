#include <stdio.h>

int main(){
	int n=7, a=3, b=10;
	int pertenece_a_rango= n>=a && n<=b;
	printf("¿%d pertence al rango [%d,%d]? %d", n, a, b, pertenece_a_rango);
	return 0;
}
