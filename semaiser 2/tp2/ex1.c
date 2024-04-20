#include <stdio.h>
struct DATE {
    int jour;
    int mois;
    int annee;
};
int main() {

    struct DATE date1, date2;
    printf("Saisie de la première date : \n");
    printf("Jour : ");
    scanf("%d", &date1.jour);
    printf("Mois : ");
    scanf("%d", &date1.mois);
    printf("Année : ");
    scanf("%d", &date1.annee);
    printf("Saisie de la deuxième date : \n");
    printf("Jour : ");
    scanf("%d", &date2.jour);
    printf("Mois : ");
    scanf("%d", &date2.mois);
    printf("Année : ");
    scanf("%d", &date2.annee);


    if (date1.annee < date2.annee) {
        printf("La date la plus petite est : %d/%d/%d\n", date1.jour, date1.mois, date1.annee);
    } else if (date1.annee > date2.annee) {
        printf("La date la plus petite est : %d/%d/%d\n", date2.jour, date2.mois, date2.annee);
    } else {
        if (date1.mois < date2.mois) {
            printf("La date la plus petite est : %d/%d/%d\n", date1.jour, date1.mois, date1.annee);
        } else if (date1.mois > date2.mois) {
            printf("La date la plus petite est : %d/%d/%d\n", date2.jour, date2.mois, date2.annee);
        } else {
            if (date1.jour < date2.jour) {
                printf("La date la plus petite est : %d/%d/%d\n", date1.jour, date1.mois, date1.annee);
            } else if (date1.jour > date2.jour) {
                printf("La date la plus petite est : %d/%d/%d\n", date2.jour, date2.mois, date2.annee);
            }

        }
    }

    return 0;
}
