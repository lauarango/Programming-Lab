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

char asignarCadena(char *str1,char k){
	int j=0;
 	char *pt=str1;
 	int lg= longc(str1);
 	str1=(char*)malloc(lg+1);
 	for (j;j<lg;j++){
		str1[j]=k;
		str1[j+1]='\0';

	}
/*
 	for (int i=0;i<lg;i++){
 		str1[i]=k;
 		str1[i+1]='\0';

 	}*/
 	printf("%s\n",str1);
 	return *str1;

 }

 int main(int argc,char* argv[]){
 	char* p=argv[1];
 	char* x=argv[2];
 	char d=*x;
 	asignarCadena(p,d);
 }