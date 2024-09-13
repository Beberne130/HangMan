### README - Jeu 2048 Simplifié en C

---

## **Présentation générale**

Ce projet est une version simplifiée et en mode texte du jeu de réflexion 2048, développée en langage C. Le but du jeu est de fusionner des tuiles numérotées sur une grille de 4x4 pour atteindre la valeur 2048. À chaque tour, le joueur peut déplacer les tuiles dans quatre directions (haut, bas, gauche, droite), et les tuiles de même valeur fusionnent lorsqu'elles se rencontrent.

---

## **Fonctionnalités**

- **Grille de jeu** : Une grille de 4x4 cases qui affiche des tuiles numérotées ou vides.
- **Déplacements** : Le joueur peut déplacer les tuiles dans quatre directions (`w` = haut, `a` = gauche, `s` = bas, `d` = droite).
- **Fusion** : Les tuiles de même valeur fusionnent en une seule tuile avec une valeur double lorsqu'elles se rencontrent.
- **Nouvelle tuile** : Après chaque déplacement valide, une nouvelle tuile de valeur 2 ou 4 apparaît dans une case vide.
- **Condition de victoire** : Le jeu est gagné lorsque le joueur atteint une tuile de valeur 2048.
- **Condition de défaite** : Le jeu se termine si la grille est pleine et qu'il n'est plus possible de fusionner de tuiles.

## **Règles du jeu**

1. **Déplacement des tuiles** : Utilisez les touches suivantes pour déplacer les tuiles :
   - `z` : Haut
   - `q` : Gauche
   - `s` : Bas
   - `d` : Droite

2. **Fusion** : Lorsque deux tuiles avec la même valeur se rencontrent après un déplacement, elles fusionnent pour former une tuile de valeur double.

3. **Nouvelle tuile** : Après chaque déplacement, une nouvelle tuile de valeur 2 ou 4 est ajoutée à une case vide aléatoire.

4. **Victoire** : Le joueur gagne s’il parvient à créer une tuile de valeur 2048.

5. **Défaite** : Le jeu est perdu lorsque la grille est pleine et qu'il n'y a plus de mouvements valides.

---

## **Exemple d'affichage**

```
2048 en C
Score : 0
Grille :
---------------------
 2     0     0     2
 0     4     0     0
 0     0     8     0
 16    0     0     0
---------------------
Entrez votre mouvement (w:haut, a:gauche, s:bas, d:droite) :
```

---

## **Évolutions possibles**

- **Sauvegarde de la partie** : Ajouter la possibilité de sauvegarder la partie en cours et de la reprendre plus tard.
- **Interface graphique** : Implémenter une interface graphique simple à l’aide de bibliothèques comme SDL ou ncurses.
- **Système de score** : Ajouter un affichage des scores basés sur la somme des tuiles fusionnées et un système de classement.

---

## **Contributeurs**

- Clément Bernard

---
