# Shoot'em up
Il s'agit d'un projet de programmation C type Shoot ’em up réalisé par Cahay Florian et Durand Florian.

Le projet a été entièrement **codé en C avec la bibliothèque graphique libMLV.**

- [Déroulement du jeu](#déroulement-du-jeu)
- [Architecture du projet](#architecture-du-projet)
- [Compilation](#compilation)

## Déroulement du jeu
Vous incarnez un vaisseau avec lequel vous pouvez tirer sur les ennemis pour gagner du score. 

Vous commencez avec **3 vies**, une fois vos 3 vies perdues la partie est terminée. Vous pouvez perdre de la vie si les ennemis
vous tirent dessus, si vous rentrez dans un ennemi ou encore si un ennemi atteint le bas de l'écran.

Lorsque vous lancez le jeu un menu apparaît vous proposant trois options :
- appuyez sur la touche <kbd>P</kbd> pour jouer.
- appuyez sur la touche <kbd>H</kbd> pour avoir une aide.
- appuyez sur la touche <kbd>Q</kbd> pour quitter le programme.

Si vous choisissez de jouer, il vous suffit d'utiliser les flèches <kbd>←</kbd><kbd>↑</kbd><kbd>→</kbd><kbd>↓</kbd> pour déplacer votre vaisseau et appuyer sur <kbd>space</kbd> pour tirer. Si vous perdez, le programme va se figer pendant quelques secondes avant de se fermer.

## Architecture du projet
- Dossier `bin` : Executable du jeu
- Dossier `doc` : Documentation
- Dossier `hitbox_editor` : Mini programme permettant de créer la hitbox d'une image
- Dossier `include` : Ensemble des fichiers *.h
- Dossier `src` :
  - Dossier `font` : Différentes polices
  - Dossier `hitbox` : Fichiers de données des rectagles des hitbox
  - Dossier `media` : Images utilisées dans le jeu
  - Module `main` : Boucle de jeu
  - Module `view` : Affchage du jeu
  - Module `data` : Initialisation de données et libération de mémoire
  - Module `linked_list` : Liste chaîné pouvant utiliser différents types de donnée
  - Module `enemies` : Gère les fonctions utilent aux ennemis
  - Module `events` : Gère des événements du clavier
  - Module `hitbox` : Gère les fonctions utilent aux hitbox
  - Module `shot` : Gère les fonctions utilent à un tir
  - Module `shots` : Gère les fonctions utilent à tous les tirs 
  - Module `spaceship` : Gère les fonctions utilent à un vaisseau
  - Module `star` : Gère les fonctions utilent à une étoile
  - Module `stars` : Gère les fonctions utilent aux étoiles

## Compilation
Pour compiler le programme faire la commande `make` à la racine du projet.
Ensuite faire la commande `./bin/projet` pour éxécuter le programme.
