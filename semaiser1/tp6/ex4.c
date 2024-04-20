
#include<stdio.h>
void  SaisirTabCroissant(int T[], int N) {
    int i,j,tpm;
    for(i = 0;i < N; i++){
        printf("Entrez les elements du tableau :\n");
        scanf("%d",&T[i]);
    }
    printf("les elements du tableau sont:\n");
    for(i = 0; i < N ; i++){
        printf("T[%d]=%d\n",i,T[i]);
    }
    for(i = 0 ; i < N ; i++){
        for(j = i+1; j <  N;j++){
            if(T[i]>T[j]){
                tpm = T[i];
                T[i] = T[j];
                T[j] = tpm;
            }
        }
    }
    printf("les elements du tableau dans ordre croissant est :\n");
    for(i = 0; i < N; i++){
        printf("%d\n",T[i]);
    }
    }
    void  InsererTableau(int T[], int N, int v) {
        int i,j;
    i = 0;
    while( v >= T[i] && i < N-1){
        i ++ ;
    }
    if(i>=N-1){
        T[N-1]=v;
    }else{
    for( j = i+1 ;j < N-1; j--){
            T[j] = T[j-1];

    }
    T[i] = v;

    }
    printf("L'element a inserer est: \n");
    for( i=0 ; i < N ; i++){
        printf("%d\t",T[i]);
    }

    }
   main(){
       int T[100];
       int N,v;
       printf("saisir un entier N=");
       scanf("%d",&N);
       printf("saisir element a inserer E=:");
       scanf("%d",&v);

        SaisirTabCroissant(T,N) ;
        InsererTableau(T,N,v);
   }
