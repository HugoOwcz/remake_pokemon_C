# Liste des struct

## Joueur : type struct
    - nom (str)
    - list poke (taille : ?, contient des struct)
    - main poke (poke selectionner)
    - supcoin (int)
    - list item (taille : ?, contient des struct)


## Supémon : type struct
    - nom (str)
    - lvl (int, min = 1)
    - xp (int, min = 0)
    - xp_pour_lvl_up (int, valeur = 500 + 1000*(lvl-1))
    - hp (int)
    - hp_max (int)
    - attaque_sans_effet (int)
    - attaque_actuel(int)
    - def_sans_effet (int)
    - def actuel (int)
    - evasion_sans_effet (int)
    - evasion_actuel (int)
    - precision_sans_effet (int)
    - precision_actuel (int)
    - vitesse (int, 1er à attaquer)
    - list compétence (taille : ?)

quand un supémon prend un niveau toute stat*1.3
si valeur stat pas int 50% stat arrondie sup
50% stat arrondie inf

lvl 1 -> 2 500xp puis 1000 xp en plus pour niveau suivant
lvl n = 500 + 1000*(n-1)


## Article : type struct
    - nom (str)
    - modif (str, ( ex : pv, niveau, attaque, ...))
    - nombre (int)
    - prix_vente (int, prix_vente = prix_achat / 2)
    - prix_achat (int)


# fichier de sauvegarde contient le joueur et toute ses dépendance


# Mouvement / Interaction dans le monde

Implémentation création de partie (choix nom / supemon)

## Demande de mouvement : 
    - Aller dans la nature / se battre
    - Aller dans une boutique
    - Aller au centre supemon
    - Quitter le jeu (demander si save)

## Dans shop :
    - Acheter objet
    - Vendre objet

## Combat :
    - Choix d'une competence
    - Changer de supemon (skip turn)
    - Utiliser un item
    - S'échapper (vitesse_supeon/(vitesse_supemon + vittesse_supemon_ennemie))
    - Capturer un supemon ((ennemie_max_hp - ennemie_hp)/ennemie_hp_max - 0.5)

attaque réussi :  Launcher_Accuracy / (Launcher_Accuracy + Target_Evasion) + 0.1
dégat de l'attaque : Launcher_Attack x Damage / Target_Defense

Fin du combat quand 1 supemon à 0 hp
si le joueur gagne : gagne random coin (100, 500) / gagne random xp (100, 500)*lvl ennemie