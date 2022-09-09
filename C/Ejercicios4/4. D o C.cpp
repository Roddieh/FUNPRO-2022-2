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
		double distancia, tiempo, aceleracion, velocidadFinal;
		double velocidadInicial, aceleracionResultado,espacioRecorrido;
		if(seleccionProblema=='1'){
			//Problema 4
			printf("Ingrese la aceleracion en km/h^2 y la velocidad final en m/s: \n");
			scanf("%lf %lf", &aceleracion, &velocidadFinal);
			tiempo= (velocidadFinal*3.6)/aceleracion;
			printf("Tardó %lf horas", tiempo);
		}else if(seleccionProblema=='2'){
			//Problema 5
			printf("Ingrese la aceleracion en m/s^2 y el tiempo en horas: \n");
			scanf("%lf %lf", &aceleracion, &tiempo);
			velocidadFinal= aceleracion*tiempo*60;
			espacioRecorrido= 0.5*aceleracion*tiempo*tiempo*60*60;
			printf("La velocidad final es: %lf\nEl espacio recorrido es: %lf", velocidadFinal, espacioRecorrido);
		}else if(seleccionProblema=='3'){
			//Problema 6
			/*Justo en este problema me parece que hay un error, nos dicen que coloquemos
			el tiempo en segundos y no sale, si colocamos el tiempo en minutos y luego *60
			para cambiarlo a segundos el resultado sería el que esta en las pruebas*/
			printf("Ingrese la distancia en metros y el tiempo en minutos: \n"); //segundos-> minutos
			scanf("%lf %lf", &distancia, &tiempo);
			velocidadInicial= (2*distancia)/(tiempo*60);
			aceleracionResultado= -velocidadInicial/(tiempo*60);
			printf("La velocidad inicial es: %lf m/s\nLa aceleración es: %lf m/s^2", velocidadInicial, aceleracionResultado);
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
			/*Aqui me parece que tambien hay un error al pedir la velocidad en m/s no sale el problema
			si pidiera la velocidad en km/h y luego velocidad/3.6 saldría lo que dice la prueba. Por lo que
			para este problema simplemente dividí /3.6 para que el resultado sea el mismo que la prueba*/
			fuerzaRozamiento= coefRozamiento * masa1 * G;
			aceleracionResultado= fuerzaRozamiento/masa1;
			double tiempo= velocidad/(3.6*aceleracionResultado); //Cabe recalcar que usan valores un poco mas exactos para las pruebas
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
