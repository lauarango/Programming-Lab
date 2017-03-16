#include <stdio.h>
#include <stdlib.h>

int longc(char *cad){
	int n = 0;
	while (cad[n]!='\0'){
		n++;
	}
	//printf("%d\n",n);
	return n;
}
	

 char copiarN (char *cadOrigen,char*cadDestino, int n){
 	  cadDestino= (char*)malloc(n+1);
 	  int j=0;
 	  for (j; j<n; j++){
 	  	cadDestino[j]= cadOrigen[j];
 	  	cadDestino[j+1]='\0';
 	  }

 	  printf("%s\n",cadDestino);
 	  return *cadDestino;
}


int main(int argc, char* argr[]){
	char *cad1= argr[1];
	char *cadN=argr[2];
	char *cadC=argr[3];
	int n = atoi(cadC);
	copiarN(cad1,cadN,n);
}


