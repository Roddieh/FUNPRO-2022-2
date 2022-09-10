#include<stdio.h>
#include<math.h>
#define PI 3.1415926536
int main(){
	double radio1, theta1, radio2, theta2, radio3, theta3, a, b, precision;
	printf("Ingrese los 3 puntos: \n");
	scanf("%lf %lf %lf %lf %lf %lf", &radio1, &theta1, &radio2, &theta2, &radio3, &theta3);
	
	int validaTheta= theta1>=0 && theta1<=360 && theta2<=360 && theta2>=0 && theta3<=360 && theta3>=0;
	
	
	
	if(validaTheta){
		int validaB= b!=0;
		printf("Datos del caracol (a, b, precisión)\n");
		scanf("%lf %lf %lf", &a, &b, &precision);
		int validaPunto1, validaPunto2, validaPunto3, validaPuntos, validaPrecision;
		validaPunto1= fabs(radio1-a-b*sin(theta1*PI/180))<precision;
		validaPunto2= fabs(radio2-a-b*sin(theta2*PI/180))<precision;
		validaPunto3= fabs(radio3-a-b*sin(theta3*PI/180))<precision;
		validaPrecision= precision<=1;
		validaPuntos= validaPunto1==1 && validaPunto2==1 || validaPunto2==1 && validaPunto3==1 || validaPunto1==1 && validaPunto3==1;
		if (validaPrecision==1 && validaB==1){
			if(validaPuntos==1){
				//Hay dos puntos que pertenecen al caracol
				if(validaPunto1==1){
					printf("El punto (%lf,%lf) pertenece al caracol con ecuación r=%lf+%lfsen(theta)\n", radio1, theta1, a, b);
				}if(validaPunto2==1){
					printf("El punto (%lf,%lf) pertenece al caracol con ecuación r=%lf+%lfsen(theta)\n", radio2, theta2, a, b);
				}if(validaPunto3==1){
					printf("El punto (%lf,%lf) pertenece al caracol con ecuación r=%lf+%lfsen(theta)\n", radio3, theta3, a, b);
				}
				printf("Por lo menos dos puntos de los ingresados pertenecen al caracol con ecuacion r=%lf+%lfsen(theta)\n", a,b);
				double area= PI*(pow(b,2)+(pow(a,2))/2);
				printf("El área del caracol es : %lf\n", area);
				//tipo de caracoles
				int caracolLazo, cardioide, caracolHendidura, caracolConvexo;
				caracolLazo= (a/b)<1;
				cardioide= (a/b)==1;
				caracolHendidura= 1<(a/b) && (a/b)<2;
				caracolConvexo= (a/b)>=2;
				double calculoAentreB= a/b;
				if (caracolLazo==1){
					printf("El caracol tiene lazo porque a/b=%lf\n", calculoAentreB);
				}else if(cardioide==1){
					printf("El caracol es un cardiodide porque a/b=%lf\n", calculoAentreB);
				}else if(caracolHendidura==1){
					printf("El caracol tiene una hendidura porque a/b=%lf\n", calculoAentreB);
				}else if (caracolConvexo>=2){
					printf("El caracol es un caracol convexo porque a/b=%lf\n", calculoAentreB);
				}
			}else{
				//Hay menos de dos puntos que pertenecen al caracol
				if(validaPunto1==1){
					printf("El punto (%lf,%lf) pertenece al caracol con ecuación r=%lf+%lfsen(theta)\n", radio1, theta1, a, b);
				}if(validaPunto2==1){
					printf("El punto (%lf,%lf) pertenece al caracol con ecuación r=%lf+%lfsen(theta)\n", radio2, theta2, a, b);
				}if(validaPunto3==1){
					printf("El punto (%lf,%lf) pertenece al caracol con ecuación r=%lf+%lfsen(theta)\n", radio3, theta3, a, b);
				}
				printf("No se encontraron dos puntos que pertenezcan al caracol\n");
			}
		}else if(validaPrecision==0){
			printf("La precision para realizar los cálculos debe ser menor o igual a 0.1\n");	
		}else if(validaB==0){
			printf("El coeficiente b ingresado para el caracol no es válido, debe ser diferente de cero\n");
		}
	} else{
			printf("Los grados sexagesimales de las coordenadas ingresadas no son válidos, deben estar en el rango [0,360]\n");
	}
	return 0;
}
