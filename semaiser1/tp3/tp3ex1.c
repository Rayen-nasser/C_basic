#include<stdio.h>
main()
{
    int a ;
    printf("donne un nombre");
    scanf("%d",&a);
    if(a>0){
        printf("nombre est positif %d",a);
    }
    else{
        printf("la valeur a est nigative %d",a);
    }
}
