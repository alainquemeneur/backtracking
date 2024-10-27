# backtracking
Démontre l'algorithme du <a href="https://fr.wikipedia.org/wiki/Retour_sur_trace">backtracking</a> dans le problème des 8 dames

Il s'agit d'un algorithme classique en informatique, qui permet de résoudre des problèmes complexes en utilisant la récursivité.

Le code en langage C présenté ici résoud le problème consistant à poser 8 dames sur un échiquier de 64 cases sans qu'elles se prennent.

Compilé tel quel, le programme donne les 92 solutions à ce problème.

Pour s'arrêter à la première solution, il suffit de dé-commenter la ligne 30

Pour compiler sous Linux : 

gcc backtracking.c -o backtracking