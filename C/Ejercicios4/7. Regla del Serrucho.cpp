#include<stdio.h>

int main(){
	int numAtomico, validaNumAtom;
	printf("Ingrese el número atómico: \n");
	scanf("%d", &numAtomico);
	validaNumAtom= numAtomico>=1 && numAtomico<=30;
	if (validaNumAtom==1){
		int parte1, parte2, parte3, parte4, parte5;
		int terminaEnP= numAtomico>4 && numAtomico<=10 || numAtomico>12 && numAtomico<=18;
		int terminaEnD= numAtomico>20 && numAtomico<=30;
		int terminaEnS= terminaEnP==0 && terminaEnD==0;
		parte1= numAtomico==1 || numAtomico==2; 
		parte2= numAtomico==3 || numAtomico==4;
		parte3= numAtomico>4 && numAtomico<=12;
		parte4= numAtomico>12 && numAtomico<=20;
		parte5= numAtomico>20 && numAtomico<=30;
 		if(parte1){
			printf("1s%d\n", numAtomico);
			
		}else if(parte2){
			printf("1s2 2s%d", numAtomico-2);
			
		}else if(parte3){
			if(terminaEnP)
				printf("1s2 2s2 2p%d\n", numAtomico-4);
			else{
				printf("1s2 2s2 2p6 3s%d\n", numAtomico-10);
			}
			
		}else if(parte4){
			if(terminaEnP){
				printf("1s2 2s2 2p6 3s2 3p%d\n", numAtomico-12);
			}else if(terminaEnS){
				printf("1s2 2s2 2p6 3s2 3p6 4s%d\n", numAtomico-18);
			}
			
		}else if(parte5){
			printf("1s2 2s2 2p6 3s2 3p6 4s2 3d%d\n", numAtomico-20);
		}
	}else{
		printf("El número atómico debe estar en el rango [1,30]");
	}
	return 0;
}

