#include<stdio.h>
int main(){
	int dolor_abdominal, sensibilidad_al_tacto, hinchazon, pesadez_abdomen, fiebre, nauseas, vomitos;
	printf("�Usted presenta alguno de estos s�ntomas?\n");
	printf("Dolor abdominal\n");
	scanf("%d", &dolor_abdominal);
	printf("Sensibilidad al tacto\n");
	scanf("%d", &sensibilidad_al_tacto);
	printf("Hinchaz�n\n");
	scanf("%d", &hinchazon);
	printf("Sensacion de pesadez en el abdomen\n");
	scanf("%d", &pesadez_abdomen);
	printf("Fiebre\n");
	scanf("%d", &fiebre);
	printf("N�useas\n");
	scanf("%d", &nauseas);
	printf("V�mitos\n");
	scanf("%d", &vomitos);
	int diagnostico_peritonitis= (dolor_abdominal || sensibilidad_al_tacto) && (hinchazon||pesadez_abdomen) && fiebre && (nauseas && vomitos);
	printf("Diagn�stico de peritonitis=%d\n", diagnostico_peritonitis);
	return 0;
}
