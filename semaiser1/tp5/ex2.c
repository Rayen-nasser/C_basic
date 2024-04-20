#include<stdio.h>
float moye(float a , float b) {
    float moye;
    moye=0;
    moye=moye+((a+b)/2);
    return(moye);
}

main(){
    int a,b;
    printf("donne a et b");
    scanf("%d%d",&a,&b);
    printf("moyenne = %f",moye(a,b));
}
