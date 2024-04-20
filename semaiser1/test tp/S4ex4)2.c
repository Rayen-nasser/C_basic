
#include<stdio.h>
void main(){
 int n,s, S ,f ;
 do{
 printf("Donner le numero de l'element a calculer : ");
 scanf("%d", &n);
 }while(n<0);
 S=0;
 for(int i=1; i<=n; i++){
s=0;
 for(int k=1; k<=i; k++)s+=k;
 f=1;
 for(int j=1; j<=i; j++)f*=j;
 S += f/s;
 }
}
