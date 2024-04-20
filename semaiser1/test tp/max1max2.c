#include<stdio.h>
main()
{
    int t[100];
    int i,n,max1,max2;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("t[%d]=",i+1);
        scanf("%d",&t[i]);
    }
    max1=t[0];
    max2=t[0];
    for(i=0;i<=n;i++)
    {
        if(t[i]>max1)
        {
            max2=max1;
             max1=t[i];
        }
        if(max1>t[i]  && t[i]>max2)
            max2=t[i];
    }
    printf("max1=%d",max1);
    printf("max2=%d",max2);
}
