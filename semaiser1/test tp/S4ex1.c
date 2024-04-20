#include<stdio.h>
main()
{
    int N;
    do
    {
        printf("N=");
        scanf("%d",&+N);
    }while(N<0);
    int t[N];
    int compteur,x,i,estpremier;

    compteur=0;
    x=2;
    do{
        estpremier=0;
        for(i=2;i<=x/2;i++)
        {
            if(x%i==0)
            estpremier=1;
            break;
        }
        if(estpremier==0)
        {
            t[compteur]=x;
            compteur ++;
        }
        x ++;
    }while(compteur<N);




    printf("les %d premier nombers premiers sont: \n",N);

    for(i=0;i<N;i++)
    {
        printf("%d\n",t[i]);
    }
    return 0;
}
