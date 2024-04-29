#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pile {
    int taille;
    int sommet;
    int* elements;
} Pile;

// Fonction pour créer une pile
Pile* creerPile(int taille) {
    Pile* pile = (Pile*)malloc(sizeof(Pile));
    if (pile == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return NULL;
    }
    pile->taille = taille;
    pile->sommet = -1;
    pile->elements = (int*)malloc(taille * sizeof(int));
    if (pile->elements == NULL) {
        printf("Erreur d'allocation mémoire\n");
        free(pile);
        return NULL;
    }
    return pile;
}

// Fonction pour empiler un élément dans la pile
int empiler(Pile* pile, int valeur) {
    if (pile->sommet >= pile->taille - 1) {
        printf("Pile pleine\n");
        return -1;
    }
    pile->sommet++;
    pile->elements[pile->sommet] = valeur;
    return 0;
}

// Fonction pour dépiler un élément de la pile
int depiler(Pile* pile) {
    if (pile->sommet < 0) {
        printf("Pile vide\n");
        return -1;  // Indique que la pile est vide
    }
    int valeur = pile->elements[pile->sommet];
    pile->sommet--;
    return valeur;
}

// Fonction pour vérifier si la pile est vide
int estVide(Pile* pile) {
    return pile->sommet < 0;
}

// Fonction pour libérer la pile
void libererPile(Pile* pile) {
    free(pile->elements);
    free(pile);
}

// Programme principal pour tester la pile
int main() {
    // Créer une pile avec une taille de 10
    Pile* pile = creerPile(10);
    if (pile == NULL) {
        return 1;  // Erreur d'allocation mémoire
    }

    // Empiler quelques éléments
    empiler(pile, 10);
    empiler(pile, 20);
    empiler(pile, 30);

    // Dépiler et afficher
    printf("Élément dépilé: %d\n", depiler(pile));
    printf("Élément dépilé: %d\n", depiler(pile));

    // Vérifier si la pile est vide
    if (estVide(pile)) {
        printf("La pile est vide\n");
    } else {
        printf("La pile n'est pas vide\n");
    }

    // Libérer la pile
    libererPile(pile);

    return 0;
}
