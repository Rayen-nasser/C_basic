#include<stdio.h>
void main(){
 int Ua,Un,Va,Vn,Wa,Wn, n;
 do{
 printf("Donner le numero de l'element a calculer : ");
 scanf("%d", &n);
 }while(n<1);
 Ua = 0;
 Va = 0;
 Wa = 0;
 for(int i=1; i<=n; i++)
 {
     Un = 2*Wa - 3;
 Vn = 5*Ua + 1;
 Wn = 2*Va - 3;
 Ua = Un;
 Va = Vn;
 Wa = Wn;
 }
 printf("U%d = %d\nV%d = %d\nW%d = %d", n, Un, n, Vn, n, Wn);

 }
