#include<stdio.h>
#include<stdlib.h>

float Calculo (int x) {
for (int i=0;i<=4;i+=2)
x++;
return x;
}
main () {
int a=2; float x;
a = a > 2? 7 : 5;
switch (a) {
case 2:
a = a * 3; break;
case 5:
a = a + 2; break;
case 7:
a = a - 2; break;
}
x = Calculo(a) + 1.7;
printf("Resultado: %.1f",x);
}
