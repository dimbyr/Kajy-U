# Structures de données avancées

## Listes chaînées

### Exercices
1. Implémentez une liste chaînée simple en langage C. Ajoutez des fonctions pour insérer, supprimer, et parcourir la liste.
2. Écrivez une fonction qui inverse une liste chaînée. Testez-la avec plusieurs listes de différentes tailles.
3. Implémentez une liste chaînée circulaire avec une fonction pour détecter des boucles.
4. Ajoutez une fonction à votre liste chaînée qui trie les éléments par ordre croissant.
5. Implémentez une liste chaînée double avec des pointeurs vers l'avant et l'arrière. Ajoutez des fonctions pour insérer et supprimer des éléments à partir des deux extrémités.

### MCQ Quizzes
1. Quel est le principal avantage d'une liste chaînée par rapport à un tableau dynamique?
   - [ ] Moins de mémoire utilisée
   - [x] Insertion et suppression faciles
   - [ ] Plus rapide pour les opérations de recherche
   - [ ] Stockage de types de données variés

2. Que se passe-t-il lorsque vous supprimez un élément au milieu d'une liste chaînée?
   - [ ] Tous les éléments doivent être réorganisés
   - [x] Les pointeurs de l'élément précédent doivent être mis à jour
   - [ ] La liste se réorganise automatiquement
   - [ ] L'opération n'est pas possible

3. Quelle est la différence entre une liste chaînée simple et une liste chaînée double?
   - [ ] Une liste chaînée simple utilise moins de mémoire
   - [x] Une liste chaînée double a des pointeurs vers l'avant et l'arrière
   - [ ] Une liste chaînée double ne peut pas avoir de boucles
   - [ ] Les deux sont identiques

4. Comment détecter une boucle dans une liste chaînée circulaire?
   - [ ] En parcourant la liste jusqu'à ce qu'elle atteigne la fin
   - [x] En utilisant deux pointeurs, un rapide et un lent
   - [ ] En comptant le nombre d'éléments
   - [ ] Aucune de ces réponses

5. Quelle opération prend le plus de temps dans une liste chaînée simple?
   - [ ] Insertion
   - [ ] Suppression
   - [ ] Parcours
   - [x] Recherche

---

## Piles

### Exercices
1. Implémentez une pile simple en langage C. Ajoutez des fonctions pour empiler (push) et dépiler (pop).
2. Écrivez une fonction qui utilise une pile pour inverser une chaîne de caractères.
3. Utilisez une pile pour convertir une expression infixe en expression postfixe (notation polonaise inverse).
4. Implémentez une pile qui peut suivre le minimum actuel en tout temps.
5. Créez une fonction qui utilise une pile pour vérifier la validité des parenthèses dans une expression.

### MCQ Quizzes
1. Quelle est la caractéristique principale d'une pile?
   - [ ] First-In-First-Out (FIFO)
   - [x] Last-In-First-Out (LIFO)
   - [ ] Peut contenir des éléments de différentes tailles
   - [ ] Accès aléatoire aux éléments

2. Que se passe-t-il lorsqu'une pile est pleine et qu'on essaie d'empiler un élément?
   - [ ] La pile s'étend automatiquement
   - [x] L'opération échoue avec une erreur de débordement
   - [ ] L'élément est inséré au bas de la pile
   - [ ] La pile supprime automatiquement un élément plus ancien

3. Quelle opération de pile renvoie le dernier élément sans le retirer?
   - [x] Peek
   - [ ] Push
   - [ ] Pop
   - [ ] Unpeek

4. Comment utiliser une pile pour résoudre un problème de correspondance de parenthèses?
   - [ ] En comptant le nombre total de parenthèses
   - [x] En utilisant la pile pour conserver les parenthèses ouvertes et en les faisant correspondre aux fermetures
   - [ ] En utilisant deux piles, une pour chaque type de parenthèse
   - [ ] Aucune de ces réponses

5. Quelle structure de données est couramment implémentée à l'aide d'une pile?
   - [ ] Liste chaînée
   - [ ] Arbre binaire
   - [x] Arbre syntaxique abstrait
   - [ ] Tableau dynamique

---

## Files

### Exercices
1. Implémentez une file simple avec des opérations d'enfilage (enqueue) et de défilage (dequeue).
2. Utilisez une file pour implémenter une structure de données FIFO pour un système de file d'attente.
3. Créez une file circulaire pour utiliser l'espace de manière efficace. 
4. Implémentez un système de file d'attente prioritaire avec des niveaux de priorité.
5. Utilisez une file pour implémenter un algorithme de traversée de graphe en largeur (BFS).

### MCQ Quizzes
1. Quelle est la caractéristique principale d'une file?
   - [x] First-In-First-Out (FIFO)
   - [ ] Last-In-First-Out (LIFO)
   - [ ] Peut contenir des éléments de différentes tailles
   - [ ] Accès aléatoire aux éléments

2. Comment fonctionne une file circulaire?
   - [ ] Elle se réorganise automatiquement pour maintenir l'ordre
   - [x] Elle se referme sur elle-même lorsque la fin est atteinte
   - [ ] Elle a des pointeurs vers l'avant et l'arrière
   - [ ] Elle est constituée de multiples files

3. Quelle opération est la plus longue à effectuer dans une file?
   - [x] Défilage
   - [ ] Enfilage
   - [ ] Recherche
   - [ ] Affichage

4. Pourquoi une file est-elle idéale pour un système de file d'attente?
   - [x] Parce qu'elle respecte l'ordre d'arrivée
   - [ ] Parce qu'elle a une faible empreinte mémoire
   - [ ] Parce qu'elle peut être étendue facilement
   - [ ] Parce qu'elle est plus rapide qu'une pile

5. Quelle structure de données utilise une file pour son algorithme de traversée?
   - [ ] Arbre binaire
   - [ ] Liste chaînée
   - [ ] Tableau dynamique
   - [x] Graphe (avec traversée en largeur)

