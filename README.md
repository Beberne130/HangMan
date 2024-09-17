### **Projet : Jeu du Pendu (Hangman)**

#### **Objectif**
Le but du jeu est de deviner un mot en proposant des lettres. Si une lettre est correcte, elle apparaît à sa place dans le mot. Si elle est incorrecte, une partie du "pendu" est dessinée. Le joueur perd s'il fait trop d'erreurs, et gagne s'il devine tout le mot avant la fin.

---

### **Divisions des tâches**

#### **Personne 1 (aucune base en C) : Gestion des entrées et affichage**
Tâches :
- Demander au joueur d’entrer une lettre.
- Valider que l’entrée est bien une lettre et qu’elle n’a pas déjà été proposée.
- Afficher l’état actuel du mot deviné (avec des tirets pour les lettres non trouvées).

**Ce que cette personne apprendra** :
- Utilisation de `scanf` pour capturer les entrées du joueur.
- Manipulation des chaînes de caractères.
- Conditions de validation (`if`, `else`).

**Difficulté** :
- Facile, car cette personne se concentrera principalement sur l’interaction utilisateur et les validations.

#### **Personne 2 (aucune base en C) : Gestion des erreurs et affichage du pendu**
Tâches :
- Gérer les tentatives échouées du joueur et afficher les erreurs.
- Mettre à jour et afficher l’état du pendu (de manière simple, comme des étapes d'un dessin ASCII).
  
**Ce que cette personne apprendra** :
- Utilisation de boucles pour suivre les tentatives restantes.
- Conditions pour gérer les erreurs et affichage de l’état du pendu en fonction du nombre d’échecs.
  
**Difficulté** :
- Facile à intermédiaire, cette personne travaillera principalement avec des boucles et des conditions, ce qui est une bonne introduction aux structures de contrôle en C.

#### **Personne 3 (ayant les bases en C) : Gestion du mot à deviner et logique du jeu**
Tâches :
- Sélectionner un mot aléatoire dans une liste prédéfinie.
- Vérifier si la lettre entrée par le joueur est présente dans le mot à deviner.
- Déterminer si le joueur a gagné ou perdu en fonction des tentatives restantes et des lettres trouvées.
  
**Ce que cette personne apprendra/améliorera** :
- Manipulation de tableaux et de chaînes de caractères.
- Gestion de la logique de victoire ou défaite.
- (Optionnel) Implémenter une génération aléatoire du mot.

**Difficulté** :
- Intermédiaire, car cette personne manipule des tableaux et des structures plus avancées, tout en gérant la logique générale du jeu.

---

### **Fonctionnalités à implémenter**

1. **Entrée du joueur** :
   - Le joueur propose une lettre.
   - Le programme vérifie si la lettre est correcte ou non.

2. **Affichage du mot** :
   - Afficher le mot en cours avec des tirets pour les lettres non trouvées (ex: "_ _ a _ _").
   - Mettre à jour l’affichage après chaque proposition.

3. **Gestion des erreurs** :
   - Si le joueur propose une lettre qui n’est pas dans le mot, il perd une tentative.
   - Le pendu est mis à jour visuellement à chaque erreur (étapes ASCII du dessin).

4. **Victoire/Défaite** :
   - Victoire : Le joueur gagne s'il devine toutes les lettres du mot avant de manquer de tentatives.
   - Défaite : Le joueur perd s'il fait trop d’erreurs (par exemple, 6 erreurs maximum).

---

### **Étapes de collaboration**

1. **Définir les variables globales** (fait par la personne 3) :
   - Une liste de mots prédéfinis.
   - Un tableau pour suivre les lettres trouvées et celles encore à deviner.

2. **Entrée et validation de la lettre** (fait par la personne 1) :
   - Demander au joueur une lettre.
   - Vérifier que la lettre est correcte (n’a pas déjà été devinée).

3. **Affichage de l’état du mot et du pendu** (fait par les personnes 1 et 2) :
   - Personne 1 implémente l'affichage du mot avec les lettres devinées.
   - Personne 2 implémente l'affichage du pendu en fonction des erreurs.

4. **Logique de victoire et défaite** (fait par la personne 3) :
   - Implémenter les conditions de victoire et de défaite en vérifiant si toutes les lettres ont été devinées ou si le joueur a épuisé ses tentatives.

---

### **Exemple d'affichage**

```
Mot à deviner : _ _ a _ _

Tentatives restantes : 5

Proposez une lettre : e

Erreur ! Le pendu : O

Mot à deviner : _ _ a _ _

Tentatives restantes : 4
```

---

### **Extension possible** (pour aller plus loin)
- **Choix aléatoire du mot** : Utiliser des fichiers ou des listes plus grandes pour choisir aléatoirement un mot à deviner.
- **Système de scores** : Implémenter un système de score basé sur le nombre d’erreurs et de tentatives restantes.
- **Sauvegarde de la partie** : Ajouter une fonctionnalité de sauvegarde pour reprendre une partie en cours.
