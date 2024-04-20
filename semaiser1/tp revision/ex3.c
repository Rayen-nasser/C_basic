#include<stdio.h>
main()
{
    int s,s1,i,j,m,n;
    s=0;
    s1=0;
    do{
        printf("m=");
        scanf("%d",&m);
        printf("n=");
        scanf("%d",&n);
    }while((m<n)||(n<1));
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            s=s+i;
        }
    }
    for(j=2;j<n;j++)
    {
        if(n%j==0)
        {
            s1=s1+j;
        }
    }
    printf("s=%d",s);
    printf("s1=%d",s1);
    if((s==n)&&(s1==m))
    {
        printf("m et n amis");
    }else{printf("m et n n'est sont ");}
}
