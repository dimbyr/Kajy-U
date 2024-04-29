#include <stdio.h>
#include <stdlib.h>

typedef struct NoeudFile {
    int donnees;
    struct NoeudFile* suivant;
} NoeudFile;

typedef struct File {
    NoeudFile* avant;
    NoeudFile* arriere;
} File;

// Créer une file vide
File* creerFile() {
    File* file = (File*)malloc(sizeof(File));
    if (file == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return NULL;
    }
    file->avant = NULL;
    file->arriere = NULL;
    return file;
}

// Enfiler un élément dans la file (ajout à la fin)
void enfile(File* file, int donnees) {
    NoeudFile* nouveau_noeud = (NoeudFile*)malloc(sizeof(NoeudFile));
    if (nouveau_noeud == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return;
    }
    nouveau_noeud->donnees = donnees;
    nouveau_noeud->suivant = NULL;
    if (file->arriere == NULL) {
        file->avant = file->arriere = nouveau_noeud;  // La file était vide
    } else {
        file->arriere->suivant = nouveau_noeud;  // Ajout à l'arrière
        file->arriere = nouveau_noeud;
    }
}

// Défiler un élément de la file (retrait du début)
int defile(File* file) {
    if (file->avant == NULL) {
        return -1;  // La file est vide
    }
    NoeudFile* temp = file->avant;
    int donnees = temp->donnees;
    file->avant = file->avant->suivant;
    if (file->avant == NULL) {
        file->arriere = NULL;  // La file est vide après le défilement
    }
    free(temp);
    return donnees;
}

// Fonction pour vérifier si la file est vide
int estVide(File* file) {
    return file->avant == NULL;
}

// Libération de la file
void libererFile(File* file) {
    while (!estVide(file)) {
        defile(file);  // Défiler jusqu'à ce que la file soit vide
    }
    free(file);  // Libérer la structure de la file
}

// Programme principal pour tester les opérations sur la file
int main() {
    // Créer une file
    File* file = creerFile();

    // Enfiler des éléments
    enfile(file, 10);
    enfile(file, 20);
    enfile(file, 30);

    // Afficher les éléments défilés
    printf("Défilé: %d\n", defile(file));
    printf("Défilé: %d\n", defile(file));

    // Vérifier si la file est vide
    if (estVide(file)) {
        printf("La file est vide\n");
    } else {
        printf("La file n'est pas vide\n");
    }

    // Libérer la file
    libererFile(file);

    return 0;
}
