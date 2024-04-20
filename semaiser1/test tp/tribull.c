
#include<stdio.h>
void main(){
 int T1[10];
 int T2[10];
 int T3[20];
 int i,n,m,o,aux;
 n = ReadNumber("T1");
 for(int i=0; i<n; i++){
 printf("Donner l'entier N%d : ", i+1);
 scanf("%d", &T1[i]);
 }
 m = ReadNumber("T2");
 for(int i=0; i<m; i++){
 printf("Donner l'entier N%d : ", i+1);
 scanf("%d", &T2[i]);
 }

 int change=1;
 while(change){
        change=0;
    for(i=0;i<n-1;i++)
    {
        if(T1[i]>T1[i+1])
        {
            change=1;
            aux=T1[i];
            T1[i]=T1[i+1];
            T1[i+1]=aux;
        }
    }
 }
 int changed=1;
 while(changed){
        changed=0;
    for(i=0;i<m-1;i++)
    {
        if(T2[i]>T2[i+1])
        {
            changed=1;
            aux=T2[i];
            T2[i]=T2[i+1];
            T2[i+1]=aux;
        }
    }
 }
 int compteur=0,nb1=0,nb2=0;
 while(compteur<m+n)
 {
     if(T1[nb1]>T2[nb2])
     {
         T3[compteur]=T1[nb1];
         nb1++;
     }
     else{
        T3[compteur]=T2[nb2];
         nb2++;
     }
     compteur++;
 }
 for(int x=0; x<compteur; x++)printf("%d\n", T3[x]);
}


int ReadNumber(char s[]){
 int x;
 do{
 printf("Donner le nombre de entier a entrer au %s: ", s);
 scanf("%d", &x);
 }while(!((x>0)&&(x<=10)));
 return x;
}
