#include<stdio.h>
typedef struct
{
    char indicatif[20];
    int numero;

}telephone;
typedef struct
{
    int num;
    char rue[20];
    char ville[20];
    int codePostal;
    char gouvernorat[20];
    char pays[20];

}adrese;
typedef struct {
    char nom[20];
    char prenom[20];
    telephone tel;
    adrese adr;
}personne;
personne t[100];

main()
{
    int i,n,nb=0;
    do
    {
        printf("donne nomber de personne:\n");
        scanf("%d",&n);
    }while(n<0);
    for(i = 0 ; i < n ; i++)
    {
        printf("numero de personne : %d",i+1);
        printf("nom :\n");
        scanf("%s",&t[i].nom);
        printf("prenom :\n");
        scanf("%s",&t[i].prenom);
        printf("numero de telephone :\n");
        printf("l'indicatif: ");
        scanf("%d",&t[i].tel.indicatif);
        printf("le numero: ");
        scanf("%d",&t[i].tel.numero);
        printf("adresse :\n");
        printf("numéro: ");
        scanf("%d",&t[i].adr.num);
        printf("ville: ");
        scanf("%s",&t[i].adr.ville);
        printf("la rue: ");
        scanf("%s",&t[i].adr.rue);
        printf("la code postal: ");
        scanf("%d",&t[i].adr.codePostal);
        printf("la gouvernorat: ");
        scanf("%s",&t[i].adr.gouvernorat);
        printf("la pay: ");
        scanf("%s",&t[i].adr.pays);
    }

    for( i = 0 ; i <  n ; i++)
    {
        if(t[i].adr.ville == "tunis")
        {
            nb = nb + 1 ;
        }
    }
    printf("nomber de personne est %d",nb);
}
