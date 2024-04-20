#include<stdio.h>
main()
{
    int a ,b ;
    printf("donne la valeur a et b");
    scanf("%d%d",&a,&b);
    if(a+b>0){
        printf("somme de a et b est positif %d",a+b);
    }
    else{
        printf("la somme a et b est nigative %d",a+b);
    }
    if(a*b>0){
        printf("produit de a et b est positif %d",a*b);
    }
    else{
        printf("produit de a et b est nigative %d",a*b);
    }

}
