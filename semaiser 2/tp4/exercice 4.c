#include<stdio.h>
#include<string.h>
typedef struct
{
    int num_passport;
    char nom[20];
    int age ;
    char e_mail[20];
    char adresse[30];
    float qte_bg ;
}passager;

typedef struct
{
    int j;
    char m[10];
}Date;

typedef struct
{
    char matricule[10];
    char dest[10];
    bool décision;
    enum{TUNISAIR,NOUVELAIR,KARS} compagnie;;
    int nb_pass ;
    passager list_ps;
    Date date_vol;
}Vol;

Vol vols[n];

int Affiche ( Vol )
{
    int i , nb;
    for ( i = 0 ; i < Vol.nb_pass ; i++)
    {
        if( Vol.list_ps[i].qte_bg == 0)
        {
            printf(" %s \n" , Vol.list_ps[i].nom);
        }
    }
}

int AfficheInf ()
{
    int i ;
    bool aucun_vol = true;
    for ( i = 0 ; i < n ; i++)
    {
        if(vols[i].compagnie  == TUNISAIR && strcmp(vols.[i].dest, "Rome")==0 && vols[i].date_vol.m=="Juillet" && vols[i].decision == true)
        {
             printf("Vol annule - Matricule : %s - Destination : %s\n", vols[i].matricule, vols[i].dest);
            aucun_vol = false;
        }
    }
    if(aucun_vol)
    {
        printf("Pas de vol annule a Rome en juillet\n");
    }
    bool aucun_vol_rome_juillet = true;
    for ( i = 0; i < n; i++) {
        if (vols[i].compagnie == TUNISAIR && strcmp(vols[i].dest, "Rome") == 0 {
            aucun_vol_rome_juillet = false;
            break;
        }
    }
    if (aucun_vol_rome_juillet) {
        printf("Pas de vol pour TUNISAIR a Rome en juillet\n");
    }

}

int totalPoidsBagage (Vol)
{
    int i , nb;
    for ( i = 0 ; i <= Vol.nb_pass ; i++)
    {
        nb = nb + Vol.list_ps[i].qte_bg;
    }
    return nb;
}

int Surpoids ( passager , Vol )
{
    for ( int i =0 ; i <= Vol.nb_pass ; i++)
    {
        if( Vol.list_ps[i].qte_bg >= 20)
        {
            printf("%s",Vol.list_ps[i].nom);
        }
    }
}
