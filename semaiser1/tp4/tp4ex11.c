#include<stdio.h>
main()
{
   int a,s,c,b,n;
   do{
   printf("donne un valeur n");
   scanf("%d",&n);
   }while(n<5);
   b=n;
   c=0;
   a=0;
   do{
        c=b%10;
        a=a+c;
        b=b/10;
   }while(b!=0);
   if(((n%10==0)||(n%8==0)||(n%6==0)||(n%4==0)||(n%2==0))||((n%2==0)&&(s%3==0)))
   {
       printf("n est divise par 6");
   }
   else{
        printf("non divise par 6");
   }

}
