#include <stdio.h>
#include <stdlib.h>

typedef struct Noeud {
    int donnees;
    struct Noeud* suivant;
} Noeud;

// Insertion au début de la liste chaînée
void insererTete(Noeud** tete, int nouvelles_donnees) {
    Noeud* nouveau_noeud = (Noeud*)malloc(sizeof(Noeud));
    if (nouveau_noeud == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return;
    }
    nouveau_noeud->donnees = nouvelles_donnees;
    nouveau_noeud->suivant = *tete;
    *tete = nouveau_noeud;
}

// Insertion à une position spécifique
void insererMilieu(Noeud** tete, int nouvelles_donnees, int position) {
    if (position == 0) {
        insererTete(tete, nouvelles_donnees); // Insertion au début
        return;
    }

    Noeud* nouveau_noeud = (Noeud*)malloc(sizeof(Noeud));
    if (nouveau_noeud == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return;
    }
    nouveau_noeud->donnees = nouvelles_donnees;

    Noeud* temp = *tete;
    int count = 0;

    // Parcourir jusqu'à la position précédente
    while (temp != NULL && count < position - 1) {
        temp = temp->suivant;
        count++;
    }

    if (temp == NULL) {
        printf("Position hors limites\n");
        free(nouveau_noeud);
        return;
    }

    nouveau_noeud->suivant = temp->suivant;
    temp->suivant = nouveau_noeud;
}

// Suppression d'un nœud basé sur la clé
void supprimer(Noeud** tete, int cle) {
    Noeud* temp = *tete;
    Noeud* precedent = NULL;

    if (temp != NULL && temp->donnees == cle) {
        *tete = temp->suivant;
        free(temp);
        return;
    }

    while (temp != NULL && temp->donnees != cle) {
        precedent = temp;
        temp = temp->suivant;
    }

    if (temp == NULL) {
        return;
    }

    precedent->suivant = temp->suivant;
    free(temp); // Libérer la mémoire du nœud supprimé
}

// Suppression d'un nœud à une position spécifique
void supprimerPosition(Noeud** tete, int position) {
    if (position == 0) { // Suppression du premier nœud
        Noeud* temp = *tete;
        if (temp != NULL) {
            *tete = temp->suivant;
            free(temp);
        }
        return;
    }

    Noeud* temp = *tete;
    Noeud* precedent = NULL;
    int count = 0;

    // Parcourir jusqu'au nœud précédent la position donnée
    while (temp != NULL && count < position) {
        precedent = temp;
        temp = temp->suivant;
        count++;
    }

    if (temp == NULL) {
        printf("Position %d est hors limites.\n", position);
        return;
    }

    precedent->suivant = temp->suivant;
    free(temp); // Libérer la mémoire du nœud supprimé
}

// Fonction d'affichage de la liste chaînée
void afficher(Noeud* tete) {
    while (tete != NULL) {
        printf("%d -> ", tete->donnees);
        tete = tete->suivant;
    }
    printf("NULL\n");
}

// Fonction pour libérer toute la liste chaînée
void libererListe(Noeud* tete) {
    Noeud* temp;
    while (tete != NULL) {
        temp = tete;
        tete = tete->suivant;
        free(temp);
    }
}

// Programme principal pour tester la liste chaînée
int main() {
    Noeud* tete = NULL;

    // Insertion de quelques éléments
    insererTete(&tete, 10);
    insererTete(&tete, 20);
    insererTete(&tete, 30);

    printf("Liste chaînée après insertion : ");
    afficher(tete);

    // Insertion à une position spécifique
    insererMilieu(&tete, 25, 1); // Insertion à la deuxième position

    printf("Liste chaînée après insertion de 25 à la deuxième position : ");
    afficher(tete);

    // Suppression d'un élément par clé
    supprimer(&tete, 20);

    printf("Liste chaînée après suppression de 20 : ");
    afficher(tete);

    // Suppression d'un nœud à une position spécifique
    supprimerPosition(&tete, 1);

    printf("Liste chaînée après suppression à la deuxième position : ");
    afficher(tete);

    // Libération de la liste chaînée
    libererListe(tete);

    return 0;
}
