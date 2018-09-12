#include <stdio.h>
double soma(double x, double y){
	return x+y;
}

double sub(double x, double y){
	return x-y;
}

double div(double x, double y){
	return x/y;
}
double mult(double x, double y){
	return x*y;
}

int main (){
	int x,y;
	char sinal;
	printf("Digite 'x'(operação)'y':\n");
	scanf("%d %c %d",&x, sinal, &y);
	if(sinal == "+"){
		printf ("%lf",soma(x,y));
	} else if(sinal == "-"){
		printf ("%lf",sub(x,y));
	} else if(sinal == "/"){
		printf ("%lf",div(x,y));
	} else if(sinal == "*"){
		printf ("%lf",mult(x,y));
	}
	
}