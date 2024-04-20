#include<stdio.h>
main()
{
   int m;
   printf("donne la valeur m");
   scanf("%d",&m);
   if(m%2==0){
        printf("la valeur de m est pair et double est %d",m/2);
   }
   else
   {
        printf("la valeur de m est impair et double est %d",m*2);
   }
}
