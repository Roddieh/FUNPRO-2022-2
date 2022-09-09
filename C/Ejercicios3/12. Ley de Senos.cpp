#include <stdio.h>
#include <math.h>
#define PI 3.141592 /*Definimos la constante PI para todo el c�digo*/

int main(){
	double ladoA, ladoB, ladoC, angAlf, angBet, angTet;
	int esAcutang, esRectang, esObtusang, esEscal, esIsoc,esEquil;
	char criterio;
	int validLad, validAng, validCrit;
	int noEscribirIsocYEquilJuntos=0;
	
	printf("Ingrese dos de los lados del tri�ngulo respectivamente: \n");
	scanf("%lf %lf",&ladoA, &ladoB);
	printf("Ingrese el angulo: \n");
	scanf("%lf", &angAlf);
	printf("Ingrese criterio de clasificacion (A o L): \n");
	scanf("\n%c", &criterio); /*Agregu� un \n puesto que char toma el primer caracter, que en este caso es un espacio ("enter").
	Al agregar un \n le decimos a char que obvie el "enter" y que tome el segundo caracter*/
	
	/*Las funciones trigonometricas solo toman como parametros los radianes, por lo que hay que convertir de sexagesimal
	a radianes. Para ello usamos sexgasimal*PI/180= radian. Us� la misma formula para ir de radianes a sexagesimales*/
	ladoC=+sqrt(ladoA*ladoA+ladoB*ladoB-2*ladoA*ladoB*cos(angAlf*PI/180));
	angBet=asin((ladoB*sin(angAlf*PI/180))/ladoC)*180/PI;
	angTet=asin((ladoA*sin(angBet*PI/180))/ladoB)*180/PI;
	
	/*Este printf me ayudaba a saber los datos de las variables que iba obteniendo y as� ir corrigiendo errores
	printf("Lado C es %lf.\n%lf %lf %lf\n",ladoC, angAlf, angBet, angTet);
	*/
	
	/*Cre� las variables valid para simplificar c�digo, estas variables las usar� para los condicionales*/
	validLad= ladoA>0 && ladoB>0 && ladoC>0;
	
	int validAng0= angAlf>0 && 0<angBet && 0<angTet;
	int validAng180= angAlf<180 && angBet<180 && angTet<180;
	validAng= validAng0==1 && validAng180==1;
	
	validCrit= criterio=='A' || criterio=='L';
	
	/*Tambi�n defin� estas variables para reducir c�digo para los condicionales*/
	/*An�lisis por el criterio de angulos*/
	esAcutang= angAlf<90 && angBet<90 && angTet<90;
	esRectang= angAlf==90 || angBet==90 || angTet==90;
	esObtusang= angAlf>90 || angBet>90 || angTet>90;
	/*An�lisis por el criterio de lados*/
	esEquil= round(ladoA)==round(ladoB) && round(ladoB)==round(ladoC); /*La funcion round sirve para aproximar valores (revisar el �ltimo comentario para + info)*/
	esEscal= ladoA!=ladoB && ladoB!=ladoC && ladoC!=ladoA;
	esIsoc= ladoA==ladoB || ladoB==ladoC || ladoC==ladoA;
	
	/*Primero separ� los casos v�lidos de los inv�lidos(cuando las variables valid son 0). Cada caso inv�lido te muestra 
	cual es el error. Luego trabaj� por separado cuando el criterio era por angulo y por lados.
	Dentro de cada uno puse el condicional para cada caso. Adem�s agregu� la variable noEscribirIsocYEquilJuntos como si fuera
	una variable bandera(explicado en clase) que me serv�a para que cuando este en 1 no se escriba que el triangulo es
	isosceles y equilatero al mismo tiempo(pq un triangulo equil tmb es isoc).*/
	if (validAng==1 && validLad==1 && validCrit==1){
		if(criterio=='A'){
			if(esAcutang==1){
				printf("El triangulo ABC es acut�ngulo.\n");
			} else if(esObtusang==1){
				printf("El triangulo ABC es obtus�ngulo.\n");
			} else if(esRectang==1){
				printf("El triangulo ABC es rect�ngulo.\n");
			}	
		} else if(criterio=='L'){
			if (esEquil==1){
				noEscribirIsocYEquilJuntos=1;
				printf("El trinagulo ABC es equil�tero.\n");
			} else if(esEscal==1){
				printf("El triangulo ABC es escaleno.\n");
			} else if(esIsoc==1){
				if(noEscribirIsocYEquilJuntos=0){
					printf("El triangulo ABC es is�sceles.\n");	
				}
			}
		}	printf("El lado C es: %lf\n", ladoC);
			printf("El angulo AC es %lf, y el angulo BC es %lf\n", angBet, angTet);
			
	} else if(validLad==0){
		printf("Los lados del tri�ngulo no pueden ser menores o iguales a cero.\n"); 
	} else if(validAng==0){
		printf("Los �ngulos de un triangulo deben ser mayor que cero y menor que 180 grados sexagesimales.\n");
	} else if(validCrit==0){
		printf("Los �nicos criterios permitidos son A y L");
	}
	
	/*Para la pen�ltima prueba(5 5 60 L), tendr�a que salir tri�ngulo equil�tero; sin embargo, sal�a is�celes
	esto porquue a la hora de hallar el lado C da 4,99999999... y eso no es igual a 5 exactamente.
	Se puede usar la funci�n round(); sin embargo, en las otras pruebas se puede ver que el lado C siempre tiene decimales
	Para ello decid� solo usar la funci�n round() solo en las pruebas de equilateridad con lo que el problema se soluciona*/
	return 0;
}
