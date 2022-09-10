#include <stdio.h>

int main(){
	int num1=1, den1=2, num2=1, den2=3;
	int num_suma= den2*num1 + den1*num2;
	int den_suma= den2*den1;
	printf("La suma de %d/%d + %d/%d es %d/%d", num1, den1, num2, den2, num_suma, den_suma);
	return 0;
}
