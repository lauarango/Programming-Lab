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
char copiar(char *o,char *q){
	int n= longc(o);
	q=(char*) malloc (n+1);
	for (int i=0;i<=n;i++){
		q[i]=o[i];
	}

	printf("%s\n",q);
	return *q;
	
}

 char copiarN (char *cadOrigen,char*cadDestino, int n){
 	  cadDestino= (char*)malloc(n+1);
 	  for (int j=0; j<n; j++){
 	  	cadDestino[j]= cadOrigen[j];
 	  	cadDestino[j+1]='\0';
 	  }

 	  printf("%s\n",cadDestino);
 	  return *cadDestino;
}


 char copiarSub (char *cadO,char *cadD, int n, int m){
 	cadD= (char*) malloc(m-n+1);
 	int cont=0;
 	for (int h=n; h<=m; h++){
	 	cadD[cont]= cadO[h];
	 	cadD[cont+1]= '\0'; 	
	 	cont=++;		

 	}
 	printf("%s\n",cadD);
 	return *cadD;
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

 char asignarCadena(char *str1,char k){
 	int lg= longc(str1);
 	str1=(char*)malloc(lg+1);

 	for (int i=0;i<lg;i++){
 		str1[i]=k;
 		str1[i+1]='\0';

 	}
 	printf("%s\n",str1);
 	return *str1;

 }


char mayus(char *str1){
	char *grr=str1;
	int ls=longc(str1);
	str1=(char*)malloc(ls+1);
	for (int j=0;j<ls;j++){
		if (grr[j] >= 97  && grr[j] <= 122){
			char ed=grr[j];
			int letra=ed - 32;
			str1[j]=letra;
			str1[j+1]='\0';
		}
		else{ 
			str1[j]=grr[j];
			str1[j+1]='\0';
		}
	}

	printf("%s\n",str1);
}

int existe(char *str1,char k){
	int ls=longc(str1);
	for (int i=0;i<ls;i++){
		if (str1[i] == k){
			printf("1\n");
			return 1;
		}
		else if (i==ls-1){
			printf("0\n");
			return 0;
		}
		
	}
}

int incial(char *str1,char k){
	int ls=longc(str1);
	for (int i=0;i<ls;i++){
		if (str1[i] == k){
			printf("%d\n",i);
			return i;
		}
		else if (i==ls-1){
			printf("-1\n");
		
		}
		
	}
}

int final(char *str1,char p){
	int ls=longc(str1);
	for (int i=(ls-1);i>=0;i--){
		if (str1[i] == p){
			printf("%d\n",(ls-1)-i);
			return (ls-1)-i;
		}
		else if (i==0){
			printf("-1\n");
		
		}
		
	}
}

int main(void){
	char *try="Hpellowp";
	char *it="+10prro100cia";
	int y= 3;
	int x= 6;
	char k='m';
	char p='p';
	//copiar(try,it);
	//longc(try);
	//copiarN (try,it,y);
	//copiarSub (try,it,y,x);
	//CompararCadenas(try,it);
	//ConcatenarCadenas(try,it);
	//asignarCadena(try,k);
	//mayus(it);
	//existe(try,k);
	//incial(try,k);
	//final(try,p);

}
