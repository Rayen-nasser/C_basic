int existe(struct Element *tete, int n) {
    struct Element *courant = tete;
    while (courant != NULL) {
        if (courant->element == n) {
            return 1;
        }
        courant = courant->suivant;
    }
    return 0;
}

