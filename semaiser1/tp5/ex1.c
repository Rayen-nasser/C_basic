#include<stdio.h>

int min ( int a ,int b){
    if (a<b)
        return (a);
    else
        return (b);
}

int max (int a , int b){
    if(a>b)
        return(a);
    else
        return(b);
}

main() {
   int a,b;
   printf("donne a et b");
   scanf("%d%d",&a,&b);
   printf("max enter a et b est %d",max(a,b));
   printf("min enter a et b est %d",min(a,b));
}
