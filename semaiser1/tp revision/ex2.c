#include<stdio.h>
main()
{
    int p,x,i,n;
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<0);
    x=n;
    p=0;
    do{
        x=x/10;
        for(i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
                p=p+1;
            }
        }

    }while(x/10!=0);
    if(p==0){printf("%d sont tous super premier  %d",n,x);}

}
