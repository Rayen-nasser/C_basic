#include<stdio.h>
main ()
{
    int c,u,d,e,s ;
    printf("donne la valeur de chifre ");
    scanf("%d",&c),
    u=c/100;
    d=c%100/10;
    e=c%10;
    s=u+d+c;
    if(s%3==0)
    {
        printf("la valeur %d est divisible 3",c);
    }else{
        printf("la valeur %d n'est pas divisible 3",c);
    }
}
