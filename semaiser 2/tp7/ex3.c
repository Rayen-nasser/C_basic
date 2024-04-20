
#include<stdio.h>
#include<stdlib.h>

struct vehicule {

    char marque[21];
    int numeroDeSérie;
    int annéeDeConstruction;
    struct vehicule* suivant;

};

struct Parc {

    int longueur;
    struct vehicule* vehiculeSuivant ;

};

void  SaisirVehicule(struct vehicule* v){

    struct vehicule* v = malloc(sizeof(struct vehicule));

    printf("marque de vehicle \n");
    scanf("%s",&v->marque);

    printf("numero de série \n");
    scanf("%d",&v->numeroDeSérie);

    printf("l’année de construction \n");
    scanf("%d",&v->annéeDeConstruction);

    v->suivant = NULL;

    return v;
}

void AfficherVehicule(struct vehicule* v) {

    printf("la marque de vehicle est %s \n",v->marque);

    printf("numero de série %d \n",v->numeroDeSérie);

    printf("l’année de construction %d \n",v->annéeDeConstruction);

}

int LongueurParc(struct Parc p){

    return p.longueur - NombreVehicules(p.vehiculeSuivant);
}

int NombreVehicules(struct vehicule* v){

    int count = 0;

    struct vehicule* ptr = v;

    while(ptr != NULL){
        count++;
        ptr = ptr->suivant;
    }

    return count;

}

int EntrerVehicule(struct Parc* p, struct vehicule* v){

    if(LongueurParc(*p) > 0){

        if(p->vehiculeSuivant == NULL){

            p->vehiculeSuivant = v;
            v->suivant =NULL;

        }else{

            struct vehicule* dernierVehicule = p->vehiculeSuivant;

            while(dernierVehicule != NULL){

                dernier_vehicule = dernier_vehicule->suivant;
            }

            dernier_vehicule->suivant = v;
        }
        p->longueur--;
    }else{
                printf("Le parc est plein, impossible d'ajouter un vehicule.\n");

    }

}

void Info(struct Parc* p){

    struct vehicule* ptr = p->vehiculeSuivant

    if (ptr == NULL) {
        printf("Le parc est vide.\n");
        return;
    }

    printf("Vehicules dans le parc :\n");
    while(ptr != NULL){

        AfficherVehicule(ptr);
        ptr = ptr->suivant;

    }

}

void Chercher(struct Parc* p, int numSerie){

    struct vehicule* ptr = p->vehiculeSuivant

    while( ptr != NULL){
        if( ptr->numeroDeSérie == numSerie)
        {
            return 1;
        }
        ptr = ptr->suivant;
    }

    return 0;

}

void main(){

    struct Parc p;
    p.longueur = 3;
    p.vehiculeSuivant = NULL;
    int choix,numero;

    do{

        printf("\n1. Ajouter un véhicule\n");
        printf("2. Afficher la liste des véhicules\n");
        printf("3. Chercher un véhicule\n");
        printf("4. Quitter\n");

        printf("Choix: ");
        scanf("%d",&choix);

        switch(choix){
            case 1:
                v =SaisirVehicule(vehicule);
                EntrerVehicule(v);
            case 2: AfficherVehicule(vehicule);
            case 3:
                printf("numro de vehicule");
                scanf("%d",&numero);
                Chercher(Parc ,numero);

    }while(choix != 4);

    return 0;

}
