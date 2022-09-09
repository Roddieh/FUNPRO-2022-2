#include <stdio.h>
#define PI 3.141593

int main(){
	double sexagesimal=45;
	double radianes= sexagesimal*PI/180;
	printf(" %lf grados sexagesimales equivale a %lf radianes\n", sexagesimal, radianes); 
	return 0;
}
