#include<stdio.h>
main()
{
    int n,i;
    float m;
    printf("donne un nombre");
    scanf("%d",&n);
    i=1;
    m=0;
    do
    {
        m=m+(float)1/i;
        i++;
    }while(i<=n);

        printf("somm est des n=%f",m);

}
