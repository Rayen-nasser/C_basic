#include<stdio.h>
main()
{
    int ni,np,x,n ;
    np=0;
    ni=0;
    do{
        printf("donne un nombre");
        scanf("%d",&x);
        if(x!=0){
            n=n+1;
            if(x%2==0){np=np+1;}
            else{ni=ni+1;};
            }

    }while(x!=0);
    printf("donne d'entiers saisir %d \n",n);
    printf("donne d'entiers impaire %d \n",ni);
    printf("donne d'entiers paire %d",np);

}


