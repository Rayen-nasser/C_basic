
#include <stdio.h>

main(){

    FILE* f = fopen("file2.txt", "r");

    if (f == NULL) {
        printf("La fiche est vide \n");
    }

    char ch1[100], ch2[100];
    int x;

    if (fscanf(f, "%s %s %d", ch1, ch2, &x) == 3) {
        printf("Read: %s %s %d\n", ch1, ch2, x);
    } else {
        printf("Failed to read data.\n");
    }

}
