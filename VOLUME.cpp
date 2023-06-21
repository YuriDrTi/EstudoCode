#include<stdio.h>
#define VOLUME(a,b) ((3.14159*(a*a))*b)

int main(void){
float a, b;
printf("Entre com um valor de raio e altura do cilindro: ");
scanf("%f%f",&a,&b);
printf("O valor %f e %f Volume: %d\n\n",a,b, VOLUME(a,b));
return 0;
}
