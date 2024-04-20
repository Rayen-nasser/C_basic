struct Element *TabToList(int tab[], int taille) {
    struct Element *tete = NULL;
    struct Element *ptr = NULL;
    for (int i = 0; i < taille; i++) {
        struct Element *nouveau = malloc(sizeof(struct Element));
        nouveau->element = tab[i];
        nouveau->suivant = NULL;
        if (tete == NULL) {
            tete = nouveau;
        } else {
            ptr->suivant = nouveau;
        }
        ptr = nouveau;
    }
    return tete;
}

