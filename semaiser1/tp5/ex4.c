 #include<stdio.h>
 int saisir(){
    int nb;
    printf("donne nombre");
    scanf("%d",&nb)
    while(nb<0){
        printf("donne nombre");
        scanf("%d",&nb);
    }
    return(nb);
 }

 int produit(int nb) {
     int p;
     p=1;
     do {
        nb=nb%10;
        if(nb%10=='0')
        {
            p=p*1;
        }
        else{
        p=p*nb;
        }
        nb=nb/10
     }while(nb!=0)
     return(p);
 }

 int somme(int nb)
 {

     int s;
     s=0;
     do {
        nb=nb/10
        s=s+1

     }while(nb!=0)
     return(s);
 }

 int amis ( int a int b)
 {
     return(somme(a)==somme(b));
 }

 int cousins ( int a int b)
 {
     return(produit(a)==produit(b));
 }

