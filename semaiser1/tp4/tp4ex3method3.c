#include<stdio.h>
main()
{
    int n,m,p,x,i;
    printf("donne un nombre");
    scanf("%d",&n);
    m=0;
    p=1;
    i=1;
    do
    {
        printf("donne la note %d  ",i);
        scanf("%d",&x);
        m=m+x;
        p=p*x;
        i++;
    }while(i<=n);

        printf("somm est =%d",m);
        printf("produit est =%d",p);
        printf("moyenne est =%d",m/n);
}
