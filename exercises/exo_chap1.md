Of course! Here are the exercises with their corresponding answers:

### 1. Types de données

#### Exercises:
1. Écrivez un programme C pour déclarer une variable de chaque type de données de base et initialisez-les avec des valeurs.

```c
#include <stdio.h>

int main() {
    int entier = 10;
    float flottant = 3.14;
    double doublePrecision = 12345.6789;
    char caractere = 'A';

    printf("Entier: %d\n", entier);
    printf("Flottant: %f\n", flottant);
    printf("Double: %lf\n", doublePrecision);
    printf("Caractere: %c\n", caractere);

    return 0;
}
```
2. Déclarez un tableau d'entiers de taille 10 et initialisez-le avec des valeurs de votre choix. Affichez ensuite ces valeurs à l'écran.

```c
#include <stdio.h>

int main() {
    int tableau[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("Tableau d'entiers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
```
3. Créez une structure `Personne` avec des champs pour le nom, l'âge et la taille. Déclarez une variable de type `Personne` et initialisez-la avec des valeurs fictives. Affichez ensuite ces valeurs à l'écran.

```c
#include <stdio.h>

struct Personne {
    char nom[50];
    int age;
    float taille;
};

int main() {
    struct Personne p = {"Alice", 25, 1.75};

    printf("Nom: %s\n", p.nom);
    printf("Age: %d\n", p.age);
    printf("Taille: %.2f\n", p.taille);

    return 0;
}
```
4. Écrivez une fonction en C pour inverser une chaîne de caractères donnée.

```c
#include <stdio.h>
#include <string.h>

void inverseChaine(char *chaine) {
    int longueur = strlen(chaine);
    for (int i = 0; i < longueur / 2; i++) {
        char temp = chaine[i];
        chaine[i] = chaine[longueur - i - 1];
        chaine[longueur - i - 1] = temp;
    }
}

int main() {
    char chaine[] = "Bonjour";
    printf("Avant inversion: %s\n", chaine);
    inverseChaine(chaine);
    printf("Après inversion: %s\n", chaine);
    return 0;
}
```
5. Écrivez une fonction en C pour trier un tableau d'entiers en utilisant l'algorithme de tri à bulles.

```c
#include <stdio.h>

void triBulles(int tableau[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                // Échange des éléments
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[] = {64, 34, 25, 12, 22, 11, 90};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    triBulles(tableau, taille);
    printf("Tableau trié: ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}
```

#### MCQs:
1. Quel type de données est utilisé pour stocker des nombres entiers en C?
   - A) float
   - B) int
   - C) char
   - D) double
   - **Answer: B**

2. Comment déclarez-vous un tableau d'entiers de taille 5 en C?
   - A) int array[5];
   - B) array int[5];
   - C) int[5] array;
   - D) int array[];
   - **Answer: A**

3. Quelle fonction C est utilisée pour copier une chaîne de caractères dans une autre?
   - A) strcat()
   - B) strcpy()
   - C) strcmp()
   - D) strncpy()
   - **Answer: B**

4. Que signifie le terme "pointeur" en langage C?
   - A) Un type de données pour stocker des nombres entiers.
   - B) Un opérateur pour accéder aux éléments d'un tableau.
   - C) Une variable qui stocke l'adresse mémoire d'une autre variable.
   - D) Un type de données pour représenter du texte.
   - **Answer: C**

5. Quelle est la fonction de l'algorithme de tri à bulles?
   - A) Tri d'un tableau de nombres en ordre croissant.
   - B) Tri d'une chaîne de caractères par ordre alphabétique.
   - C) Tri d'une liste chaînée.
   - D) Tri d'un tableau en choisissant un pivot.
   - **Answer: A**

### 2. Types de données de base

#### Exercises:
1. Écrivez un programme C pour convertir un nombre entier en binaire.
2. Écrivez une fonction en C pour calculer la somme des chiffres d'un nombre entier.
3. Déclarez une variable de type `char` et utilisez-la pour stocker une lettre majuscule. Ensuite, utilisez une opération pour convertir cette lettre en minuscule.
4. Écrivez un programme C pour vérifier si un nombre donné est premier ou non.
5. Écrivez une fonction récursive en C pour calculer le factoriel d'un nombre entier.

#### MCQs:
1. Quel est le résultat de l'opération `sizeof(char)` en langage C?
   - A) 1
   - B) 2
   - C) 4
   - D) Dépend de l'implémentation du compilateur
   - **Answer: A**

2. Comment déclarez-vous une variable `pi` de type `float` en C et l'initialisez-vous à 3.14?
   - A) float pi = 3.14;
   - B) pi float = 3.14;
   - C) pi = 3.14;
   - D) float pi == 3.14

;
   - **Answer: A**

3. Quelle est la valeur maximale que peut stocker une variable de type `int` en C sur un système 32 bits?
   - A) 32767
   - B) 2147483647
   - C) 65535
   - D) 4294967295
   - **Answer: B**

4. Quelle opération permet de trouver le reste de la division de 10 par 3 en C?
   - A) 10 % 3
   - B) mod(10, 3)
   - C) remainder(10, 3)
   - D) divide(10, 3)
   - **Answer: A**

5. Quelle est la sortie du programme suivant en langage C?

   ```c
   #include <stdio.h>
   int main() {
       int x = 5;
       printf("%d", x++);
       return 0;
   }
   ```
   - A) 5
   - B) 6
   - C) 4
   - D) 0
   - **Answer: A**

### 3. Types de données dérivés

#### Exercises:
1. Écrivez une fonction en C pour concaténer deux chaînes de caractères données.
2. Déclarez un tableau de structures `Etudiant` avec des champs pour le nom, l'âge et la moyenne. Initialisez-le avec des valeurs fictives et affichez ensuite ces valeurs à l'écran.
3. Écrivez une fonction en C pour ajouter un élément à une liste chaînée.
4. Implémentez une file (queue) en utilisant des listes chaînées en C.
5. Écrivez une fonction en C pour supprimer un élément d'un arbre binaire de recherche.

#### MCQs:
1. Quelle est la différence entre une structure et une union en langage C?
   - A) Les structures permettent de stocker des valeurs de types différents, tandis que les unions permettent de stocker des valeurs du même type.
   - B) Les structures permettent de stocker des valeurs du même type, tandis que les unions permettent de stocker des
   
   

## Quiz: Types de données

### Question 1: Types de données de base
Quels sont les types de données de base couramment utilisés en C ?
a) `int`, `float`, `double`, `char`  
b) `int`, `float`, `string`, `object`  
c) `boolean`, `double`, `string`, `array`  
d) `int`, `float`, `double`, `list`  

**Réponse**: a) `int`, `float`, `double`, `char`

### Question 2: Déclarations de variables
Quelle est la déclaration correcte d'un entier, d'un flottant et d'un caractère ?
a) `int nombre; float poids; char initiale;`  
b) `integer nombre; float poids; char initiale;`  
c) `int nombre; double poids; character initiale;`  
d) `integer nombre; float poids; character initiale;`  

**Réponse**: a) `int nombre; float poids; char initiale;`

### Question 3: Tableaux
Quel est le code correct pour déclarer un tableau d'entiers de taille 5 ?
a) `int tableau[5];`  
b) `array tableau[5];`  
c) `int tableau[4];`  
d) `array tableau[4];`  

**Réponse**: a) `int tableau[5];`

### Question 4: Structures
Quelle est la meilleure explication d'une structure en C ?
a) Un type de données dérivé qui peut contenir des variables de différents types  
b) Une collection d'entiers  
c) Un tableau de structures  
d) Une collection de chaînes de caractères  

**Réponse**: a) Un type de données dérivé qui peut contenir des variables de différents types

### Question 5: Utilisation des structures
Quel code crée et initialise une structure appelée `Personne` avec les champs `nom`, `âge`, et `taille` ?
a) 
```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};

struct Personne p;
strcpy(p.nom, "John Doe");
p.age = 30;
p.taille = 1.75;
```
b) 
```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};

struct Personne p = { "John Doe", 30, 1.75 };
```
c) 
```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};

struct Personne p = { 30, "John Doe", 1.75 };
```
d) 
```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};

struct Personne p = { "John Doe", 30 };
```

**Réponse**: b)

### Question 6: Typedef
Quelle est la fonction du mot-clé `typedef` en C ?
a) Créer des alias pour des types de données existants  
b) Créer des structures  
c) Déclarer des fonctions  
d) Créer des tableaux  

**Réponse**: a) Créer des alias pour des types de données existants

### Question 7: Chaînes de caractères
Quelle est la meilleure description des chaînes de caractères en C ?
a) Un tableau de caractères terminé par un caractère nul  
b) Une chaîne de caractères terminée par un espace  
c) Un tableau d'entiers  
d) Une collection de caractères  

**Réponse**: a) Un tableau de caractères terminé par un caractère nul

### Question 8: Initialisation des pointeurs
Quelle est la façon correcte d'initialiser un pointeur vers un entier ?
a) 
```c
int a = 10;
int *ptr = &a;
```
b) 
```c
int a = 10;
int ptr = a;
```
c) 
```c
int a = 10;
int *ptr = a;
```
d) 
```c
int a = 10;
int ptr = &a;
```

**Réponse**: a)

### Question 9: Utilisation des pointeurs
Quel code modifie la valeur d'un entier à l'aide d'un pointeur ?
a) 
```c
int a = 10;
int *ptr = &a;
*ptr = 20;
```
b) 
```c
int a = 10;
int *ptr = a;
*ptr = 20;
```
c) 
```c
int a = 10;
int ptr = 20;
```
d) 
```c
int a = 10;
int *ptr = &a;
ptr = 20;
```

**Réponse**: a)

### Question 10: Déclaration de tableaux de structures
Quel code déclare un tableau de structures appelé `Personne` de taille 5 ?
a) 
```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};

struct Personne personnes[5];
```
b) 
```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};

struct Personne personnes(5);
```
c) 
```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};

struct Personne personnes[4];
```
d) 
```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};

struct Personne personnes;
```

**Réponse**: a)

