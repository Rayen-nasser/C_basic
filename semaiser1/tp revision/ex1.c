#include<stdio.h>
main()
{
    int d,s,x,a,b;


    do{


        printf("X=");
        scanf("%d",&x);
        a=x%10;
        b=x/10;

    }while((a==b)  ||  ((x<=10) ||  (x>99)));

        s=a*10+b;

        d=s;

        do{
                d=d-x;

        }while(d>10);
        printf("%d \t",d);
}

