#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUITS 100
#define MAX_CLIENTS 100
#define MAX_FACTURES 100

struct stock {
    int nombreProduit;
    int ajoute;
};

struct client {
    char nom_client[50];
    int code_client;
    char adresse[50];
    char ville[50];
    char code_postal[10];
};

struct produit {
    int code_produit;
    char nom_produit[50];
    float prix_unitaire;
    int quantite;
};

struct date {
    int annee;
    int mois;
    int jour;
};

struct Facture {
    int num_facture;
    struct produit produits[50];
    struct date date_facture;
    char nomClient[100];
    float montant_total;
};

void ajouterProduit(struct produit *p, struct stock *s) {
    if (1) {
        printf("Entrer le code du produit: ");
        scanf("%d", &p->code_produit);

        printf("Entrer le nom du produit: ");
        scanf("%s", &p->nom_produit);

        printf("Entrer le prix unitaire: ");
        scanf("%f", &p->prix_unitaire);

        printf("Entrer la quantité de produit: ");
        scanf("%d", &p->quantite);


        printf("Produit ajouté avec succès.\n");
    } else {
        printf("Le stock est saturé.\n");
    }
}

void modifierProduit(struct produit *p, int code, float prix) {
    if (p->code_produit == code) {
        p->prix_unitaire = prix;
        printf("Produit modifié avec succès.\n");
    } else {
        printf("Produit non trouvé.\n");
    }
}

void chercherProduit(struct produit *p, int nbProduits, char *nomProduit) {
    int trouve = 0;
    for (int i = 0; i < nbProduits; i++) {
        if (strcmp(p[i].nom_produit, nomProduit) == 0) {
            printf("Produit trouvé :\n");
            printf("Code : %d\n", p[i].code_produit);
            printf("Nom : %s\n", p[i].nom_produit);
            printf("Prix unitaire : %.2f\n", p[i].prix_unitaire);
            printf("Quantité : %d\n", p[i].quantite);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Produit non trouvé.\n");
    }
}

void supprimerProduit(struct produit *p, struct stock *s, int nbProduits, char *nomProduit) {
    int index_produit = -1;
    for (int i = 0; i < nbProduits; i++) {
        if (strcmp(p[i].nom_produit, nomProduit) == 0) {
            index_produit = i;
            break;
        }
    }

    if (index_produit != -1) {
        for (int i = index_produit; i < nbProduits - 1; i++) {
            p[i] = p[i + 1];
        }
        s->nombreProduit--;

        printf("Produit supprimé avec succès.\n");
    } else {
        printf("Produit non trouve.\n");
    }
}

void ajouterClient(struct client *clients, int *nb_clients) {
    struct client nouveau_client;

    printf("Code client: ");
    scanf("%d", &nouveau_client.code_client);

    printf("Nom client: ");
    scanf("%s", nouveau_client.nom_client);

    printf("Adresse: ");
    scanf("%s", nouveau_client.adresse);

    printf("Ville: ");
    scanf("%s", nouveau_client.ville);

    printf("Code postal: ");
    scanf("%s", nouveau_client.code_postal);

    clients[*nb_clients] = nouveau_client;
    (*nb_clients)++;

    printf("Client ajouté avec succès.\n");
}
int rechercherClient(struct client clients[], int nb_clients, char nomClient[]) {
    for (int i = 0; i < nb_clients; i++) {
        if (strcmp(clients[i].nom_client, nomClient) == 0)
            return 1;
    }
    return 0;
}

void supprimerClient(struct client clients[], int *nb_clients, char nomClient[]) {
    int index_client = -1;
    struct client nouveau_clients[MAX_CLIENTS];
    int nouveau_nb_clients = 0;

    for (int i = 0; i < *nb_clients; i++) {
        if (strcmp(clients[i].nom_client, nomClient) == 0)
            index_client = i;
    }

    if (index_client != -1) {
        for (int i = 0; i < index_client; i++) {
            nouveau_clients[nouveau_nb_clients] = clients[i];
            nouveau_nb_clients++;
        }

        for (int i = index_client + 1; i < *nb_clients; i++) {
            nouveau_clients[nouveau_nb_clients] = clients[i];
            nouveau_nb_clients++;
        }

        for (int i = 0; i < nouveau_nb_clients; i++) {
            clients[i] = nouveau_clients[i];
        }

        (*nb_clients)--;

        printf("Client supprimé avec succès.\n");
    } else {
        printf("Client non trouvé.\n");
    }
}

float calculerMontantTotal(struct Facture* facture, struct stock* s) {
    float montant_total = 0.0;

    float quantite = facture->produits[0].quantite;
    for (int i = 0; i < s->nombreProduit; i++) {
        montant_total += facture->produits[i].prix_unitaire * facture->produits[i].quantite;

    }

    return montant_total;
}



void ajoutefacture(struct Facture *f, struct client *c) {
    printf("Entrez le numéro de la facture : ");
    scanf("%d", &(f->num_facture));

    printf("Entrez le nom du client : ");
    scanf("%s", f->nomClient);


    printf("Entrez le nombre de produits : ");
    int nb;
    scanf("%d", &nb);
    for (int i = 0; i < nb; i++) {
        printf("Entrez le code du produit %d : ", i + 1);
        int code;
        scanf("%d", &code);
        printf("Entrez la quantité du produit %d : ", i + 1);
        int quantite;

        f->montant_total += f->produits[i].prix_unitaire * f->produits[i].quantite;
    }

    printf("Entrez le montant total : %f",f->montant_total);

}




void rechercherFacture( struct Facture f[], int nbFactures) {
    int numFacture;
    int i;
    int trouve = 0;

    printf("Entrez le numéro de la facture à rechercher : ");
    scanf("%d", &numFacture);

    for (i = 0; i < nbFactures; i++) {
        if (f[i].num_facture == numFacture) {
            printf("Facture trouvée :\n");
            printf("Numéro de facture : %d\n", f[i].num_facture);
            printf("Nom du client : %s\n", f[i].nomClient);
            printf("Montant de la facture : %.2f\n", f[i].montant_total);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Aucune facture n'a été trouvée avec le numéro %d.\n", numFacture);
    }
}

void supprimerFacture(struct Facture* factures, int* nb_factures, int num_facture) {
    for (int i = 0; i < *nb_factures; i++) {
        if (factures[i].num_facture == num_facture) {
            for (int j = i; j < *nb_factures - 1; j++) {
                factures[j] = factures[j + 1];
            }
            (*nb_factures)--;
            printf("Facture supprimee avec succes.\n");
            return;
        }
    }
    printf("Aucune facture trouvee avec le numero donne.\n");
}



int afficherMenu() {
     int n;
    printf("===== MENU =====\n");
    printf("1. Gerer les produits\n");
    printf("2. Gerer les clients\n");
    printf("3. Gerer les factures\n");
    printf("4. Quitter\n");
    scanf("%d",&n);
    getchar();
    return n;
}

void gererProduits(struct produit *p, struct stock *s, int nbProduits) {
    int choix;

    do {
        printf("===== GERER LES PRODUITS =====\n");
        printf("1. Ajouter un produit\n");
        printf("2. Modifier un produit\n");
        printf("3. Chercher un produit\n");
        printf("4. Supprimer un produit\n");
        printf("5. Retour au menu principal\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 1:
                ajouterProduit(p, s);
                break;
            case 2:
                {
                    int code_produit;
                    float nouveau_prix;

                    printf("Entrer le code du produit : ");
                    scanf("%d", &code_produit);
                    printf("Entrer le nouveau prix unitaire : ");
                    scanf("%f", &nouveau_prix);
                    modifierProduit(p, code_produit, nouveau_prix);
                }
                break;
            case 3:
                {
                    char nom_produit[100];

                    printf("Entrer le nom du produit : ");
                    scanf("%s", nom_produit);
                    chercherProduit(p, nbProduits, nom_produit);
                }
                break;
            case 4:
                {
                    char nom_produit[100];

                    printf("Entrer le nom du produit : ");
                    scanf("%s", nom_produit);
                    supprimerProduit(p, s, nbProduits, nom_produit);
                }
                break;
            case 5:
                printf("Retour au menu principal.\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }

        printf("\n");
    } while (choix != 5);
}
void gererClients(struct client *clients, int *nb_clients) {
    int choix;

    do {
        printf("===== GERER LES CLIENTS =====\n");
        printf("1. Ajouter un client\n");
        printf("2. Chercher un client\n");
        printf("3. Supprimer un client\n");
        printf("4. Retour au menu principal\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 1:
                ajouterClient(clients, nb_clients);
                break;

            case 2:
                {
                    char nom_client[100];

                    printf("Entrer le nom du client : ");
                    scanf("%s", nom_client);

                    int resultat_recherche = rechercherClient(clients, *nb_clients, nom_client);

                    if (resultat_recherche == 1) {
                        printf("Client trouvé.\n");
                    } else {
                        printf("Client non trouvé.\n");
                    }
                }
                break;
            case 3:
                {
                    char nom_client[100];

                    printf("Entrer le nom du client : ");
                    scanf("%s", nom_client);

                    supprimerClient(clients, nb_clients, nom_client);
                }
                break;
            case 4:
                printf("Retour au menu principal.\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                break;
        }

        printf("\n");
    } while (choix != 4);
}


void gererFactures(struct Facture* factures, int* nb_factures) {
    int choix;

    do {
        printf("===== GERER LES FACTURES =====\n");
        printf("1. Ajouter une facture\n");
        printf("2. Chercher une facture\n");
        printf("3. Supprimer une facture\n");
        printf("4. Retour au menu principal\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
        getchar();


        switch (choix) {
            case 1:
                ajoutefacture(factures, nb_factures);
                break;
            case 2:
                rechercherFacture(factures, *nb_factures);
                break;
            case 3:
                {
                    int num_facture;
                    printf("Entrez le numéro de la facture à supprimer : ");
                    scanf("%d", &num_facture);
                    supprimerFacture(factures, nb_factures, num_facture);
                }
                break;
            case 4:
                printf("Retour au menu principal.\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }

        printf("\n");
    } while (choix != 4);
}

int main() {
    struct client clients[MAX_CLIENTS];
    FILE *fichier;
    int nb_clients = 0;

    fichier = fopen("clients.txt", "a");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    while (fscanf(fichier, "%s\n%d\n%s\n", clients[nb_clients].nom_client, &clients[nb_clients].code_client, clients[nb_clients].ville) == 3) {
        nb_clients++;
    }

    fclose(fichier);

    struct produit produits[MAX_PRODUITS];
    FILE *fichier1;
    char ligne[50];
    int nb_produits = 0;

    fichier1 = fopen("produits.txt", "a");
    if (fichier1 == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    while (fgets(ligne, sizeof(ligne), fichier1)) {
        if (strncmp(ligne, "Code :", 6) == 0) {

            sscanf(ligne, "Code : %d", &produits[nb_produits].code_produit);
            fgets(ligne, sizeof(ligne), fichier1);
            sscanf(ligne, "Nom : %s",  &produits[nb_produits].nom_produit);
            fgets(ligne, sizeof(ligne), fichier1);
            sscanf(ligne, "Prix unitaire : %f", &produits[nb_produits].prix_unitaire);
            fgets(ligne, sizeof(ligne), fichier1);
            sscanf(ligne, "Quantite : %d", &produits[nb_produits].quantite);

            nb_produits++;
        }
    }

    fclose(fichier1);

    struct Facture factures[MAX_FACTURES];
    FILE *fichier2;
    char ligne2[50];
    int nb_factures = 0;

    fichier2 = fopen("factures.txt", "a");
    if (fichier2 == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    while (fgets(ligne2, sizeof(ligne2), fichier2)) {
        if (strncmp(ligne2, "Numero :", 8)==0) {
            sscanf(ligne2, "Numero : %d", &factures[nb_factures].num_facture);
            fgets(ligne2, sizeof(ligne2), fichier2);
            sscanf(ligne2, "Date : %d-%d-%d", &factures[nb_factures].date_facture.annee, &factures[nb_factures].date_facture.mois, &factures[nb_factures].date_facture.jour);
            fgets(ligne2, sizeof(ligne2), fichier2);
            sscanf(ligne2, "Client : %s]", factures[nb_factures].nomClient);
            fgets(ligne2, sizeof(ligne2), fichier2);
            sscanf(ligne2, "Montant total : %f", &factures[nb_factures].montant_total);

            nb_factures++;
        }
    }

    fclose(fichier2);

    int choix;

    do {
        choix = afficherMenu();


        switch (choix) {
            case 1:

                gererProduits(produits,0,nb_produits);
                break;
            case 2:
            gererClients(clients,nb_clients);
                break;
            case 3:
               gererFactures(factures,nb_factures);
                break;
            case 4:
                printf("Programme termin�.\n");
                break;
            default:
                printf("Choix invalide. Veuillez r�essayer.\n");
                break;
        }

        printf("\n");
    } while (choix != 4);

    fichier = fopen("clients.txt", "a");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    for (int i = 0; i < nb_clients; i++) {
        fprintf(fichier, "%s\n%d\n%s\n", clients[i].nom_client, clients[i].code_client, clients[i].ville);
    }

    fclose(fichier);

    fichier1 = fopen("produits.txt", "a");
    if (fichier1 == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    for (int i = 0; i < nb_produits; i++) {
        fprintf(fichier1, "Code : %d\nNom : %s\nPrix unitaire : %.2f\nQuantite : %d\n\n", produits[i].code_produit, produits[i].nom_produit, produits[i].prix_unitaire, produits[i].quantite);
    }

    fclose(fichier1);

    fichier2 = fopen("factures.txt", "a");
    if (fichier2 == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    for (int i = 0; i < nb_factures; i++) {
        fprintf(fichier2, "Numero : %d\nDate : %d-%d-%d\nClient : %s\nMontant total : %.2f\n\n", factures[i].num_facture, factures[i].date_facture.annee, factures[i].date_facture.mois, factures[i].date_facture.jour, factures[i].nomClient, factures[i].montant_total);
    }

    fclose(fichier2);

    return 0;
}
