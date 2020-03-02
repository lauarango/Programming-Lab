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

 int CompararCadenas(char*cad1, char*cad2){
 	int con1=0;
 	int con2= 0;
 	int lb= longc(cad1);
 	int lc=longc(cad2);
 	for (int ac1=0;ac1<= lb; ac1++){
 		char v=cad1[ac1];
 		con1= con1 +v;
 	}

 	for (int ac2=0;ac2<= lc; ac2++){
  		char l=cad2[ac2];
 		con2= con2 +l;
 	}
 	if (con1 < con2){
 		printf("Resultado <0\n");
 	}
 	if (con1>con2){
  		printf("Resultado >0\n");
 	}
 	if (con1==con2){
  		printf("Resultado =0\n");
  	}
 }

 int main(int argc, char* argr[]){
	char *cad1= argr[1];
	char *cadN=argr[2];
	CompararCadenas(cad1,cadN);
}
