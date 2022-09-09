#include <stdio.h>

int main(){
	int p=1, q=1, r=1;
	int prueba1= !p || (r || !q);
	int prueba2= (!(!(p||q)) || !(!p&&!q)) && ((!(!p&&!q)) || (!p||q));
	/*...*/
	return 0;
}
