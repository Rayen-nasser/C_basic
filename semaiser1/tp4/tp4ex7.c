#include<stdio.h>
main()
{
    int x,u1,i,u2,n;
    do{
        printf("donne un entier");
        scanf("%d",&n);
    }while(n<2);
    u1=1;
    u2=1;
    i=2;
    while(i<n){
        x=u1+u2;
        i=i+1;
    }
    printf("suite =%d",x);
}
