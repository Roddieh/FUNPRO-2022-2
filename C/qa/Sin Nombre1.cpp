#include <time.h>
#include <stdlib.h>
#include<stdio.h>
/* more headers goes there */
int main(void){
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /2;
	if(n>0){
		printf("%d es positivo\n",n);
	}
	else if(n==0){
		printf("%d es cero",n);
	}
	else{
		printf("%d es negativo\n",n);
	}
}

