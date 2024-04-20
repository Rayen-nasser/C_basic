#include <stdio.h>

typedef struct personne {
    char nom[100];
    char prenom[100];
    int age;
} personne;

int main() {
    FILE* f = fopen("persones.txt", "a");

    if (f == NULL) {
        printf("La fiche est vide \n");
        return 1; // Return an error code to indicate failure
    }

    int n = 0;
    printf("Donne le nombre de personnes : ");
    scanf("%d", &n);

    struct personne p;

    for (int i = 0; i < n; i++) {
        printf("persone %d \n",i+1);
        fprintf(f,"persone:%d \n",i+1);

        printf("Nom : \n");
        scanf("%s", p.nom);
        fprintf(f, "Nom : %s \n", p.nom);

        printf("Prenom : \n");
        scanf("%s", p.prenom);
        fprintf(f, "Prenom : %s \n", p.prenom);

        printf("Age : ");
        scanf("%d", &p.age);
        fprintf(f, "Age : %d \n", p.age);
    }

    fclose(f);
    return 0;
}
