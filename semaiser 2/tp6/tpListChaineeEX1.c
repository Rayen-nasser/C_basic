 #include<stdio.h>
#include<stdlib.h>

typedef struct Element Element;
struct Element {
    int valeur;
    struct Element* suivant;
};

typedef Element* Liste;

Liste InsereEnTete(Liste l, int x) {
    Element* nouvelElement = (Element*) malloc(sizeof(Element));
    nouvelElement->valeur = x;
    nouvelElement->suivant = l;
    return nouvelElement;
}

Liste SaisieListeEnvers(int n) {
    Liste l = NULL;
    int x;
    for (int i = 0; i < n; i++) {
        printf("Entrez une valeur : ");
        scanf("%d", &x);
        l = InsereEnTete(l, x);
    }
    return l;
}

void Afficher(Liste l) {
    Element* courant = l;
    while (courant != NULL) {
        printf("%d ", courant->valeur);
        courant = courant->suivant;
    }
    printf("\n");
}

int main(){
    Liste l = SaisieListeEnvers(3);
    Afficher(l);
    return 0;
}
