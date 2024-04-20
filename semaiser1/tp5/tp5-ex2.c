#include<stdio.h>

main()
{
    int T[100],N;
    printf("donne Taille de tableau");
    scanf("%d",&N);
    remplir(T,N);
    Affiche(T,N);
    somme(T,N);
    printf("somme de tableau est egal",somme(T,N));
}

int remplir( int T[] , int N)
{
    int nb,i;
    for (i=0,i<=N,i++)
    {
        printf("donne T[%d]",i);
        scanf("%d",&T[i]);
    }
}

int Affiche( int T[] , int N)
{
    int i;
    for( i=0;i<=N;i++)
    {
        printf("T[%d]=%d",i,T[i]);
    }
}

int somme( int T[] ,)
