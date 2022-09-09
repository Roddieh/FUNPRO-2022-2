#include <stdio.h>

int main (){
	int a=5, b=15, c=3;
	int verifica_relacion= a<b<c;
	printf("¿a<b<c? %d\n", verifica_relacion);
	return 0;
}
/*
1. Se obtiene un 1. No puede realizar una comparación múltiple
2. Se obtiene un 1. Primero se compara si a<b, lo que saldrá 1 o 0, luego ese reultado
se comparará con c.
*/
