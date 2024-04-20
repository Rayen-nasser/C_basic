#include<stdio.h>
int SaisirPositif( int N)
{
    do {
        printf("N=");
        scanf("%d",&N)
    }while(N<0);
    return(N);
}

void SaisirTab(int N int T[100])
{
    int i;
    for(i=0;i<=N;i++)
    {
        printf("T[%d]",i+1);
        sacnf("%d",T[i]);
    }
}

void Recherche(int x, int T[100] ,int N)
{
    int i;
    for(i=0;i<=N;i++)
    {
        if(T[i]>x){
            printf("T[%d]=",i,T[i]);
        }
    }
}

int Transfert(int T1[100],int N1,int T2[100]){
    int i,N2=N1;
    for(i=N1;i<=;i--)
    {
        for(j=2;j<=T1[i]%2;i++)
        {
            if(j%2==0)
                ok=ok+1;
        }
        if(ok==0)
        {
            T2[i]=T1[N2+1];
        }
    }
}
int Rotation(int T[100], int N){
    int i,Aux;
    for(i=0;i<=N;i++)
    {
        Aux=T[i];
        T[i]=T[i+1];
        T[i+1]=Aux;
    }
}

main(){
int T1[100],T2[100],T[100],N,i;

do{
    printf("N=");
    scanf("%d",&N);
}while(N<1 || N>=50);

 for(i=0;i<=N;i++)
 {
     printf("T[%d]=",i+1);
     scanf("%d",&SaisirPositif(T[i]));
 }

 do{
    printf("donne voter choix SVP enter 1 et 4 ")
    scanf("%d",&M);
    if(M=='1')
    {
        x=SaisirPositif(x);
        for(i=0;i<=N;i++)
        {
            printf("Recherche%d",Recherche(x,T[i],N));
        }
    }
    else if(M=='2')
    {
        for(i=0;i<=N;i++)
        {
            printf("Transfert%d",Transfert());
        }
    }else{
        for(i=0;i<=N;i++)
        {
            printf("Rotation%d",Rotation(T,N));
        }
    }

 }while(M>3);

}
