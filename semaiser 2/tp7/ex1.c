#include<stdio.h>
#include<stdlib.h>

struct module {
    int nb;
    struct module *moduleSuivant;
};

int NBoccure(struct module *t , int nb){
    int occ = 0;
    struct module *ptr = t;

    while(ptr !=NULL){
        if(strcmp(ptr->nb,nb)==0) occ++;
        ptr= ptr->moduleSuivant;
    }
    return occ;
}

int affiche (struct module *t){
    struct module *ptr = t;
    while(ptr != NULL){
        printf("%d",ptr->nb);
        ptr = ptr->moduleSuivant;
    }
}
struct module * saisir(struct module *tete){
    tete = malloc(sizeof(struct module));

    struct module *ptr = tete;

    for(int i = 0 ; i < 5 ; i++){

        printf("entre un nomber");
        scanf("%d",&ptr->nb);

        ptr = ptr->moduleSuivant;


    }
}
int main(){

    struct module *tete = NULL;

    tete = saisir(tete);

    affiche(tete);

    int nbm = 10;

    printf("nomber de occurance %d",NBoccure(tete , nbm));

    return 0;

}

