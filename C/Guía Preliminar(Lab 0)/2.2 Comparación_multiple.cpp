#include <stdio.h>

int main(){
	int a=1, b=1, c=1;
	int todos_iguales= a==b==c;
	printf("¿Son los números iguales? %d\n", todos_iguales);
	return 0;
}
/*
1. Se obtiene como salido un 0
2. Reemplazando 5 3 0, se obtiene un 1
3. Lo que sucede es que primero se compara a y b, lo que sale 1 o 0.
Este 1 o 0 será lo que se compare con c, en el caso 1 1 1, a y b si son
iguales y por lo tanto sale 1, luego ese 1 se compara con c que en este caso
si son iguales por lo que termina saliendo 1 en la consola
*/
