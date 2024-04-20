#include<stdio.h>
int est_premier(int n,int i){
    if(n <= 2)
        return(n == 2);
    if(n % i == 0)
        return(0);
    if(i * i > n)
        return(1);
    return(est_premier(n,i+1));
}
int main(){
    int n;
    printf("saisir un nomber:");
    scanf("%d",&n);
    if(est_premier(n,2))
    {
        printf("%d est un nomber premier",n);
    }else
    {
        printf("%d n'est pas un nomber premier",n);
    }
    return 0;
}
