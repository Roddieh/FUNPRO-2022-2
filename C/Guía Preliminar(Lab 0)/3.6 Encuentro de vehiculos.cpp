#include<stdio.h>

int main(){
	double d=20, v1kmp=45, v2kmp=25, t=30;
	int v1_alcanza_a_v2= t==60*d/(v1kmp+v2kmp);
	printf("¿v1 alcanza a v2? %d\n", v1_alcanza_a_v2);
	return 0;
}
