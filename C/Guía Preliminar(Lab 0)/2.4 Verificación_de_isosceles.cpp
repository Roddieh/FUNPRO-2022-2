#include <stdio.h>

int main(){
	double l1=12.5, l2=13, l3=12.5;
	int es_isosceles= l1==l2 || l2==l3 || l1==l3;
	int es_escaleno= l1!=l2 && l2!=l3 && l1!=l3;
	int es_equilatero= l1==l2 && l2==l3;
	int es_triangulo= l1+l2>l3 && l2+l3>l1 && l1+l3>l2; 
	printf("¿Es isósceles? %d\n¿Es escaleno? %d\n¿Es equilátero? %d\n", es_isosceles, es_escaleno, es_equilatero);
	printf("¿El triángulo existe? %d", es_triangulo);
	return 0;
}
