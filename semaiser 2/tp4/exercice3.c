#include<stdio.h>
typedef struct
{
    int jour ;
    int mois ;
    int année ;
}Date;
typedef struct {
    int numéro;
    char titre[100];
    Date date;
    char description[100];
}Evenement;
typedef struct
{
    char proprietaire[100];
    int nbEvenements;
    Evenement evenement[100];
}Agenda;
void  SaisirEvenement(Evenement)
{
    printf(" Numero :");
    scanf("%d",Evenement.numéro);
    printf("\n Titre :");
    scanf("%s",Evenement.titre);
    printf("\n Date mois :");
    scanf("%d",Evenement.date.mois);
    printf("\n Date jour :");
    scanf("%d",Evenement.date.jour);
    printf("\n Date anne:");
    scanf("%d",Evenement.date.année);
    printf("\n Description :");
    scanf("%d",Evenement.description);
}
int RechercherEvenement(Agenda , Evenement)
{
    for (int i = 0 ; i <= Agenda.nbEvenements ; i++)
    {
        if(Agenda.evenement[i].titre == Evenement.titre && Agenda.evenement[i].date.mois == Evenement.date.mois && Agenda.evenement[i].date.jour == Evenement.date.jour && Agenda.evenement[i].date.année == Evenement.date.année)
        {
            return 1;
        }
    }
    return 0;
}
int AjouterEvenement(Agenda ,Evenement)
{
    if(RechercherEvenement(Agenda , Evenement)==1)
    {
        printf("L'évènement existe déjà dans l'agenda.\n");
    }
        for (int i = 0; i < Agenda.nbEvenements; i++) {
        if (strcmp(Agenda.evenements[i].titre, Evenement.titre) == 0 &&
            Agenda.evenements[i].date.jour == Evenement.date.jour &&
            Agenda.evenements[i].date.mois == Evenement.date.mois &&
            Agenda.evenements[i].date.annee == Evenement.date.annee) {
            printf("Un évènement avec le même titre existe déjà dans l'agenda pour cette date.\n");
        }

}

