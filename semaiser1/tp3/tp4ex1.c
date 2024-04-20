#include<stdio.h>
main()
{
    int n,x,m,i;
    printf("donne x");
    scanf("%d",&x);
    printf("donne n");
    scanf("%d",&n);
    m=1;
    for(i=1;i<=n;i++)
    {
        m=m*x;

    }

        printf("%d",m);

}
