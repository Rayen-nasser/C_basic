#include<stdio.h>
main(){
    int a;
    do{

        printf("donner un entier a");
        scanf("%d",&a);
    }while (a<=10);
    while (a/10 !=0){
        if (a/10 >2){
            a=a/10-(2*(a%10));
}else {
(a=2*(a%10) -(a/10));
        }
    }
    if((a==0)||(a==7)){
        printf(" est divsible par 7");
    }else {
    printf("n'est pas divsible par 7");
    }}
