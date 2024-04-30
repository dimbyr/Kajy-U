
# Exercises and Answers: Algorithmes de tri et de recherche

## Exercise 1: Tri à bulles
1. Implémentez une fonction en langage C qui utilise le tri à bulles pour trier un tableau d'entiers.
2. Testez votre implémentation avec un tableau de 10 éléments. Donnez les résultats avant et après le tri.

**Answer:**
```c
#include <stdio.h>

// Fonction pour trier un tableau avec le tri à bulles
void tri_a_bulles(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10] = {9, 4, 6, 3, 1, 8, 2, 7, 5, 0};
    printf("Tableau avant le tri: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    tri_a_bulles(arr, 10);

    printf("Tableau après le tri: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

## Exercise 2: Tri par insertion
1. Implémentez une fonction qui utilise le tri par insertion pour trier un tableau d'entiers.
2. Testez votre implémentation avec un tableau de 10 éléments. Donnez les résultats avant et après le tri.

**Answer:**
```c
#include <stdio.h>

// Fonction pour trier un tableau avec le tri par insertion
void tri_par_insertion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int clef = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > clef) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = clef;
    }
}

int main() {
    int arr[10] = {9, 4, 6, 3, 1, 8, 2, 7, 5, 0};
    printf("Tableau avant le tri: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    tri_par_insertion(arr, 10);

    printf("Tableau après le tri: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

## Exercise 3: Recherche linéaire
1. Écrivez une fonction en C qui effectue une recherche linéaire dans un tableau d'entiers. La fonction doit renvoyer l'indice de l'élément trouvé ou -1 s'il n'est pas dans le tableau.
2. Testez la fonction avec un tableau d'exemple et plusieurs valeurs à rechercher.

**Answer:**
```c
#include <stdio.h>

// Fonction de recherche linéaire
int recherche_lineaire(int arr[], int n, int valeur) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == valeur) {
            return i; // Renvoie l'indice de l'élément trouvé
        }
    }
    return -1; // Si l'élément n'est pas trouvé
}

int main() {
    int arr[10] = {9, 4, 6, 3, 1, 8, 2, 7, 5, 0};
    int a_rechercher = 6;

    int indice = recherche_lineaire(arr, 10, a_rechercher);
    if (indice != -1) {
        printf("Valeur %d trouvée à l'indice %d\n", a_rechercher, indice);
    } else {
        printf("Valeur %d non trouvée\n", a_rechercher);
    }

    return 0;
}
```

## Exercise 4: Recherche binaire
1. Écrivez une fonction en C qui effectue une recherche binaire dans un tableau trié d'entiers. La fonction doit renvoyer l'indice de l'élément trouvé ou -1 s'il n'est pas trouvé.
2. Testez la fonction avec un tableau trié d'exemple et plusieurs valeurs à rechercher.

**Answer:**
```c
#include <stdio.h>

// Fonction de recherche binaire
int recherche_binaire(int arr[], int n, int valeur) {
    int gauche = 0;
    int droite = n - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        if (arr[milieu] == valeur) {
            return milieu; // Renvoie l'indice de l'élément trouvé
        } else if (arr[milieu] < valeur) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }

    return -1; // Si l'élément n'est pas trouvé
}

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Tableau trié
    int a_rechercher = 5;

    int indice = recherche_binaire(arr, 10, a_rechercher);
    if (indice != -1) {
        printf("Valeur %d trouvée à l'indice %d\n", a_rechercher, indice);
    } else {
        printf("Valeur %d non trouvée\n", a_rechercher);
    }

    return 0;
}
```
