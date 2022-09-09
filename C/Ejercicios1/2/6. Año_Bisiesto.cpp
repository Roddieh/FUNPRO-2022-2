#include <stdio.h>
int main(){
	int ano=1996, p, q, r, analizarBisiesto, analizarSecular, analizarAno;
	p= ano%4==0;
	q=ano%100==0;
	r=ano%400==0;
	analizarBisiesto= p==1;
	analizarSecular= q==1 && r==1;
	analizarAno= analizarSecular!=1 && analizarBisiesto==1;
	printf("%d", analizarAno);
	return 0;
}
