#include<stdio.h>

int main(){
	double p=35, mu=0.5, f=20, fs_max;
	fs_max=35*0.5;
	int se_mueve= f-fs_max>0;
	printf("¿Se mueve la caja? %d\n", se_mueve);
	return 0;
}
