#include <math.h>
#include <stdio.h>

#define G 9.8
#define PI 3.1416
int main(){
	
	double AlturaEdif, masa, KMuelle, DistanciaIni, Desplaz, angulo, distEdifRat, largoRata;
	printf("Altura del edificio(h) en m: ");
	scanf("%lf",&AlturaEdif);
	printf("Masa (m) en g: ");
	scanf("%lf",&masa);
	printf("Constante (k) del muelle en N/m: ");
	scanf("%lf",&KMuelle);
	printf("Distancia inicial (d) del objeto en cm: ");
	scanf("%lf",&DistanciaIni);
	printf("Desplazamiento (x_m) en cm: ");
	scanf("%lf",&Desplaz);
	printf("Ángulo teta en grados sexagesimales: ");
	scanf("%lf",&angulo);
	printf("Distancia entre el edificio y el punto medio de la ratita(c) en m: ");
	scanf("%lf",&distEdifRat);
	printf("Tamaño de la ratita (r) en cm: ");
	scanf("%lf",&largoRata);
	
	printf("LLega a impactar el objeto en la ratita?\n");
	
	double velocidad, tiempo, distanciaX;
	velocidad= sqrt((2*(((1/2)*KMuelle*Desplaz*Desplaz)+masa*G*((Desplaz+DistanciaIni)*sin(angulo*PI/180)))/masa));
	tiempo= ((-velocidad)*sin(angulo*PI/180)+sqrt(pow(velocidad*sin(angulo*PI/180),2)+2*G*AlturaEdif))/G;
	distanciaX= velocidad*tiempo*cos(angulo*PI/180);
	printf("Distancia1 es: %lf\n", distanciaX);
	
	int esDatoCorrecto= AlturaEdif>0 && masa>0 && KMuelle>0 && DistanciaIni>0 && Desplaz>0 && distEdifRat>0 && largoRata>0;
	int anguloCorrecto= 0<angulo && angulo<360;
	int validaRaiz=pow(velocidad*sin(angulo*PI/180),2)+2*G*AlturaEdif>=0;
	
	double colaRata=distEdifRat-(largoRata/200) ;
	double cabezaRata=distEdifRat+(largoRata/200);
	
	if (esDatoCorrecto==1 && anguloCorrecto==1 && validaRaiz==1){
		printf("La rata se encuentra entre %lf y %lf metros", colaRata, cabezaRata);
		if(colaRata<=distanciaX && cabezaRata>=distanciaX){
			printf("Sí, porque el objeto impacta a %lf m del edificio\n.", distanciaX);
		}
		else{
			printf("No, porque el objeto impacta a %lf m del edicio.\n", distanciaX);
		}
	} else{
		printf("Los datos ingresados son incorrectos\n");
	}
	return 0;
}

