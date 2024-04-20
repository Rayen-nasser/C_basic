#include<stdio.h>
main()
{
    int n1,n,m,i;
    printf("combien de notes");
    scanf("%d",&n1);
    m=0;
    for(i=1;i<=n1;i++)
    {
        printf("donne la note %d",i);
        scanf("%d",&n);
        m=m+n;

    }

        printf("%d",m/n1);

}
