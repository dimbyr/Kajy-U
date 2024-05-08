
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

Below are the implementations and answers for the exercises from the "Algorithmes de tri et de recherche" chapter, including code snippets for sorting and searching algorithms and tests with various edge cases.

```markdown
# Exercices et Réponses: Algorithmes de tri et de recherche

## Tri

### 1. Pour chacun des algorithmes de tri cités dans ce chapitre :
#### a. Implémentez l'algorithme en C.
- Exemple de tri à bulles :

```c
#include <stdio.h>

void tri_a_bulles(int arr[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

#### b. Testez votre code avec les cas suivants :
##### i. Un tableau vide.
- Le programme doit simplement retourner le tableau vide sans erreurs.

```c
#include <stdio.h>

int main() {
    int tableau[0] = {}; // Tableau vide
    tri_a_bulles(tableau, 0); // Ne devrait pas planter
    
    return 0;
}
```

##### ii. Un tableau contenant un seul élément.
- Le programme doit retourner le même tableau sans modification.

```c
#include <stdio.h>

int main() {
    int tableau[1] = {42}; // Tableau avec un seul élément
    tri_a_bulles(tableau, 1); // Pas de modification attendue
    
    printf("Tableau: %d\n", tableau[0]);

    return 0;
}
```

##### iii. Un tableau déjà trié.
- L'algorithme de tri doit effectuer un minimum d'opérations.

```c
#include <stdio.h>

int main() {
    int tableau[5] = {1, 2, 3, 4, 5}; // Déjà trié
    tri_a_bulles(tableau, 5); // Devrait effectuer peu de modifications
    
    printf("Tableau trié: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
```

##### iv. Le tableau [9, 1, 9, 0, 2, 6, 6, 5, 3, 4, 7].
- Après tri à bulles, le tableau devrait être [0, 1, 2, 3, 4, 5, 6, 6, 7, 9, 9].

```c
#include <stdio.h>

int main() {
    int tableau[11] = {9, 1, 9, 0, 2, 6, 6, 5, 3, 4, 7};
    tri_a_bulles(tableau, 11);
    
    printf("Tableau trié: ");
    for (int i = 0; i < 11; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
```

## Recherche

### 2. Pour chacun des algorithmes de recherche cités dans ce chapitre :
#### a. Implémentez l'algorithme en C.
- Exemple de recherche linéaire :

```c
#include <stdio.h>

int recherche_lineaire(int arr[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (arr[i] == valeur) {
            return i; // Index de l'élément trouvé
        }
    }
    return -1; // Élément non trouvé
}
```

#### b. Testez votre code en cherchant les éléments 8, 1, et 0 dans le tableau [9, 1, 9, 0, 2, 6, 6, 5, 3, 4, 7].
- Résultats attendus :
  - 8 n'est pas dans le tableau.
  - 1 est à l'index 1.
  - 0 est à l'index 3.

```c
#include <stdio.h>

int main() {
    int tableau[11] = {9, 1, 9, 0, 2, 6, 6, 5, 3, 4, 7};
    
    printf("Recherche de 8: %d\n", recherche_lineaire(tableau, 11, 8));
    printf("Recherche de 1: %d\n", recherche_lineaire(tableau, 11, 1));
    printf("Recherche de 0: %d\n", recherche_lineaire(tableau, 11, 0));

    return 0;
}
```

#### c. Lequel de ces algorithmes n'est pas applicable au tableau précédent ? Pourquoi ?
- Réponse : La recherche binaire ne peut pas être appliquée au tableau précédent, car le tableau n'est pas trié.

### 3. Testez votre implémentation de la recherche binaire en cherchant les éléments 0, 2, 7 et 9 dans le tableau [0, 1, 4, 4, 4, 5, 6, 7, 9, 9].
- Résultats attendus :
  - 0 est à l'index 0.
  - 2 n'est pas dans le tableau.
  - 7 est à l'index 7.
  - 9 se trouve à l'index 8 ou 9.

```c
#include <stdio.h>

int recherche_binaire(int arr[], int taille, int valeur) {
    int gauche = 0;
    int droite = taille - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;
        if (arr[milieu] == valeur) {
            return milieu;
        } else if (arr[milieu] < valeur) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }
    return -1;
}

int main() {
    int tableau[10] = [0, 1, 4, 4, 4, 5, 6, 7, 9, 9];
    
    printf("Recherche de 0: %d\n", recherche_binaire(tableau, 10, 0));
    printf("Recherche de 2: %d\n", recherche_binaire(tableau, 10, 2));
    printf("Recherche de 7: %d\n", recherche_binaire(tableau, 10, 7));
    printf("Recherche de 9: %d\n", recherche_binaire(tableau, 10, 9));

    return 0;
}
```


