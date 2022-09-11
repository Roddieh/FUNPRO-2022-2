#include <stdio.h>

int main(){
	int m=65536, a=2269, c=1, x0=29;
	int num_pseudoaleatorio= (a*x0+c)%m;
	printf("El siguiente número pseudoaleatorio es: %d\n", num_pseudoaleatorio);
	return 0;
}
