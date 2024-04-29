#include <stdio.h>
#include <stdlib.h>

typedef struct NoeudGraphe {
    int sommet;
    struct NoeudGraphe* suivant;
} NoeudGraphe;

typedef struct Graphe {
    int nombre_sommets;
    NoeudGraphe** listes_adj;
} Graphe;

// Créer un graphe
Graphe* creerGraphe(int nombre_sommets) {
    Graphe* graphe = (Graphe*)malloc(sizeof(Graphe));
    if (graphe == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return NULL;
    }
    graphe->nombre_sommets = nombre_sommets;
    graphe->listes_adj = (NoeudGraphe**)malloc(nombre_sommets * sizeof(NoeudGraphe*));
    if (graphe->listes_adj == NULL) {
        printf("Erreur d'allocation mémoire\n");
        free(graphe);
        return NULL;
    }
    for (int i = 0; i < nombre_sommets; i++) {
        graphe->listes_adj[i] = NULL;  // Initialiser chaque liste d'adjacence
    }
    return graphe;
}

// Ajouter une arête dans un graphe
void ajouterLien(Graphe* graphe, int source, int destination) {
    NoeudGraphe* nouveau_noeud = (NoeudGraphe*)malloc(sizeof(NoeudGraphe));
    if (nouveau_noeud == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return;
    }
    nouveau_noeud->sommet = destination;
    nouveau_noeud->suivant = graphe->listes_adj[source];
    graphe->listes_adj[source] = nouveau_noeud;

    // Pour les graphes non orientés, ajoutez la connexion inverse
    nouveau_noeud = (NoeudGraphe*)malloc(sizeof(NoeudGraphe));
    if (nouveau_noeud == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return;
    }
    nouveau_noeud->sommet = source;
    nouveau_noeud->suivant = graphe->listes_adj[destination];
    graphe->listes_adj[destination] = nouveau_noeud;
}

// Programme principal pour tester le graphe
int main() {
    Graphe* graphe = creerGraphe(5);  // Créer un graphe avec 5 sommets

    // Ajouter des arêtes entre les sommets
    ajouterLien(graphe, 0, 1);  // Lier le sommet 0 au sommet 1
    ajouterLien(graphe, 0, 4);  // Lier le sommet 0 au sommet 4
    ajouterLien(graphe, 1, 2);  // Lier le sommet 1 au sommet 2
    ajouterLien(graphe, 1, 3);  // Lier le sommet 1 au sommet 3
    ajouterLien(graphe, 2, 3);  // Lier le sommet 2 au sommet 3
    ajouterLien(graphe, 3, 4);  // Lier le sommet 3 au sommet 4

    // Afficher les listes d'adjacence pour chaque sommet
    for (int i = 0; i < graphe->nombre_sommets; i++) {
        printf("Liste d'adjacence du sommet %d: ", i);
        NoeudGraphe* courant = graphe->listes_adj[i];
        while (courant != NULL) {
            printf("%d ", courant->sommet);
            courant = courant->suivant;
        }
        printf("\n");
    }

    return 0;
}
