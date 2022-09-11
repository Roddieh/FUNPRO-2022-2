#include<stdio.h>

int main(){
	int dd1=29, mm1=1;
	int dd2=7, mm2=4;
	int dias_de_diferencia= (31-dd1)+dd2+31*(mm2-mm1-1);
	printf("Entre %02d/ %02d y %02d/%02d existen %d dias\n", dd1, mm1, dd2, mm2, dias_de_diferencia);
	return 0;
}
