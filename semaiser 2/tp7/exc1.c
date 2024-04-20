#include <stdio.h>
typedef struct cellule *liste;
typedef struct cellule {
    int info;
    liste suivant;
} cellule;

liste SuppPremOcc (liste l, int b) {
    liste p = l, q = NULL;
    while (p != NULL) {
        if (p->info == b) {
            if (p == l) {
                l = p->suivant;
            } else {
                q->suivant = p->suivant;
            }
            free(p);
            break;
        } else {
            q = p;
            p = p->suivant;
        }
    }
    return l;
}

liste SuppListe (liste l, int b) {
    liste p = l, q = NULL;
    while (p != NULL) {
        if (p->info == b) {
            if (p == l) {
                l = p->suivant;
                p = l;
            } else {
                q->suivant = p->suivant;
                p = q->suivant;
            }
        } else {
            q = p;
            p = p->suivant;
        }
    }
    return l;
}

void main() {
liste p, q, l = NULL;
int n, i, b;
printf("Entrez le nombre d'elements de la liste:\n");
scanf("%d", &n);

for (i = 0; i < n; i++) {
    p = (liste)malloc(sizeof(cellule));
    printf("Entrez un element de la liste:\n");
    scanf("%d", &(p->info));
    p->suivant = NULL;
    if (i == 0){
            l = p;
    }else {
        q->suivant = p;}
    q = p;
    }

printf(" ** \n");
printf("Entrez l'entier a supprimer:\n");
scanf("%d", &b);

l = SuppPremOcc(l, b);
printf(" La liste apres la suppression  de premier occurence est la suivante \n");
while (p != NULL) {
    printf(" %d ", p->info);
    p = p->suivant;
}

printf("\n");
l = SuppPremOcc(l, b);
p = l;
printf(" La liste apres la suppression de toutes les occurrences est la suivante \n");
while (p != NULL) {
    printf(" %d ", p->info);
    p = p->suivant;
}
}
