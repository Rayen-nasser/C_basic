#include<stdio.h>
main()
{
    int i=1;
    int j;
    int val;
    while(i<=3)
    {
        printf(" ");
        printf("\n%d",i);
        j=1;
        while(j<=3)
        {
            val= i*j;
            printf("\t %d",val);
            j++;
        }
        printf("\n");
        i++;
    }


}
