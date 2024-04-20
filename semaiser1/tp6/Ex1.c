
#include<stdio.h>


main()
{
    int i,T[100],N,x;
    do {
    printf("donne Taille de tableau");
    scanf("%d",&N);
    }while( N<0 || N>100);
    for(i=0;i<N;i++)
    {
        printf("Donnez T[%d]",i);
        scanf("%d",&T[i]);
    }
    printf("donne un valeur");
    scanf("%d",&x);

    for(i=0;i<=N;i+++)
    {
        if(T[i]==x)
            {
                s=s+1;
                do{
                printf("la position x est %d")
                }while(s<=2)
            }
        else{
                while(i!=N){
                    printf("T[%d]=%d",N+1,x)
                }
            }
    }
}
