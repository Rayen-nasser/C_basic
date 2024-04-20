#include<stdio.h>
void saisirTab(int t[],int n){
    int i;
    for(i=0;i<n;i++){
            printf("t[%d]=",i);
            scanf("%d",&t[i]);
    }
}
void combinaisons(int t[],int n){
    int i,j,x;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            x=t[i]*10+t[j];
            printf("%d ,",x);
        }
    }
}
main(){
    int t[5],n=5;
    printf("remplir le tableau\n");
    saisirTab(t,n);
    printf("les combinaisons: ");
    combinaisons(t,n);
}
