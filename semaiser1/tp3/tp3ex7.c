#include<stdio.h>
main ()
{
    int c ;
    printf("donne un entie entre 1 et 7 ");
    scanf("%d",&c);
    if(c==1)
    {
        printf("lundi");
    }
    else if(c==2)
    {
        printf("mardi");
    }
    else if(c==3)
    {
        printf("mercredi");
    }
    else if(c==4)
    {
        printf("jeudi");
    }
    else if(c==5)
    {
        printf("vendredi");
    }
    else if(c==6)
    {
        printf("samedi");
    }
    else
    {
        printf("dimanche");
    }
}
