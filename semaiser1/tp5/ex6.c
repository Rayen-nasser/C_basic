#include<stdio.h>
#include<math.h>
int saisie_entier() {
    int n;
    do {
        printf("N=");
        scanf("%d",&n);
    }while(n<0);
    return(n);
}
float Affiche()
{
     float x;
    printf("X=");
    scanf("%d",&x);
    return(x);
}

int Puissance(int k, int x)
{
    int n;
    n=0;
    n=pow(x,k);
    return(n);
}

int inverse( int x)
{
    int NbrInverse;
    NbrInverse=0;
    do{
        NbrInverse=NbrInverse*10;
        NbrInverse=NbrInverse+(x%10);
        x=x/10;
    }while(x!=0);
    return(1/NbrInverse);
}

int U_Terme(int n){
    int U;
    U=0;
    U=1/Puissance(n,2);
    return(U);
}

int V_Terme(int n){
    int i,V;
    V=0;
    for(i=0;i<=n;i++)
    {
        V=V+((i+1)*U_Terme(i));
    }
    return(V);
}

int W_Terme (int n)
{
    int W;
    W=0;
    W=1/V_Terme(n);
}

main(){
    int n,w,nb,i,s;
    n=saisie_entier();
    w=W_Terme(n);
    nb=0;
    do {
        for (i=0;i<=w/2;i++)
        {
            if(w%i==0)
            {
                s=s+1;
            }
        }
        if(s==0)
        {
            printf("%d",w);
        }
    }while(nb!=100);
}

