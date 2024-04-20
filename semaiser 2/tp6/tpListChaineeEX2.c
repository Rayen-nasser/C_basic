#include <stdio.h>
#include <stdlib.h>

struct Element {
    int element;
    struct Element *valeurSuivant;
};

int main() {
    struct Element *tete = NULL;

    tete = malloc(sizeof(struct Element));
    struct Element *ptr = tete;
    char reponse;



    do {
        printf("\n donne un entier: ");
        scanf("%d", &ptr->element);
        getchar();  // Consume the newline character left in the input buffer

        printf("voulez-vous ajouter un autre numero? (o/n): ");
        reponse = getchar();

        if (reponse == 'o' || reponse == 'O') {
            ptr->valeurSuivant = malloc(sizeof(struct Element));
            ptr = ptr->valeurSuivant;
        } else {
            ptr->valeurSuivant = NULL;
        }
    } while (reponse == 'o' || reponse == 'O');


    int somme = 0;
    struct Element *courant = tete;
    while (courant != NULL) {
        somme += courant->element;
        courant = courant->valeurSuivant;
    }


    printf("La somme des entiers de la liste chaînée est : %d\n", somme);


    return 0;
}
