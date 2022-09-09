#include<stdio.h>
int main(){
	int cantCaras=4, cantAristas=5, cantVertices=3, teoremaEuler, analizarTeor;
	teoremaEuler= cantCaras-cantAristas+cantVertices;
	analizarTeor= teoremaEuler==2;
	printf("%d", analizarTeor);
	return 0;
}
