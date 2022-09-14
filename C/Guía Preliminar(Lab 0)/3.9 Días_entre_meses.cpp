#include<stdio.h>
#include<math.h>
int main(){
	int dd1=06, mm1=2, aa1=2004;
	int dd2=14, mm2=9, aa2=2022;
	int dias_de_diferencia_entre_meses= (31-dd1)+dd2+31*(fabs(mm2-mm1-1));
	int dias_de_diferencia_entre_anos= 365*fabs(aa1-aa2-1)-dias_de_diferencia_entre_meses;
	printf("Entre %02d/%02d/%02d y %02d/%02d/%02d existen %d dias\n", dd1, mm1, aa1, dd2, mm2, aa2, dias_de_diferencia_entre_anos);
	return 0;
}
