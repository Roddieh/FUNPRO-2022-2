#include<stdio.h>

int main(){
	int m,n;
	printf("Ingrese el m y n valor: ");
	scanf("%d %d", &m, &n);
	if(m%n ==0){
		printf("%d es múltiplo de %d", m, n);
	} else{
		printf("%d NO es múltiplo de %d", m, n);
	}
	return 0;
}
