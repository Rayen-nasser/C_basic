#include<stdio.h>
main()
{
    int t[100],i,n,j,aux;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("t[%d]=",i+1);
        scanf("%d",&t[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(t[i]<t[j])
            {
                aux=t[i];
                t[i]=t[j];
                t[j]=aux;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        printf("%d\n",t[i]);
    }
}
