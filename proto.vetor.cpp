#include <stdio.h>
#include <locale.h>
int main(void){
setlocale(LC_ALL, "Portuguese");
int tama;
float nota;
float total=0;
int i;
printf("Nu");
scanf("%f",tama);
for(i=0; i<tam; i++){
printf("Entre com nota %d: ",i+1);
scanf("%f",&nota[i]);
}
puts("media");
for(i=0; i<tam; i++){
printf("%3d %9.2f\n",i+1,nota[i]);
total+=nota[i];
total/tama;
}
printf("Total anual: %0.2f",total);
return 0;
}
