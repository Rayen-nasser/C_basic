#include<stdio.h>
#include <stdlib.h>
struct facture {
    int num_facture;
    date_facture date;
    client clients;
    float montant_total;
    int nb_produits;
};
struct produit {
    int code_produit;
    char nom_produit[50];
    float prix_unitaire;
    int Quantite;
    int nomberProduit;

};

struct stock {
    int nomberProduits;
    produit produits
    bool ajoute ;
};

struct client {
    int code_client;
    char nom_client[50];
    char adresse[100];
    char ville[50];
    char code_postal[10];

};
struct clients{
    int nb_clients;
    client client;
};

void saisirProduit (produit p, stock s ){

    if(s.ajoute == 1 ){
        printf("Entrer code produit : ");
        scanf("%d", &produit.code_produit);

        printf("Entrer nom produit :");
        scanf("%s", &produit.nom_produit);

        printf("Entrer prix unitaire :");
        scanf("%d", &produit.prix_unitaire);

        printf("Entre la Quantitè de produit");
        scanf("%d", &produit.Quantite);
    }else{
        printf("stock est sature");
    }
}

int modifierPrixProduit(produit p ,code , prix){

    for( i = 0 ; i < stock.nomberProduit ; i++){

        if(p.code_produit == code){

            p.prix_unitaire = prix;

        }
    }

}

int modifierNomProduit(produit p ,code , nom){

    for( i = 0 ; i < stock.nomberProduit ; i++){

        if(p.code_produit == code){

            p.nom_produit = nom;

        }
    }

}

int rechercheProduit(produit p , nomProduit){

    for(int i = 0 ; i < p.nomberProduit ; i++){

        if(strcmp(p.nom_produit[i],nomProduit) = 0)
            return 1;

    }

    return 0;
}

int suprimeProduit(struct produit p[],stock ,char nomProduit[]){

    int index_produit = -1;
    struct produit nouveau_produits[100];
    int nouveau_nb_produits = 0;


    for(int i = 0 ; i < stock.nomberProduits ; i++){

        if(strcmp(p.nom_produit[i],nomProduit) = 0 )
            index_produit = i;

    }

    if(index_produit != -1)
    {

        for(int i = 0 ; i <index_produit ; i++){

            nouveau_produits[nouveau_nb_produits] = p[i];
            nouveau_nb_produits++;

        }

        for(int i = index_produit+1 ; i < p.nomberProduit ; i++){

            nouveau_produits[nouveau_nb_produits] = p[i];
            nouveau_nb_produits++;
        }

        for(int i = 0 ; i < nouveau_nb_produits;i++){

            p[i] = nouveau_produits[i];

        }
        stock.nomberProduits = stock.nomberProduits - 1;

        printf("produit supprime avec succés.\n");
    }else{
        printf("Produit non trouve.\n");
    }

}

int montantTotal(prix,nb){

        return prix * nb;

}

int cherchePrixProduit(struct produit p, stock, int code){

    for( i = 0 ; i < stock.nomberProduit ; i++){

        if(p.code_produit == code){
            return p.prix_unitaire;
        }
    }
    return 0;

}

int ajoutefacture( facture f , client){

    printf("Entrez le numéro dela facture : ");
    scanf("%d", &f.num_facture);

    printf("Entrez le nom du client : ");
    scanf("%s", &f.date_facture);

    printf("Entrez  code de produit: ");
    code = scanf("%d", &f.produits.code_produit);

    printf("Entrez  nombes de produits: ");
     nb = scanf("%d", &f.nb_produits);

    f.montant_total += montantTotal(cherche_produit(produit, stock , code),nb);

    printf("Entrez  code de produit: ");
    scanf("%d", &f.montant_total);


}



void rechercherFacture(struct facture f, int nbFactures) {
    int numFacture;
    int i;
    int trouve = 0;

    printf("Entrez le numéro de la facture à rechercher : ");
    scanf("%d", &numFacture);

    for (i = 0; i < nbFactures; i++) {
        if (f[i].num_facture == numFacture) {
            printf("Facture trouvée : \n");
            printf("Numéro de facture : %d\n", f[i].num_facture);
            printf("Nom du client : %s\n", f[i].clients.nom_client);
            printf("Montant de la facture : %.2f\n", f[i].montant_total);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Aucune facture n'a été trouvée avec le numéro %d.\n", numFacture);
    }
}

void ajouter_client(clients[]) {
    struct client nouveau_client;

    printf("\nCode client : ");
    scanf("%d", &nouveau_client.code_client);
    printf("\nNom client : ");
    scanf("%s", &nouveau_client.nom_client);
    printf("\nAdresse : ");
    scanf("%s", &nouveau_client.adresse);
    printf("\nVille : ");
    scanf("%s", &nouveau_client.ville);
    printf("\nCode postal : ");
    scanf("%s", &nouveau_client.code_postal);

    clients[nb_clients] = nouveau_client;
    clients.nb_clients++;

}

int recherClient(clients ,char nomClient[]){

    for(int i = 0 ; i < clients.nb_clients ; i++){

        if(strcmp(clients.client.nom_client[i],nomClient) = 0)
            return 1;

    }

    return 0;

}


int suprimeClient(struct clients c,char nomClient[]){

    int index_client = -1;
    struct nouveau_clients[100];
    int nouveau_nb_clients = 0;


    for(int i = 0 ; i < c.nb_clients ; i++){

        if(strcmp(c.nom_client[i],nomClient) = 0 )
            index_client = i;

    }

    if(index_client != -1)
    {

        for(int i = 0 ; i <index_client ; i++){

            nouveau_clients[nouveau_nb_clients] = c.client[i];
            nouveau_nb_clients++;

        }

        for(int i = index_client+1 ; i < c.nb_clients ; i++){

            nouveau_produits[nouveau_nb_produits] = p[i];
            nouveau_nb_produits++;
        }

        for(int i = 0 ; i < nouveau_nb_clients;i++){

            c[i] = nouveau_client[i];

        }
        c.nb_clients = c.nb_clients - 1;

        printf("client supprime avec succés.\n");
    }else{
        printf("client non trouve.\n");
    }

}
void menu(){

    f = fopen("cleints.txt","a");

    int n = 0;
    printf("Donne le nombre de personnes : ");
    scanf("%d", &n);

    struct client p;

    for (int i = 0; i < n; i++) {
        printf("client %d \n",i+1);
        fprintf(f,"client:%d \n",i+1);

        printf("code : \n");
        scanf("%s", p.);
        fprintf(f, "code : %s \n", p.nom);

        printf("Prenom : \n");
        scanf("%s", p.prenom);
        fprintf(f, "Prenom : %s \n", p.prenom);

        printf("Age : ");
        scanf("%d", &p.age);
        fprintf(f, "Age : %d \n", p.age);
    }

}

