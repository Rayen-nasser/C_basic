#include<stdio.h>
#include<math.h>
main()
{
    char r,a,b;
    printf("donne l'operateur");
    scanf("%c",&r);
    printf("donne le premeir");
    scanf("%d",&a);
    printf("donne le second operateur");
    scanf("%d",&b);
    if(r=='+')
    {
        printf("le resultat: %d %c %d = %d ",a,r,b,a+b);
    }
    else if(r=='*')
        {
        printf("le resultat: %d %c %d = ",a,r,b,a*b);
        }
    else if(r=='-')
    {
        printf("le resultat: %d %c %d = ",a,r,b,a-b);
    }
    else{
        printf("le resultat: %d %c %d = ",a,r,b,a/b);
    }
}
