#include<stdio.h>
#include<math.h>
#define G 9.80665
int main(){
	char tipoDeProblema;
	printf("¿Desea resolver problemas de dinámica (D) o de cinemática (C)\n");
	scanf("%c", &tipoDeProblema);
	if (tipoDeProblema=='C'){
		//Cinematica
		char seleccionProblema;
		printf("¿Que desea calcular?\n1. Tiempo\n2. Velocidad final y espacio Recorrido\n3. Velocidad inicial y desaceleracion\n");
		scanf("\n%c", &seleccionProblema);
		if(seleccionProblema==4){
			//Problema 4
			
		}else if(seleccionProblema==5){
			//Problema 5
			
		}else if(seleccionProblema==6){
			//Problema 6
			double distancia, tiempo;
			double velocidadInicial, aceleracion;
			printf("Ingrese la distancia en metros y el tiempo en segundos: \n");
			scanf("%lf %lf", distancia, tiempo);
			velocidadInicial= (2*distancia)/tiempo;
			aceleracion= -velocidadInicial/tiempo;
			printf("La velocidad inicial es: %lf m/s\nLa aceleración es: %lf m/s^2", velocidadInicial, aceleracion);
		}else{
			printf("Ingresó una opción inválida para cinemática");
		}
	} else if(tipoDeProblema=='D'){
		//Dinamica
		double masa1, masa2, aceleracion, fuerza, velocidad, coefRozamiento;
		double tension, aceleracionResultado, fuerzaRozamiento;
		printf("Ingrese las masas en kg y la aceleracion en m/2^2\n");
		scanf("%lf %lf %lf", &masa1, &masa2, &aceleracion);
		printf("Ingrese la Fuerza en newtons, la velocidad en m/s y el coef. de rozamiento\n");
		scanf("%lf %lf %lf", &fuerza, &velocidad, &coefRozamiento);
		int esProblema1, esProblema2, esProblema3;
		esProblema1= masa2==999.999 && fuerza==999.999 && velocidad==999.999 && coefRozamiento==999.999;
		esProblema2= aceleracion==999.999 && velocidad==999.999 && coefRozamiento==999.999;
		esProblema3= masa2==999.999 && aceleracion==999.999 && fuerza==999.999;
		if(esProblema1==1){
			//Problema 1
			tension= masa1*(aceleracion+G);
			printf("La tensión de la cuerda en Newtons es: %lf N\n", trunc(tension));	
		} else if(esProblema2==1){
			//Problema 2
			aceleracionResultado= fuerza/(masa1+masa2);
			printf("La aceleración es: %lf m/s^2", aceleracionResultado);
		} else if(esProblema3==1){
			//Problema 3
			fuerzaRozamiento= coefRozamiento * masa1 * G;
			aceleracionResultado= fuerzaRozamiento/masa1;
			double tiempo= velocidad/aceleracionResultado;
			printf("La fuerza de rozamiento es: %lfN\nLa aceleración es: %lfm/s^2\nEl tiempo es: %lf s\n", fuerzaRozamiento, aceleracionResultado, tiempo);
		} else{
			//Ninguno de los 3 problemas
			printf("Los datos ingresados no corresponen a ningún problema de dinámica");
		}
	} else{
		//Se introdujo algo diferente a C o D
		printf("Ha seleccionado un tipo equivocado de ejercicio");
	}
	return 0;
}
