#include<stdio.h>
main()
{
    int a,b,c ,max;
    printf("la valeur de a b et c");
    scanf("%d%d%d",&a,&b,&c);
    max = (a>b) ? a : b ;
    max = (max>c) ? max :c;
    printf("la maximum est %d",max);
}
