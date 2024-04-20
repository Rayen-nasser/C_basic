#include <stdio.h>
#include <stdlib.h>

struct Element {
    int element;
    struct Element *suivant;
};

int main() {
    struct Element *tete = NULL;

    printf("Saisir les entiers de la liste chaînée (terminer par -1):\n");
    int valeur;
    do {
        scanf("%d", &valeur);

        if (valeur != -1) {
            struct Element *nouveau = malloc(sizeof(struct Element));
            nouveau->element = valeur;
            nouveau->suivant = NULL;

            if (tete == NULL) {
                tete = nouveau;
            } else {
                struct Element *courant = tete;
                while (courant->suivant != NULL) {
                    courant = courant->suivant;
                }
                courant->suivant = nouveau;
            }
        }
    } while (valeur != -1);

    int entier, position;
    printf("Saisir l'entier à insérer : ");
    scanf("%d", &entier);
    printf("Saisir la position où insérer l'entier : ");
    scanf("%d", &position);

    struct Element *nouveau = malloc(sizeof(struct Element));
    nouveau->element = entier;

    if (position == 0) {
        nouveau->suivant = tete;
        tete = nouveau;
    } else {
        struct Element *precedent = NULL;
        struct Element *courant = tete;
        int i = 0;
        while (i < position && courant != NULL) {
            precedent = courant;
            courant = courant->suivant;
            i++;
        }
        nouveau->suivant = courant;
        precedent->suivant = nouveau;
    }

    printf("La liste chaînée après insertion :\n");
    struct Element *courant = tete;
    while (courant != NULL) {
        printf("%d ", courant->element);
        courant = courant->suivant;
    }
    printf("\n");

    while (tete != NULL) {
        struct Element *temp = tete;
        tete = tete->suivant;
        free(temp);
    }

    return 0;
}
