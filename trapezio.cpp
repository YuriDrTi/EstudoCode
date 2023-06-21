#include<stdio.h>
#include<stdlib.h>

int area(int x, int y, int z){

return 	((x+y)*z/2);

}
main()
{
int bm,bn,h;
printf("base maior");scanf("%d",&bm);
printf("base menor");scanf("%d",&bn);
printf("altura");scanf("%d",&h);
printf("area :%d",area(bm,bn,h));

}

