# 2048game
# Cahier des charges - Jeu 2048 Simplifié
**1. Présentation générale**
Le jeu 2048 est un jeu de réflexion et de logique où le joueur déplace des tuiles numérotées dans une grille, en les fusionnant lorsqu'elles ont la même valeur, dans le but d’atteindre une tuile portant la valeur 2048. Ce projet consiste à développer une version simplifiée et textuelle du jeu 2048 en C.

**2. Objectifs**
Créer un jeu 2048 en mode console avec des fonctionnalités de base.
Permettre au joueur de déplacer les tuiles dans différentes directions (haut, bas, gauche, droite).
Fusionner les tuiles lorsque deux tuiles de même valeur se rencontrent.
Ajouter une nouvelle tuile après chaque mouvement du joueur.
Implémenter les conditions de victoire (atteindre une tuile de 2048) et de défaite (impossibilité de réaliser d'autres mouvements).

**3. Fonctionnalités requises**
**3.1 Grille de jeu**
Taille de la grille : La grille doit être de 4x4.
Affichage : Chaque case de la grille doit afficher soit une valeur (2, 4, 8, etc.), soit être vide (indiquée par un 0 ou un symbole distinct).
**3.2 Mouvements**
Déplacements autorisés : Le joueur peut déplacer les tuiles dans quatre directions :
Haut
Bas
Gauche
Droite
Fusion des tuiles : Si deux tuiles ayant la même valeur se rencontrent après un déplacement, elles doivent fusionner en une seule tuile avec une valeur double.
Restrictions :
Le joueur ne peut pas déplacer les tuiles si toutes les cases dans la direction choisie sont déjà bloquées par des tuiles ou des bords.
Une tuile ne peut fusionner qu'une seule fois par déplacement.
**3.3 Apparition de nouvelles tuiles**
Après chaque déplacement valide, une nouvelle tuile apparaît dans une case vide aléatoire de la grille.
Valeur des nouvelles tuiles : Les nouvelles tuiles générées ont une valeur de 2 ou de 4 (généralement avec 90% de chances pour 2 et 10% pour 4).
**3.4 Conditions de victoire et de défaite**
Victoire : La partie se termine lorsque le joueur crée une tuile avec une valeur de 2048.
Défaite : La partie se termine lorsque la grille est entièrement remplie et qu'il n'est plus possible de réaliser un déplacement valide (c’est-à-dire qu'aucune fusion ne peut plus avoir lieu).
**4. Interface utilisateur**
**4.1 Affichage de la grille**
La grille sera affichée dans la console après chaque mouvement.
Les valeurs des tuiles doivent être alignées et clairement visibles.
Si une case est vide, un symbole distinct (comme un 0 ou un espace vide) doit la représenter.
**4.2 Entrée utilisateur**
Le joueur doit pouvoir utiliser les touches directionnelles (ou des touches comme w, a, s, d) pour déplacer les tuiles.
Le programme doit valider que l’entrée correspond à un mouvement valide (haut, bas, gauche, droite) et ignorer les autres entrées.
**4.3 Messages de jeu**
Un message doit être affiché lorsque le joueur gagne (atteint la tuile 2048) ou perd (plus de mouvements possibles).
À chaque tour, indiquer clairement au joueur quelle touche il peut utiliser pour déplacer les tuiles.
**5. Contraintes techniques**
**5.1 Langage de programmation**
Le jeu doit être développé en langage C.
L'application fonctionnera dans une console (mode texte).
**5.2 Performance**
Le jeu doit répondre rapidement aux entrées du joueur et afficher la grille après chaque mouvement.
La génération aléatoire des nouvelles tuiles après chaque déplacement doit être efficace.
**5.3 Gestion des erreurs**
Le programme doit ignorer les entrées non valides (par exemple, une touche qui ne correspond pas à un déplacement).
Si le joueur tente un déplacement qui n’a aucun effet (aucune tuile ne peut bouger ou fusionner), cela doit être détecté et traité correctement sans affecter la partie.
**6. Évolutions possibles**
**6.1 Sauvegarde de la partie**
Ajouter une fonctionnalité permettant de sauvegarder une partie en cours et de la reprendre plus tard.
**6.2 Mode graphique**
Envisager une version future avec une interface graphique simple (en utilisant une bibliothèque graphique comme SDL ou ncurses).
**6.3 Scores**
Ajouter un système de score basé sur les valeurs des tuiles fusionnées. Le score pourrait être affiché en temps réel et comparé avec les meilleurs scores.

