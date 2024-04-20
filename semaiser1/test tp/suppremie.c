#include<stdio.h>
main()
{
     int t[100];
    int i,n,pos;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("t[%d]=",i+1);
        scanf("%d",&t[i]);
    }
     printf("pos=");
    scanf("%d",&pos);
    if(pos<1 || pos>n)
        printf("n'est pas exist");
    else{for(i=pos;i<=n-1;i++)
    {
            t[i-1]=t[i];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d\n",t[i]);
    }
    }
}
