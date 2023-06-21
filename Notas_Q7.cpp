#include <stdio.h>
#include <locale.h>
int main(void){
setlocale(LC_ALL, "Portuguese");
float nota[0];
float total=0;
int i; 
int num;
printf("Numero de provas");
scanf("%d",&num);
for(i=0; i<num; i=2){
printf("Entre com nota %d: ",i+1);
scanf("%f",&nota[i]);
}
puts("Notas");
for(i=0; i<num; i++){
printf("%3d %9.2f\n",i+1,nota[i]);
total+=nota[i];
total/num;
}
printf("media: %0.2f",total);
return 0;
}
