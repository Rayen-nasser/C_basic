#include<stdio.h>
 void SaisirTabCroissant(int T[], int N)
 {
     int i;
     do{
        printf("T[0]=");
         scanf("%d",&T[0]);
    }while(T[0]<0);

     for (i=1;i<=N;i++)
     {
         do{
             printf("T[%d]=",i);
             scanf("%d",&T[i]);
         }while((T[i]<0)||(T[i]<T[i-1]));
        }
     }

 void InsererTableau(int T[], int N, int v)
 {
     int i;
     N=N+1;
     i=N-1;
     while(T[i]>v){
        T[i+1]=T[i];
        i=i-1;
     }
     T[i+1]=v;
 }
 main(){
    int i,N,T[100],v;
    do{
        printf("N=");
        scanf("%d",&N);
    }while(N<0 || N>=100);

     printf("donne un valeur");
     scanf("%d",&v);
     SaisirTabCroissant(T, N);
     InsererTableau(T,N,v);

     for(i=0;i<=N+1;i++)
     {
         printf("T[%d]=%d \n",i,T[i]);
     }
 }


