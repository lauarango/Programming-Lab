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

char ConcatenarCadenas(char *cad1, char*cad2){
  	int lb= longc(cad1);
 	int lc=longc(cad2);
 	char *ptr=cad1;
 	int v= lb + lc;
 	cad1=(char*)malloc(v+1);

 	for (int j=0;j<lb;j++){
 		cad1[j]=ptr[j];
 	}

 	for (int i=0;i<lc;i++){
 		cad1[lb+i]=cad2[i];
 	}
 	cad1[v]='\0';
 
 	printf("%s\n",cad1);
 	return *cad1;

 }

 int main(int argc, char* argr[]){
	char *cad1= argr[1];
	char *cadN=argr[2];
	ConcatenarCadenas(cad1,cadN);
}
