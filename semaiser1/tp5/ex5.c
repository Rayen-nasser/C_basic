#include<stdio.h>
int inverse( int x)
{
    int NbrInverse;
    NbrInverse=0;
    do{
        NbrInverse=NbrInverse*10;
        NbrInverse=NbrInverse+(x%10);
        x=x/10;
    }while(x!=0);
    return(NbrInverse);
}
int palindrome(int x){

    if(inverse(x)==x)
        return (1);
    else
        return (0);
}
main(){
int n ;
printf("donne n");
scanf("%d",&n);
if(palindrome(n)==1)
{
    printf("le nombre est palindrome");
}
else {
         printf("le nombre n'est pas palindrome");
}
}
