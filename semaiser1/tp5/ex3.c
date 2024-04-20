#include<stdio.h>
int somdiv( int nb )
{
    int s,i;
    s=0;
    for (i=0;i<=(nb/2);i++)
    {
        if(nb%i==0)
        {
            s=s+i;
        }
    }
    return(s);
}
int parfait( int nb)
{
    return(somdiv(nb)==nb);
}

main(){
    int nombre, limite;

    printf("Limite : "); scanf("%d", &limite);

    for (nombre=1; nombre<=limite; nombre++)
    {
        if (parfait(nombre))
        {
            printf("%d est parfait\n", nombre);
        }
    }

    return 0;
}
