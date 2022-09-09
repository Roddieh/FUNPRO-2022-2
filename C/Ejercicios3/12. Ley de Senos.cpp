#include <stdio.h>
#include <math.h>
#define PI 3.141592 /*Definimos la constante PI para todo el código*/

int main(){
	double ladoA, ladoB, ladoC, angAlf, angBet, angTet;
	int esAcutang, esRectang, esObtusang, esEscal, esIsoc,esEquil;
	char criterio;
	int validLad, validAng, validCrit;
	int noEscribirIsocYEquilJuntos=0;
	
	printf("Ingrese dos de los lados del triángulo respectivamente: \n");
	scanf("%lf %lf",&ladoA, &ladoB);
	printf("Ingrese el angulo: \n");
	scanf("%lf", &angAlf);
	printf("Ingrese criterio de clasificacion (A o L): \n");
	scanf("\n%c", &criterio); /*Agregué un \n puesto que char toma el primer caracter, que en este caso es un espacio ("enter").
	Al agregar un \n le decimos a char que obvie el "enter" y que tome el segundo caracter*/
	
	/*Las funciones trigonometricas solo toman como parametros los radianes, por lo que hay que convertir de sexagesimal
	a radianes. Para ello usamos sexgasimal*PI/180= radian. Usé la misma formula para ir de radianes a sexagesimales*/
	ladoC=+sqrt(ladoA*ladoA+ladoB*ladoB-2*ladoA*ladoB*cos(angAlf*PI/180));
	angBet=asin((ladoB*sin(angAlf*PI/180))/ladoC)*180/PI;
	angTet=asin((ladoA*sin(angBet*PI/180))/ladoB)*180/PI;
	
	/*Este printf me ayudaba a saber los datos de las variables que iba obteniendo y así ir corrigiendo errores
	printf("Lado C es %lf.\n%lf %lf %lf\n",ladoC, angAlf, angBet, angTet);
	*/
	
	/*Creé las variables valid para simplificar código, estas variables las usaré para los condicionales*/
	validLad= ladoA>0 && ladoB>0 && ladoC>0;
	
	int validAng0= angAlf>0 && 0<angBet && 0<angTet;
	int validAng180= angAlf<180 && angBet<180 && angTet<180;
	validAng= validAng0==1 && validAng180==1;
	
	validCrit= criterio=='A' || criterio=='L';
	
	/*También definí estas variables para reducir código para los condicionales*/
	/*Análisis por el criterio de angulos*/
	esAcutang= angAlf<90 && angBet<90 && angTet<90;
	esRectang= angAlf==90 || angBet==90 || angTet==90;
	esObtusang= angAlf>90 || angBet>90 || angTet>90;
	/*Análisis por el criterio de lados*/
	esEquil= round(ladoA)==round(ladoB) && round(ladoB)==round(ladoC); /*La funcion round sirve para aproximar valores (revisar el último comentario para + info)*/
	esEscal= ladoA!=ladoB && ladoB!=ladoC && ladoC!=ladoA;
	esIsoc= ladoA==ladoB || ladoB==ladoC || ladoC==ladoA;
	
	/*Primero separé los casos válidos de los inválidos(cuando las variables valid son 0). Cada caso inválido te muestra 
	cual es el error. Luego trabajé por separado cuando el criterio era por angulo y por lados.
	Dentro de cada uno puse el condicional para cada caso. Además agregué la variable noEscribirIsocYEquilJuntos como si fuera
	una variable bandera(explicado en clase) que me servía para que cuando este en 1 no se escriba que el triangulo es
	isosceles y equilatero al mismo tiempo(pq un triangulo equil tmb es isoc).*/
	if (validAng==1 && validLad==1 && validCrit==1){
		if(criterio=='A'){
			if(esAcutang==1){
				printf("El triangulo ABC es acutángulo.\n");
			} else if(esObtusang==1){
				printf("El triangulo ABC es obtusángulo.\n");
			} else if(esRectang==1){
				printf("El triangulo ABC es rectángulo.\n");
			}	
		} else if(criterio=='L'){
			if (esEquil==1){
				noEscribirIsocYEquilJuntos=1;
				printf("El trinagulo ABC es equilátero.\n");
			} else if(esEscal==1){
				printf("El triangulo ABC es escaleno.\n");
			} else if(esIsoc==1){
				if(noEscribirIsocYEquilJuntos=0){
					printf("El triangulo ABC es isósceles.\n");	
				}
			}
		}	printf("El lado C es: %lf\n", ladoC);
			printf("El angulo AC es %lf, y el angulo BC es %lf\n", angBet, angTet);
			
	} else if(validLad==0){
		printf("Los lados del triángulo no pueden ser menores o iguales a cero.\n"); 
	} else if(validAng==0){
		printf("Los ángulos de un triangulo deben ser mayor que cero y menor que 180 grados sexagesimales.\n");
	} else if(validCrit==0){
		printf("Los únicos criterios permitidos son A y L");
	}
	
	/*Para la penúltima prueba(5 5 60 L), tendría que salir triángulo equilátero; sin embargo, salía isóceles
	esto porquue a la hora de hallar el lado C da 4,99999999... y eso no es igual a 5 exactamente.
	Se puede usar la función round(); sin embargo, en las otras pruebas se puede ver que el lado C siempre tiene decimales
	Para ello decidí solo usar la función round() solo en las pruebas de equilateridad con lo que el problema se soluciona*/
	return 0;
}
