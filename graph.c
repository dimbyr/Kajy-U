#include <stdio.h>
#include <stdlib.h>

typedef struct Noeud {
	int donnees;
	struct Noeud* suivant;
} Noeud;

// Fonction d'insertion
void inserer(Noeud** tete, int nouvelles_donnees) {
	Noeud* nouveau_noeud = (Noeud*)malloc(sizeof(Noeud));
	if (nouveau_noeud == NULL) {
		printf("Erreur d'allocation mémoire\n");
		return;
	}
	nouveau_noeud->donnees = nouvelles_donnees;
	nouveau_noeud->suivant = *tete;
	*tete = nouveau_noeud;
}

// Fonction de suppression
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
		return; // Élément non trouvé
	}

	precedent->suivant = temp->suivant;
	free(temp);
}

// Fonction d'affichage de la liste chaînée
void afficher(Noeud* tete) {
	while (tete != NULL) {
		printf("%d -> ", tete->donnees);
		tete = tete->suivant;
	}
	printf("NULL\n");
}

// Programme principal pour tester la liste chaînée
int main() {
	Noeud* tete = NULL;

	// Insertion de quelques éléments dans la liste chaînée
	inserer(&tete, 10);
	inserer(&tete, 20);
	inserer(&tete, 30);

	printf("Liste chaînée après insertion : ");
	afficher(tete);

	// Suppression d'un élément
	supprimer(&tete, 20);

	printf("Liste chaînée après suppression de 20 : ");
	afficher(tete);

	// Suppression d'un élément inexistant
	supprimer(&tete, 40);

	printf("Liste chaînée après tentative de suppression de 40 : ");
	afficher(tete);

	return 0;
}

