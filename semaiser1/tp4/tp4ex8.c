#include<stdio.h>
void main()
{
    int a,b,c,m,f,i;
    do
    {
        printf("Donner a b c : \n");
        scanf("%d%d%d",&a,&b,&c);
    }
    while(a<0 || a >20 || b <0 || b >20 || c<0 || c >20);
    m = a;
    if (b>m)
    {
        m = b;
    }
    if (c > m)
    {
        m = c;
    }
    for (i=1 ;i<= m;i++)
    {
        if (i > a)
        {
            printf(" \t");
        }
        else
        {
            printf("A\t");
        }
        if (i > b)
        {
            printf(" \t");
        }
        else
        {
            printf("B\t");
        }
        if (i > c)
        {
            printf(" \n");
        }
        else
        {
            printf("C\n");
        }
    }

}
