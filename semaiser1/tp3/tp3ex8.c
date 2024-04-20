#include<stdio.h>
main()
{
    char c;
    printf("donne un carater");
    scanf("%c",&c);
    if((c>='a')&&(c<='z'))
    {
        printf("la carater en minuscule");
    }else{
        printf("la carater en majuscule");
    }
}
