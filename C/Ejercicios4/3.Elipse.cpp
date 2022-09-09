#include<stdio.h>
#include<math.h>
#define PI 3.14159265359
int main (){
	double centrox, centroy, semieje_a, semieje_b, area, perimetro1, perimetro2, H;
	double puntox, puntoy, angulo, ecuacionElipse;
	printf("Ingrese el centro de la elipse: \n");
	scanf("%lf %lf",&centrox, &centroy);
	printf("Ingrese los semiejes: \n");
	scanf("%lf %lf",&semieje_a, &semieje_b);
	
	int validaSemiEjes= semieje_a>0 && semieje_b>0 && semieje_a>=semieje_b; //encapsulamos la proposición lógica
	double distancia_centro_foco, f1x, f2x, distancia1, distancia2;
	double difPer1Per2= perimetro1 - perimetro2;
	
	//area
	area= PI * semieje_a * semieje_b;
	
	//focos
	perimetro1= 2*PI*(sqrt((pow(semieje_a,2)+pow(semieje_b,2))/2));
	H= pow((semieje_a - semieje_b)/(semieje_a + semieje_b),2);
	perimetro2= PI*(semieje_a+semieje_b)*(1+(((3*H)/(10+sqrt(4-3*H)))+(((4/PI)-(14/11))*(pow(H,12)))));
	
	//distancia del centro a los focos
	distancia_centro_foco=sqrt(pow(semieje_a,2)-pow(semieje_b,2));
	
	//focos
	f1x= centrox- distancia_centro_foco;
	f2x= centrox+ distancia_centro_foco;
	
	if(validaSemiEjes==1){
		//Caso los datos son correctos 
		printf("Cálculos de la elipse:\n");
		printf("El área de la elipse es %lf\n", area);
		printf("El perímetro de la elipse según la fórmula 1 es: %lf\n", perimetro1);
		printf("El perímetro de la elipse según la fórmula 2 es: %lf\n", perimetro2);
		printf("La diferencia entre los perímetros es: %lf\n", difPer1Per2);
		printf("Ingrese un punto para verificar su posición: ");
		scanf("%lf %lf", &puntox, &puntoy);
		
		distancia1=sqrt(fabs(pow((puntox-f1x),2)+(pow((puntoy-centroy),2))));
		distancia2=sqrt(fabs(pow((puntox-f2x),2)+(pow((puntoy-centroy),2))));
		angulo= acos((PI/180)*(puntox-centrox/semieje_a));
		ecuacionElipse= ((pow((puntox-centrox),2))/pow(semieje_a,2))+(pow(puntoy-centroy,2)/pow(semieje_b,2));
		
		/*Aproximamos los valores por 4 decimales con la siguiente operacion y luego hallamos si son o no valores cercanos.*/
		int validaEcuacionElipse= fabs(ecuacionElipse-1)<0.0001; 
		int validaPropiedadElipse= fabs((distancia1+distancia2)-2*semieje_a)<0.0001;
		
		if (validaEcuacionElipse==1 && validaPropiedadElipse==1){
			//El punto está en la elipse y se cumple la propiedadd de la elipse
			printf("El punto ingresado es parte de la elipse\n");
			printf("El angulo de las ecuaciones paramétricas de la elipse es %lf grados sexagesimales");
			printf("Coordenadas de los focos: (%lf,%lf) y (%lf,%lf)\n", f1x, centroy, f2x, centroy);
			printf("Se cumple la propiedad de la elipse");
		}else if(validaEcuacionElipse==0 && ecuacionElipse>1){
			//punto fuera de la elipse
			printf("El punto ingresado está fuera de la elipse");
		}else if(validaEcuacionElipse==0 && ecuacionElipse<1){
			//punto dentro de la elipse
			printf("El punto ingresado está dentro de la elipse");
		}
	} else{
		printf("Los semiejes ingresados deben ser positivos y el semieje_a mayor que el semieje_b");
	}
	return 0;
}
