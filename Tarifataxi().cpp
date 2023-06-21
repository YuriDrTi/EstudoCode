#include <stdio.h>
#include <locale.h>
double tarifataxi(double);

int main(double){
	setlocale(LC_ALL, "Portuguese");
	double dis, pagar;

	printf("distáncia "); scanf("%lf",&dis);
	pagar=tarifataxi(dis);
	printf("pagar: %f",pagar);
	return 0;
}

double tarifataxi(double dis){//o double deveria ser int ?//

	return dis*2.50+5.40;
	
}

