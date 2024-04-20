#include<stdio.h>

int SaisirTabpositif(float T[],int N)
{
    float nb;
    int i ;

    for(i=0;i<=N;i++)
        {
            printf("T[%d]=%f",i,nb)
        }
}

int SommeTableau (float T[], int N)
{
    int s=0 ,i;
    for(i=0,i<=N,i++)
        s+=T[i];
    return s;
}

int Maximum(float T[], int N)
{
    int max=T[0],i;
    for(i=0;i<=N;i++)
    {
        if(T[i]>max)
        {
            max==T[i];
        }
    }
    return(max);
}

int RechercheTableau(float T[], int N, float Val)
{
    int i;
    for(i=0;i<=N;i++)
    {
        if(Val==T[i])
            return i;

    }
    return -1;
}

main(){
    int T[100],N,Val;
    do{
        print("donne la taille d'un tableau");
        scanf("%d",&N);
    }while(N<0 || N>100);
    SaisirTabpositif(T,N);
    printf("somme egal %d",SommeTableau(T,N));
    printf("la valeur max %d",Maximum(T,N));
    print("done un valeur");
    scanf("%d",&Val);
    print("donne la position d'un valeur %d",RechercheTableau(T,N,Val));

}
