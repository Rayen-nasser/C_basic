#include<stdio.h>main()
{
int n1,n2,aux;

do{
    printf("donne un nombre 1 \n");
    scanf("%d",&n1);
    printf("donne un nombre 2 ");
    scanf("%d",&n2);
}while((n1<0)&&(n2<0));
while(n1!=n2)
{
    if(n1>n2)
    {
        n1=n1-n2;
    }
    else{n2=n2-n1;}
}
printf("la pgcd est %d",n1);
}

