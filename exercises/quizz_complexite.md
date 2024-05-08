
```
# Quizzes and Answers: Complexité algorithmique

## Quiz 1: Notation O
1. Quelle est la complexité temporelle de la fonction suivante?
```c
void afficherTableau(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
```
   - A) O(1)
   - B) O(log n)
   - C) O(n)
   - D) O(n^2)
   - **Réponse: C) O(n)**

2. La complexité de `O(log n)` se réfère à quel type d'opération?
   - A) Une opération qui divise l'espace de recherche par moitié.
   - B) Une opération qui traverse un tableau séquentiellement.
   - C) Une opération qui multiplie les éléments d'un tableau.
   - D) Une opération qui utilise des boucles imbriquées.
   - **Réponse: A) Une opération qui divise l'espace de recherche par moitié.**

## Quiz 2: Notations Ω et θ
1. Quelle est la signification de `Ω(n)`?
   - A) La complexité minimale que peut avoir un algorithme.
   - B) La complexité maximale que peut avoir un algorithme.
   - C) La complexité moyenne attendue.
   - D) Une complexité indéterminée.
   - **Réponse: A) La complexité minimale que peut avoir un algorithme.**

2. Que signifie `θ(n)`?
   - A) Une borne supérieure de complexité.
   - B) Une borne inférieure de complexité.
   - C) Une complexité moyenne attendue.
   - D) Un algorithme à complexité variable.
   - **Réponse: C) Une complexité moyenne attendue.**

## Quiz 3: Analyser le code
1. Quelle est la complexité du code suivant?
```c
void sommeTableau(int arr[], int n) {
    int somme = 0;
    for (int i = 0; i < n; i++) {
        somme += arr[i];
    }
    printf("La somme est: %d\n", somme);
}
```
   - A) O(1)
   - B) O(n)
   - C) O(log n)
   - D) O(n^2)
   - **Réponse: B) O(n)**

2. Que se passe-t-il lorsque la complexité d'un algorithme est `O(n^2)`?
   - A) Le temps d'exécution augmente de manière quadratique avec la taille de l'entrée.
   - B) Le temps d'exécution reste constant.
   - C) Le temps d'exécution augmente linéairement avec la taille de l'entrée.
   - D) Le temps d'exécution diminue avec la taille de l'entrée.
   - **Réponse: A) Le temps d'exécution augmente de manière quadratique avec la taille de l'entrée.**

## Quiz 4: Diversité des complexités
1. Quel type d'algorithme a une complexité `O(n^2)`?
   - A) Un algorithme avec des boucles imbriquées.
   - B) Un algorithme qui divise l'espace de recherche.
   - C) Un algorithme avec des opérations constantes.
   - D) Un algorithme avec des opérations logarithmiques.
   - **Réponse: A) Un algorithme avec des boucles imbriquées.**

2. Quelle est la complexité d'un algorithme qui utilise une boucle principale avec une sous-boucle qui parcourt la moitié de la taille d'entrée?
   - A) O(n)
   - B) O(log n)
   - C) O(n * log n)
   - D) O(n^2)
   - **Réponse: C) O(n * log n)**
