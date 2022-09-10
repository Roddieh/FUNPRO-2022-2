#include <stdio.h>

int main(){
	int a=15, b=19, c=16;
	double promedio=(double)(a+b+c)/3;
	double porcA= (a/(double)(a+b+c))*100;
	printf("El promedio de los 3 números es %lf\n", promedio);
	printf("%d corresponde al %lf%%\n", a, porcA);
	return 0;
}
