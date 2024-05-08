# Exercises and Answers: Complexité algorithmique

## Exercise 1: Analyse de la complexité
1. Quelle est la complexité temporelle des opérations suivantes ?
   - a. Parcourir un tableau d'entiers de longueur `n`.
   - b. Multiplier deux matrices de taille `n x n`.
   - c. Effectuer une recherche binaire sur un tableau trié.

**Answer:**
   - a. La complexité temporelle est `O(n)`, car chaque élément du tableau est parcouru une fois.
   - b. La complexité temporelle est `O(n^3)`, car chaque entrée du résultat nécessite une somme de `n` produits.
   - c. La complexité temporelle est `O(log n)`, car chaque étape divise l'espace de recherche par deux.

## Exercise 2: Boucles imbriquées
1. Quelle est la complexité temporelle du code suivant ?
```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf("%d ", i * j);
    }
}
```
2. Comment pouvez-vous améliorer cet algorithme pour réduire sa complexité ?

**Answer:**
   - 1. La complexité temporelle est `O(n^2)`, car il y a deux boucles imbriquées, chacune avec `n` itérations.
   - 2. Pour réduire la complexité, vous pouvez utiliser des optimisations telles que l'élimination de boucles inutiles ou le recours à des techniques de pré-calcul.

## Exercise 3: Guidage pour analyse de code
1. Analysez le code suivant pour déterminer sa complexité temporelle :
```c
void operationSurTableau(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * 2;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] + 1;
    }
}
```
   - a. Quelle est la complexité de cette opération ?
   - b. Pourquoi cette complexité est-elle ainsi ?

**Answer:**
   - a. La complexité temporelle est `O(n)`, car chaque boucle parcourt le tableau une fois.
   - b. Les deux boucles sont séquentielles, chacune effectuant `n` opérations. Le temps d'exécution est proportionnel à la taille du tableau.

## Exercise 4: Comprendre les notations de complexité
1. Expliquez ce que signifie `O(n log n)`.
2. Donnez un exemple d'algorithme qui a une complexité de `O(n log n)` et expliquez pourquoi.

**Answer:**
   - 1. `O(n log n)` signifie que le temps d'exécution augmente de manière logarithmique par rapport à la taille de l'entrée, généralement en raison de divisions successives.
   - 2. Un exemple est le tri rapide (QuickSort), qui divise l'espace de recherche avec des appels récursifs. Le `log n` vient du nombre de fois où le problème est divisé, tandis que `n` représente le nombre total d'opérations.

## Exercise 5: Application des concepts de complexité
1. Quel est le type de complexité associé aux opérations suivantes ?
   - a. Additionner deux entiers.
   - b. Additionner les éléments d'un tableau de longueur `n`.
   - c. Trouver un élément dans une liste chaînée de longueur `n`.
   - d. Effectuer un tri par insertion sur un tableau de longueur `n`.

**Answer:**
   - a. `O(1)`, car l'opération prend un temps constant.
   - b. `O(n)`, car chaque élément est additionné une fois.
   - c. `O(n)`, car il faut parcourir toute la liste pour trouver l'élément.
   - d. `O(n^2)`, car le tri par insertion utilise des boucles imbriquées avec un nombre quadratique d'opérations.

