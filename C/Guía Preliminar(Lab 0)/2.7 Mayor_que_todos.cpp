#include<stdio.h>

int main(){
	int a=5, b=3, c=1;
	int numerosDiferentes= a!=b && b!=c && a!=c;
	if (numerosDiferentes){
		int es_a_mayor_de_todos= a>b && a>c;
		printf("¿Es %d el numero mayor? %d\n",a, es_a_mayor_de_todos);
		int es_a_menor_de_todos= a<b && a<c;
		printf("¿Es %d el numero menor? %d\n",a, es_a_menor_de_todos);
	}
	return 0;
}
