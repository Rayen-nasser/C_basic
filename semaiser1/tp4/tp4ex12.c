#include<stdio.h>
main()
{
    int n,e,z,d,c;
    do{
    printf("donner un entier positif qui contient  au moins deux chiffre ");
    scanf("%d",n);}
    while(n<10);


     e=0;
     z=n;
     do{
     c=(n/10)%10;
     d=n%10;
     if(c>=d)
        {n=n/10;}}
     while ((n>=10)&&(e!=0));
     if(n<10){printf("oui pour %d",e);
     }
    else { printf("non pour %d",z);
            }
}
