#include<stdio.h>
#include<stdlib.h>

struct Patient {
    char nom [20];
    char prenom [20];
    bool rdv;
};

struct  salleDattente{
    struct Patient patient;
    struct patient *patientSuivant;
};

struct salleDattente* AjoutPatient ( struct salleDattente *t, Patient P ){

    struct salleDattente *nouveauPatient = malloc(sizeof(struct salleDattente))

    printf(" nom de patient");
    sacnf("%s",&nouveauPatient->patient->nom);

    printf("\n prenom de patient");
    sacnf("%s",&nouveauPatient->patient->prenom);

    printf("\n rdv de patient");
    sacnf("%b",&nouveauPatient->patient->rdv);

    nouveauPatient->patientSuivant = NULL;

    if(t == NULL) t = nouveauPatient;
    else{
        struct salleDattente *ptr = t;
        while(ptr->patientSuivant != NULL){
            ptr = ptr->patientSuivant;
        }
        ptr->patientSuivant  = nouveauPatient;
    }

    return t;

}

void RendezVous(struct salleDattente* t, int* nbRdv, int* nbSansRdv) {

    int countRdv = 0;
    int countSansRdv = 0;

    struct salleDattente* ptr = t;

    while (ptr != NULL) {
        if (ptr->Patient->rdv == 1) {
            countRdv++;
        } else {
            countSansRdv++;
        }
        ptr = ptr->patientSuivant;
    }

    printf("nbRdv = %d et nbSansRdv = %d", countRdv, countSansRdv);

    *nbRdv = countRdv;
    *nbSansRdv = countSansRdv;
}


struct salleDattente* supprimerPatient (struct salleDattente* t)  {

    if(t != NULL){

        if(t->patient->rdv == 0){

            struct salleDattente *noeudSupprimer  = t ;

            t = t->patientSuivant;

            free(noeudSupprimer);

        }else{

            struct salleDattente *precedent  = t,
                                 *courant    = t->patientSuivant;

            while(courant != NULL){

                if(courant->patient->rdv == 0){

                    precedent->patientSuivant  = courant->patientSuivant
                    free(courant);
                    break;
                }else{

                    courant = courant->patientSuivant;
                    precedent = precedent->patientSuivant;

                }

            }

        }

    }else{

        struct salleDattente *premierPatient = t;

        if(premierPatient->patient->rdv == 1){

            free(premierPatient);

        }

    }


    return t;
}

void ConsulterSalleAttente ( struct salleDattente* t ){

    struct salleDattente *ptr1 = t;
    struct salleDattente *ptr2 = t;

    printf("les patients avec rendez-vous\n");
    while( ptr1 != NULL){

        if(ptr1->patient->rdv == 1){

            printf("Non \n",&ptr1->patient->nom);
            printf("Prenom \n",&ptr1->patient->prenom);

        }

        ptr1 = ptr1->patientSuivant;

    }

    printf("les patients avec sans rendez-vous\n");
    while( ptr2 != NULL){

        if(ptr->patient->rdv == 0){

            printf("Non \n",&ptr2->patient->nom);
            printf("Prenom \n",&ptr2->patient->prenom);

        }

        ptr2 = ptr2->patientSuivant;
    }
}
