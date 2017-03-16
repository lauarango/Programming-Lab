#include <stdio.h>
#include <stdlib.h>
 //Devuelve la longitud de una lista.
int longc(char *cad){
	int n = 0;
	while (cad[n]!='\0'){
		n++;
	}
	printf("%d\n",n);
	return n;
}

int main(int argc,char* argr[]){
	char *cad1= argr[1];
	longc(cad1);
}