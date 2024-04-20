#include <stdio.h>

int main() {
    FILE* f = fopen("file.txt", "a");

    if (f == NULL) {
        printf("La fiche est vide \n");
    }

    char c = fgetc(f);
    char t[6] = {'w', 'e', 'l', 'c', 'o', 'm'};
  int i;

    for (i = 0; i < 6; i++) {
        fputc(t[i], f);
    }

    while (c!= EOF) {
        printf("%c", c);
        c = fgetc(f);
    }

    if (fclose(f) == EOF)
        printf("Erreur lors de la fermeture du fichier");
    else
        printf("Fichier ferme avec succes");

    return 0;
}
