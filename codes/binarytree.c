#include <stdio.h>
#include <stdlib.h>

typedef struct NoeudArbre {
    int donnees;
    struct NoeudArbre* gauche;
    struct NoeudArbre* droite;
} NoeudArbre;

// Créer un nœud d'arbre
NoeudArbre* creerNoeud(int donnees) {
    NoeudArbre* nouveau_noeud = (NoeudArbre*)malloc(sizeof(NoeudArbre));
    if (nouveau_noeud == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return NULL;
    }
    nouveau_noeud->donnees = donnees;
    nouveau_noeud->gauche = NULL;
    nouveau_noeud->droite = NULL;
    return nouveau_noeud;
}

// Insérer un élément dans un arbre binaire
void inserer(NoeudArbre** racine, int donnees) {
    if (*racine == NULL) {
        *racine = creerNoeud(donnees);  // Créer le premier nœud
    } else {
        if (donnees < (*racine)->donnees) {
            inserer(&((*racine)->gauche), donnees);  // Aller à gauche
        } else {
            inserer(&((*racine)->droite), donnees);  // Aller à droite
        }
    }
}

// Fonction pour parcourir l'arbre en ordre
void parcoursEnOrdre(NoeudArbre* racine) {
    if (racine != NULL) {
        parcoursEnOrdre(racine->gauche);  // Parcourir à gauche
        printf("%d ", racine->donnees);  // Afficher le nœud
        parcoursEnOrdre(racine->droite);  // Parcourir à droite
    }
}

// Programme principal pour tester les opérations sur les arbres binaires
int main() {
    NoeudArbre* racine = NULL;  // Créer une racine vide

    // Insérer des éléments
    inserer(&racine, 50);
    inserer(&racine, 30);
    inserer(&racine, 70);
    inserer(&racine, 20);
    inserer(&racine, 40);
    inserer(&racine, 60);
    inserer(&racine, 80);

    printf("Parcours en ordre de l'arbre binaire: ");
    parcoursEnOrdre(racine);  // Afficher les nœuds dans l'ordre
    printf("\n");

    return 0;
}
