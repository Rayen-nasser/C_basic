#include<stdio.h>
main()
{
    int si,x,prem,pi,j,i,N,compri ,n,oy,min,s,nb,max;
    float moy;
    max=0;
    moy=0;
    oy=0;
    s=0;
    si=0;
    compri=0;
    prem=0;
    printf("donne un entier");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        do{
        printf("donne un nombre %d",i);
        scanf("%d",&n);
        }while(n<0);

        if(n>max)
        {
            max=n;
        }
        x=n;
        if(x<min)
        {
            min=x;
        }
        pi=0;
        for (j=2;j<=n/2;j++)
        {
            if(n%j==0){pi=pi+1;}
        }
        if(pi==0){prem=prem+1;}
        s=s+n;
        nb=nb+i;
        oy=(oy+n*i);
        if(10<=n && n<=45)
        {
            compri=compri+1;
        }

    }
     moy=oy/nb;

    printf("la plus grand nombre est  %d \n",max);
    printf("la plus petit nombre est %d \n",min);
    printf("la nombre premier egal %d \n",prem);
    printf("la somme est egal %d \n",s);
    printf("les nombre comri entre 10 et 45 est egal %d \n",compri);
    printf("la moyenne est egal %f",moy);
}
