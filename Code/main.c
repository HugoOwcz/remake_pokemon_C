//
// Created by Home on 21/02/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "function.h"

int main()
{
    typedef struct {
        char name[50];
        char damagingMove[50];
        int power;
    } Move;

    struct supemon {
        char mySupemon[50];
        int myLevel;
        int experience;
        int experience_required_to_lvl_up;
        int hp;
        int hpmax;
        int attack;
        int base_attack;
        int defense;
        int base_defense;
        int evasion;
        int base_evasion;
        int accuracy;
        int base_accuracy;
        int speed;
        int base_speed;
        Move moves[3];
    };
    Move moves[5] = {{"Scratch", "damage",  3},
                     {"Grawl",   "attack",  1},
                     {"Pound",   "damage",  2},
                     {"Foliage", "evasion", 1},
                     {"Shell",   "defense", 1}};

    struct supemon list_supemon[3];
    strcpy(list_supemon[0].mySupemon, "Supameche");
    list_supemon[0].myLevel = 1;
    list_supemon[0].experience = 0;
    list_supemon[0].hp = 10;
    list_supemon[0].hpmax = 10;
    list_supemon[0].attack = 1;
    list_supemon[0].base_attack = 1;
    list_supemon[0].defense = 1;
    list_supemon[0].base_defense = 1;
    list_supemon[0].evasion = 1;
    list_supemon[0].base_evasion = 1;
    list_supemon[0].accuracy = 2;
    list_supemon[0].base_accuracy = 2;
    list_supemon[0].speed = 1;
    list_supemon[0].base_speed = 1;
    strcpy(list_supemon[0].moves[0].name, "Scratch");
    strcpy(list_supemon[0].moves[0].damagingMove, "damage");
    list_supemon[0].moves[0].power = 3;
    strcpy(list_supemon[0].moves[1].name, "Grawl");
    strcpy(list_supemon[0].moves[1].damagingMove, "attack");
    list_supemon[0].moves[1].power = 1;

    strcpy(list_supemon[1].mySupemon, "Supapuce");
    list_supemon[1].myLevel = 1;
    list_supemon[1].experience = 0;
    list_supemon[1].hp = 9;
    list_supemon[1].hpmax = 9;
    list_supemon[1].base_attack = 1;
    list_supemon[1].attack = 1;
    list_supemon[1].defense = 1;
    list_supemon[1].base_defense = 1;
    list_supemon[1].evasion = 3;
    list_supemon[1].base_evasion = 3;
    list_supemon[1].accuracy = 2;
    list_supemon[1].base_accuracy = 2;
    list_supemon[1].speed = 2;
    list_supemon[1].base_speed = 2;
    strcpy(list_supemon[1].moves[0].name, "Pound");
    strcpy(list_supemon[1].moves[0].damagingMove, "damage");
    list_supemon[1].moves[0].power = 2;
    strcpy(list_supemon[1].moves[1].name, "Foliage");
    strcpy(list_supemon[1].moves[1].damagingMove, "evasion");
    list_supemon[1].moves[1].power = 1;

    strcpy(list_supemon[2].mySupemon, "Supbizarre");
    list_supemon[2].myLevel = 1;
    list_supemon[2].experience = 0;
    list_supemon[2].hp = 11;
    list_supemon[2].hpmax = 11;
    list_supemon[2].attack = 1;
    list_supemon[2].base_attack = 1;
    list_supemon[2].defense = 2;
    list_supemon[2].base_defense = 2;
    list_supemon[2].evasion = 2;
    list_supemon[2].base_evasion = 2;
    list_supemon[2].accuracy = 1;
    list_supemon[2].base_accuracy = 1;
    list_supemon[2].speed = 2;
    list_supemon[2].base_speed = 2;
    strcpy(list_supemon[2].moves[0].name, "Pound");
    strcpy(list_supemon[2].moves[0].damagingMove, "damage");
    list_supemon[2].moves[0].power = 2;
    strcpy(list_supemon[2].moves[1].name, "Shell");
    strcpy(list_supemon[2].moves[1].damagingMove, "defense");
    list_supemon[2].moves[1].power = 1;


    struct items {
        char item_name[50];
        char modif[50];
        int nombre;
        int prix_vente;
        int prix_achat;
    };

    struct items my_items[3];
    strcpy(my_items[0].item_name, "Potion");
    strcpy(my_items[0].modif, "hp");
    my_items[0].nombre = 5;
    my_items[0].prix_achat = 100 ;
    my_items[0].prix_vente = my_items[0].prix_achat/ 2;

    strcpy(my_items[1].item_name, "Super potion");
    strcpy(my_items[1].modif, "hp");
    my_items[1].nombre = 10;
    my_items[1].prix_achat = 300 ;
    my_items[1].prix_vente = my_items[1].prix_achat/ 2;

    strcpy(my_items[2].item_name, "Rare candy");
    strcpy(my_items[2].modif, "level");
    my_items[2].nombre = 1;
    my_items[2].prix_achat = 700 ;
    my_items[2].prix_vente = my_items[1].prix_achat/ 2;


    struct joueur{
        int supcoins;
        char myplayer[50];
        char items[150];
        short nb_supemon;
        struct supemon my_supemon[6];
        short supemon_select;
        short nb_items[3];
    };

    struct joueur joueur1;
    FILE *myFile = NULL;
    myFile = fopen("..\Code\Gamesave.txt", "r");
    if(myFile == NULL) {
        char name = StartDisplay();
        strcat(joueur1.myplayer, &name);
        short supemon_chose;
        do {
            supemon_chose = StartInput();
        } while (supemon_chose != 1 && supemon_chose != 2 && supemon_chose != 3);
        for (int i = 0; i < 6; i++) {
            joueur1.my_supemon[i].hpmax = 0;
        }
        joueur1.nb_supemon = 1;
        joueur1.supcoins = 0;
        joueur1.supemon_select = 0;
        joueur1.nb_items[0] = 0;
        joueur1.nb_items[1] = 0;
        joueur1.nb_items[2] = 0;
        switch (supemon_chose) {
            case 1:
                strcpy(joueur1.my_supemon[0].mySupemon, list_supemon[0].mySupemon);
                joueur1.my_supemon[0].myLevel = 1;
                joueur1.my_supemon[0].experience = 0;
                joueur1.my_supemon[0].experience_required_to_lvl_up = 500;
                joueur1.my_supemon[0].hp = list_supemon[0].hp;
                joueur1.my_supemon[0].hp = list_supemon[0].hpmax;
                joueur1.my_supemon[0].attack = list_supemon[0].attack;
                joueur1.my_supemon[0].base_attack = list_supemon[0].base_attack;
                joueur1.my_supemon[0].defense = list_supemon[0].defense;
                joueur1.my_supemon[0].base_defense = list_supemon[0].base_defense;
                joueur1.my_supemon[0].evasion = list_supemon[0].evasion;
                joueur1.my_supemon[0].base_evasion = list_supemon[0].base_evasion;
                joueur1.my_supemon[0].accuracy = list_supemon[0].accuracy;
                joueur1.my_supemon[0].base_accuracy = list_supemon[0].base_accuracy;
                joueur1.my_supemon[0].speed = list_supemon[0].speed;
                joueur1.my_supemon[0].base_speed = list_supemon[0].base_speed;
                strcpy(joueur1.my_supemon[0].moves[0].name, list_supemon[0].moves[0].name);
                strcpy(joueur1.my_supemon[0].moves[0].damagingMove, list_supemon[0].moves[0].damagingMove);
                joueur1.my_supemon[0].moves[0].power = list_supemon[0].moves[0].power;
                strcpy(joueur1.my_supemon[0].moves[1].name, list_supemon[0].moves[1].name);
                strcpy(joueur1.my_supemon[0].moves[1].damagingMove, list_supemon[0].moves[1].damagingMove);
                joueur1.my_supemon[0].moves[1].power = list_supemon[0].moves[1].power;
            case 2:
                strcpy(joueur1.my_supemon[0].mySupemon, list_supemon[1].mySupemon);
                joueur1.my_supemon[0].myLevel = 1;
                joueur1.my_supemon[0].experience = 0;
                joueur1.my_supemon[0].experience_required_to_lvl_up = 500;
                joueur1.my_supemon[0].hp = list_supemon[1].hp;
                joueur1.my_supemon[0].hp = list_supemon[1].hpmax;
                joueur1.my_supemon[0].attack = list_supemon[1].attack;
                joueur1.my_supemon[0].base_attack = list_supemon[1].base_attack;
                joueur1.my_supemon[0].defense = list_supemon[1].defense;
                joueur1.my_supemon[0].base_defense = list_supemon[1].base_defense;
                joueur1.my_supemon[0].evasion = list_supemon[1].evasion;
                joueur1.my_supemon[0].base_evasion = list_supemon[1].base_evasion;
                joueur1.my_supemon[0].accuracy = list_supemon[1].accuracy;
                joueur1.my_supemon[0].base_accuracy = list_supemon[1].base_accuracy;
                joueur1.my_supemon[0].speed = list_supemon[1].speed;
                joueur1.my_supemon[0].base_speed = list_supemon[1].base_speed;
                strcpy(joueur1.my_supemon[0].moves[0].name, list_supemon[1].moves[0].name);
                strcpy(joueur1.my_supemon[0].moves[0].damagingMove, list_supemon[1].moves[0].damagingMove);
                joueur1.my_supemon[0].moves[0].power = list_supemon[1].moves[0].power;
                strcpy(joueur1.my_supemon[0].moves[1].name, list_supemon[1].moves[1].name);
                strcpy(joueur1.my_supemon[0].moves[1].damagingMove, list_supemon[1].moves[1].damagingMove);
                joueur1.my_supemon[0].moves[1].power = list_supemon[1].moves[1].power;
            default:
                strcpy(joueur1.my_supemon[0].mySupemon, list_supemon[2].mySupemon);
                joueur1.my_supemon[0].myLevel = 1;
                joueur1.my_supemon[0].experience = 0;
                joueur1.my_supemon[0].experience_required_to_lvl_up = 500;
                joueur1.my_supemon[0].hp = list_supemon[2].hp;
                joueur1.my_supemon[0].hp = list_supemon[2].hpmax;
                joueur1.my_supemon[0].attack = list_supemon[2].attack;
                joueur1.my_supemon[0].base_attack = list_supemon[2].base_attack;
                joueur1.my_supemon[0].defense = list_supemon[2].defense;
                joueur1.my_supemon[0].base_defense = list_supemon[2].base_defense;
                joueur1.my_supemon[0].evasion = list_supemon[2].evasion;
                joueur1.my_supemon[0].base_evasion = list_supemon[2].base_evasion;
                joueur1.my_supemon[0].accuracy = list_supemon[2].accuracy;
                joueur1.my_supemon[0].base_accuracy = list_supemon[2].base_accuracy;
                joueur1.my_supemon[0].speed = list_supemon[2].speed;
                joueur1.my_supemon[0].base_speed = list_supemon[2].base_speed;
                strcpy(joueur1.my_supemon[0].moves[0].name, list_supemon[2].moves[0].name);
                strcpy(joueur1.my_supemon[0].moves[0].damagingMove, list_supemon[1].moves[0].damagingMove);
                joueur1.my_supemon[0].moves[0].power = list_supemon[1].moves[0].power;
                strcpy(joueur1.my_supemon[0].moves[1].name, list_supemon[2].moves[1].name);
                strcpy(joueur1.my_supemon[0].moves[1].damagingMove, list_supemon[2].moves[1].damagingMove);
                joueur1.my_supemon[0].moves[1].power = list_supemon[2].moves[1].power;
        }
    } else {
        fgets(joueur1.myplayer, sizeof(joueur1.myplayer), myFile);
        fread(&joueur1.supcoins, sizeof(int), 1, myFile);
        fread(joueur1.nb_items, sizeof(int), 3, myFile);

        for (int i = 0; i < 6; i++) {
            fread(&joueur1.my_supemon[i].hp, sizeof(struct joueur), 1, myFile);
            fread(&joueur1.my_supemon[i].myLevel, sizeof(struct joueur), 2, myFile);
            fread(&joueur1.my_supemon[i].experience, sizeof(struct joueur), 3, myFile);
            fread(&joueur1.my_supemon[i].experience_required_to_lvl_up, sizeof(struct joueur), 1, myFile);
            fread(&joueur1.my_supemon[i].hpmax, sizeof(struct joueur), 4, myFile);
            fread(&joueur1.my_supemon[i].base_attack, sizeof(struct joueur), 5, myFile);
            fread(&joueur1.my_supemon[i].base_defense, sizeof(struct joueur), 6, myFile);
            fread(&joueur1.my_supemon[i].base_evasion, sizeof(struct joueur), 7, myFile);
            fread(&joueur1.my_supemon[i].base_accuracy, sizeof(struct joueur), 8, myFile);
            fread(&joueur1.my_supemon[i].attack, sizeof(struct joueur), 9, myFile);
            fread(&joueur1.my_supemon[i].defense, sizeof(struct joueur), 10, myFile);
            fread(&joueur1.my_supemon[i].evasion, sizeof(struct joueur), 11, myFile);
            fread(&joueur1.my_supemon[i].accuracy, sizeof(struct joueur), 12, myFile);
            fread(&joueur1.my_supemon[i].speed, sizeof(struct joueur), 13, myFile);
            fgets(joueur1.my_supemon[i].moves[0].name, sizeof(struct joueur), myFile);
            fgets(joueur1.my_supemon[i].moves[1].name, sizeof(struct joueur), myFile);
        }
    }


    short end = 0;
    do {
        int random;
        short choice;
        do {
            choice = MainInput();
        } while (choice != 1 && choice != 2 && choice != 3 && choice != 4);
        short other_choice = 0;
        short other_end = 0;
        switch (choice) {
            case 1:
                srand(time(NULL));
                random = rand();
                random %= 3;
                short number_ennemi = random;
                short win = 0;
                struct supemon ennemi;
                strcpy(ennemi.mySupemon, list_supemon[number_ennemi].mySupemon);
                srand(time(NULL));
                random = rand();
                random = (random % 5) + 1;
                short level = joueur1.my_supemon[joueur1.supemon_select].myLevel-random;
                if (level < 1){
                    ennemi.myLevel = 1;
                } else {
                    ennemi.myLevel = level;
                }
                ennemi.hpmax = list_supemon[number_ennemi].hpmax;
                ennemi.base_attack = list_supemon[number_ennemi].base_attack;
                ennemi.base_defense = list_supemon[number_ennemi].base_defense;
                ennemi.base_evasion = list_supemon[number_ennemi].base_evasion;
                ennemi.base_accuracy = list_supemon[number_ennemi].base_accuracy;
                ennemi.base_speed = list_supemon[number_ennemi].base_speed;
                strcpy(ennemi.moves[0].name, list_supemon[number_ennemi].moves[0].name);
                strcpy(ennemi.moves[0].damagingMove, list_supemon[number_ennemi].moves[0].damagingMove);
                ennemi.moves[0].power = list_supemon[number_ennemi].moves[0].power;
                strcpy(ennemi.moves[1].name, list_supemon[number_ennemi].moves[1].name);
                strcpy(ennemi.moves[1].damagingMove, list_supemon[number_ennemi].moves[1].damagingMove);
                ennemi.moves[1].power = list_supemon[number_ennemi].moves[1].power;
                float new_stat_float;
                short new_stat_int;
                for (short i = 0; i < ennemi.myLevel; i++){
                    srand(time(NULL));
                    random = rand();
                    random %= 2;
                    new_stat_float = ennemi.hpmax * 1.3;
                    if (random == 0){
                        new_stat_int = new_stat_float;
                    } else {
                        new_stat_int = new_stat_float + 1;
                    }
                    ennemi.hpmax = new_stat_int;
                    new_stat_float = ennemi.base_attack * 1.3;
                    if (random == 0){
                        new_stat_int = new_stat_float;
                    } else {
                        new_stat_int = new_stat_float + 1;
                    }
                    ennemi.base_attack = new_stat_int;
                    new_stat_float = ennemi.base_defense * 1.3;
                    if (random == 0){
                        new_stat_int = new_stat_float;
                    } else {
                        new_stat_int = new_stat_float + 1;
                    }
                    ennemi.base_defense = new_stat_int;
                    new_stat_float = ennemi.base_evasion * 1.3;
                    if (random == 0){
                        new_stat_int = new_stat_float;
                    } else {
                        new_stat_int = new_stat_float + 1;
                    }
                    ennemi.base_evasion = new_stat_int;
                    new_stat_float = ennemi.base_accuracy * 1.3;
                    if (random == 0){
                        new_stat_int = new_stat_float;
                    } else {
                        new_stat_int = new_stat_float + 1;
                    }
                    ennemi.base_accuracy = new_stat_int;
                    new_stat_float = ennemi.base_speed * 1.3;
                    if (random == 0){
                        new_stat_int = new_stat_float;
                    } else {
                        new_stat_int = new_stat_float + 1;
                    }
                    ennemi.base_speed =new_stat_int;
                }
                ennemi.hp = ennemi.hpmax;
                ennemi.attack = ennemi.base_attack;
                ennemi.defense = ennemi.base_defense;
                ennemi.evasion = ennemi.base_evasion;
                ennemi.accuracy = ennemi.base_accuracy;
                ennemi.speed = ennemi.base_speed;
                FirstBattleDisplay();
                do {
                    short possible = 0;
                    short change_choice = 0;
                    short move_choice = 0;
                    short item_choice = 0;
                    short try;
                    short go_back = 0;
                    short ennemi_name = 0;
                    short player_name = 0;
                    if (strcmp(ennemi.mySupemon, "Supameche") == 1){
                        ennemi_name = 1;
                    } else if (strcmp(ennemi.mySupemon, "Supapuce") == 1){
                        ennemi_name = 2;
                    } else if (strcmp(ennemi.mySupemon, "Supbizarre") == 1){
                        ennemi_name = 3;
                    }
                    if (strcmp(joueur1.my_supemon[joueur1.supemon_select].mySupemon, "Supameche") == 1){
                        player_name = 1;
                    } else if (strcmp(joueur1.my_supemon[joueur1.supemon_select].mySupemon, "Supapuce") == 1){
                        player_name = 2;
                    } else if (strcmp(joueur1.my_supemon[joueur1.supemon_select].mySupemon, "Supbizarre") == 1){
                        player_name = 3;
                    }
                    do {
                        other_choice = BattleInput(ennemi_name, ennemi.hp, player_name, joueur1.my_supemon[joueur1.supemon_select].hp);
                    } while (other_choice != 1 && other_choice != 2 && other_choice != 3 && other_choice != 4 && other_choice != 5);
                    switch (other_choice) {
                        case 1:
                            do {
                                if (strcmp(joueur1.my_supemon[joueur1.supemon_select].mySupemon, "Supameche") == 1){
                                    move_choice = BattleMovepoolInput(1, 2);
                                } else if (strcmp(joueur1.my_supemon[joueur1.supemon_select].mySupemon, "Supapuce") == 1){
                                    move_choice = BattleMovepoolInput(3, 4);
                                } else if (strcmp(joueur1.my_supemon[joueur1.supemon_select].mySupemon, "Supbizarre") == 1){
                                    move_choice = BattleMovepoolInput(3, 5);
                                }
                            } while (move_choice != 1 && move_choice != 2 && move_choice != 3);
                            if (move_choice == 3){
                                go_back = 1;
                            }
                            break;
                        case 2:
                            do {
                                change_choice = BattleSupemonInput();
                                if (change_choice == 2 && joueur1.my_supemon[1].hpmax != 0) {
                                    possible = 1;
                                } else if (change_choice == 3 && joueur1.my_supemon[2].hpmax != 0) {
                                    possible = 1;
                                } else if (change_choice == 4 && joueur1.my_supemon[3].hpmax != 0) {
                                    possible = 1;
                                } else if (change_choice == 5 && joueur1.my_supemon[4].hpmax != 0) {
                                    possible = 1;
                                } else if (change_choice == 6 && joueur1.my_supemon[5].hpmax != 0) {
                                    possible = 1;
                                }
                            } while (change_choice != 1 && change_choice != 7 && possible == 0);
                            switch (change_choice) {
                                case 1:
                                    joueur1.supemon_select = 0;
                                    break;
                                case 2:
                                    joueur1.supemon_select = 1;
                                    break;
                                case 3:
                                    joueur1.supemon_select = 2;
                                    break;
                                case 4:
                                    joueur1.supemon_select = 3;
                                    break;
                                case 5:
                                    joueur1.supemon_select = 4;
                                    break;
                                case 6:
                                    joueur1.supemon_select = 5;
                                    break;
                                default:
                                    go_back = 1;
                                    break;
                            }
                            break;
                        case 3:
                            do {
                                item_choice = BattleItemsInput(joueur1.nb_items[0], joueur1.nb_items[1], joueur1.nb_items[2]);
                                if (item_choice == 1 > joueur1.nb_items[0]){
                                    possible = 1;
                                } else if (item_choice == 2 > joueur1.nb_items[1]){
                                    possible = 1;
                                } else if (item_choice == 3 > joueur1.nb_items[2]){
                                    possible = 1;
                                }
                            } while (item_choice != 4 && possible == 0);
                            switch (item_choice) {
                                case 1:
                                    if (joueur1.my_supemon[joueur1.supemon_select].hp += 5 > joueur1.my_supemon[joueur1.supemon_select].hpmax){
                                        joueur1.my_supemon[joueur1.supemon_select].hp = joueur1.my_supemon[joueur1.supemon_select].hpmax;
                                    } else {
                                        joueur1.my_supemon[joueur1.supemon_select].hp += 5;
                                    }
                                    break;
                                case 2:
                                    if (joueur1.my_supemon[joueur1.supemon_select].hp += 10 > joueur1.my_supemon[joueur1.supemon_select].hpmax){
                                        joueur1.my_supemon[joueur1.supemon_select].hp = joueur1.my_supemon[joueur1.supemon_select].hpmax;
                                    } else {
                                        joueur1.my_supemon[joueur1.supemon_select].hp += 10;
                                    }
                                    break;
                                case 3:
                                    joueur1.my_supemon[joueur1.supemon_select].myLevel += 1;
                                    joueur1.my_supemon[joueur1.supemon_select].experience = 0;
                                    joueur1.my_supemon[joueur1.supemon_select].experience_required_to_lvl_up += 1000;
                                    short supemon = joueur1.supemon_select;
                                    srand(time(NULL));
                                    random = rand();
                                    random %= 2;
                                    new_stat_float = joueur1.my_supemon[supemon].hpmax * 1.3;
                                    if (random == 0) {
                                        new_stat_int = new_stat_float;
                                    } else {
                                        new_stat_int = new_stat_float + 1;
                                    }
                                    joueur1.my_supemon[supemon].hpmax = new_stat_int;
                                    new_stat_float = joueur1.my_supemon[supemon].base_attack * 1.3;
                                    if (random == 0) {
                                        new_stat_int = new_stat_float;
                                    } else {
                                        new_stat_int = new_stat_float + 1;
                                    }
                                    joueur1.my_supemon[supemon].base_defense = new_stat_int;
                                    new_stat_float = joueur1.my_supemon[supemon].base_defense * 1.3;
                                    if (random == 0) {
                                        new_stat_int = new_stat_float;
                                    } else {
                                        new_stat_int = new_stat_float + 1;
                                    }
                                    joueur1.my_supemon[supemon].base_defense = new_stat_int;
                                    new_stat_float = joueur1.my_supemon[supemon].base_accuracy * 1.3;
                                    if (random == 0) {
                                        new_stat_int = new_stat_float;
                                    } else {
                                        new_stat_int = new_stat_float + 1;
                                    }
                                    joueur1.my_supemon[supemon].base_accuracy = new_stat_int;
                                    new_stat_float = joueur1.my_supemon[supemon].base_evasion * 1.3;
                                    if (random == 0) {
                                        new_stat_int = new_stat_float;
                                    } else {
                                        new_stat_int = new_stat_float + 1;
                                    }
                                    joueur1.my_supemon[supemon].base_evasion = new_stat_int;
                                    new_stat_float = joueur1.my_supemon[supemon].base_speed * 1.3;
                                    if (random == 0) {
                                        new_stat_int = new_stat_float;
                                    } else {
                                        new_stat_int = new_stat_float + 1;
                                    }
                                    joueur1.my_supemon[supemon].base_speed = new_stat_int;
                                    break;
                                default:
                                    go_back = 1;
                                    break;
                            }
                            break;
                        case 4:
                            try = ennemi.hpmax*10;
                            try -= ennemi.hp*10;
                            try /= 100;
                            try -= 5;
                            srand(time(NULL));
                            random = rand();
                            while (random > 100){
                                random /= 10;
                            }
                            if (random > try){
                                BattleSpnCatchingDisplay(0);
                            } else {
                                BattleSpnCatchingDisplay(1);
                                if (joueur1.nb_supemon < 6){
                                    short supemon = joueur1.nb_supemon;
                                    strcpy(joueur1.my_supemon[supemon].mySupemon, ennemi.mySupemon);
                                    joueur1.my_supemon[supemon].myLevel = ennemi.myLevel;
                                    joueur1.my_supemon[supemon].experience = 0;
                                    joueur1.my_supemon[supemon].experience_required_to_lvl_up = 500 + 1000 * (ennemi.myLevel - 1);
                                    joueur1.my_supemon[supemon].hp = ennemi.hp;
                                    joueur1.my_supemon[supemon].hp = ennemi.hpmax;
                                    joueur1.my_supemon[supemon].attack = ennemi.base_attack;
                                    joueur1.my_supemon[supemon].base_attack = ennemi.base_attack;
                                    joueur1.my_supemon[supemon].defense = ennemi.base_defense;
                                    joueur1.my_supemon[supemon].base_defense = ennemi.base_defense;
                                    joueur1.my_supemon[supemon].evasion = ennemi.base_evasion;
                                    joueur1.my_supemon[supemon].base_evasion = ennemi.base_evasion;
                                    joueur1.my_supemon[supemon].accuracy = ennemi.base_accuracy;
                                    joueur1.my_supemon[supemon].base_accuracy = ennemi.base_accuracy;
                                    joueur1.my_supemon[supemon].speed = ennemi.base_speed;
                                    joueur1.my_supemon[supemon].base_speed = ennemi.base_speed;
                                    strcpy(joueur1.my_supemon[supemon].moves[0].name, ennemi.moves[0].name);
                                    strcpy(joueur1.my_supemon[supemon].moves[0].damagingMove, ennemi.moves[0].damagingMove);
                                    joueur1.my_supemon[supemon].moves[0].power = ennemi.moves[0].power;
                                    strcpy(joueur1.my_supemon[supemon].moves[1].name, ennemi.moves[1].name);
                                    strcpy(joueur1.my_supemon[supemon].moves[1].damagingMove, ennemi.moves[1].damagingMove);
                                    joueur1.my_supemon[supemon].moves[1].power = ennemi.moves[1].power;
                                    joueur1.nb_supemon += 1;
                                } else {
                                    short supemon_choice;
                                    do{
                                        supemon_choice = ReplaceSupemonCatch();
                                    } while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6);
                                    joueur1.my_supemon[supemon_choice];
                                    strcpy(joueur1.my_supemon[supemon_choice].mySupemon, ennemi.mySupemon);
                                    joueur1.my_supemon[supemon_choice].myLevel = ennemi.myLevel;
                                    joueur1.my_supemon[supemon_choice].experience = 0;
                                    joueur1.my_supemon[supemon_choice].experience_required_to_lvl_up = 500 + 1000 * (ennemi.myLevel - 1);
                                    joueur1.my_supemon[supemon_choice].hp = ennemi.hp;
                                    joueur1.my_supemon[supemon_choice].hp = ennemi.hpmax;
                                    joueur1.my_supemon[supemon_choice].attack = ennemi.base_attack;
                                    joueur1.my_supemon[supemon_choice].base_attack = ennemi.base_attack;
                                    joueur1.my_supemon[supemon_choice].defense = ennemi.base_defense;
                                    joueur1.my_supemon[supemon_choice].base_defense = ennemi.base_defense;
                                    joueur1.my_supemon[supemon_choice].evasion = ennemi.base_evasion;
                                    joueur1.my_supemon[supemon_choice].base_evasion = ennemi.base_evasion;
                                    joueur1.my_supemon[supemon_choice].accuracy = ennemi.base_accuracy;
                                    joueur1.my_supemon[supemon_choice].base_accuracy = ennemi.base_accuracy;
                                    joueur1.my_supemon[supemon_choice].speed = ennemi.base_speed;
                                    joueur1.my_supemon[supemon_choice].base_speed = ennemi.base_speed;
                                    strcpy(joueur1.my_supemon[supemon_choice].moves[0].name, ennemi.moves[0].name);
                                    strcpy(joueur1.my_supemon[supemon_choice].moves[1].name, ennemi.moves[1].name);
                                }
                            }
                            break;
                        default:
                            srand(time(NULL));
                            random = rand();
                            while (random > 100){
                                random /= 10;
                            }
                            if ((joueur1.my_supemon[joueur1.supemon_select].speed / (joueur1.my_supemon[joueur1.supemon_select].speed + ennemi.speed)) > random){
                                other_end = 1;
                                BattleRunawayDisplay(1);
                            } else {
                                BattleRunawayDisplay(0);
                            }
                            break;
                    }
                    if (go_back == 0){
                        if (joueur1.my_supemon[joueur1.supemon_select].speed >= ennemi.speed){
                            switch (move_choice) {
                                case 1:
                                    srand(time(NULL));
                                    random = rand();
                                    while (random > 100){
                                        random /= 10;
                                    }
                                    if (joueur1.my_supemon[joueur1.supemon_select].accuracy / (joueur1.my_supemon[joueur1.supemon_select].accuracy + ennemi.evasion) > random) {
                                        ennemi.hp -= (joueur1.my_supemon[joueur1.supemon_select].moves[0].power * joueur1.my_supemon[joueur1.supemon_select].attack) / ennemi.defense;
                                    }
                                    break;
                                case 2:
                                    if (strcmp(joueur1.my_supemon[joueur1.supemon_select].moves[1].damagingMove, "attack") == 1){
                                        joueur1.my_supemon[joueur1.supemon_select].attack += 1;
                                    } else if (strcmp(joueur1.my_supemon[joueur1.supemon_select].moves[1].damagingMove, "evasion") == 1){
                                        joueur1.my_supemon[joueur1.supemon_select].evasion += 1;
                                    } else {
                                        joueur1.my_supemon[joueur1.supemon_select].defense += 1;
                                    }
                                    break;
                                default:
                                    break;
                            }
                            if (ennemi.hp == 0){
                                win = 1;
                                BattleWinDisplay();
                            } else if (joueur1.my_supemon[joueur1.supemon_select].hp == 0){
                                other_end = 1;
                                BattleLooseDisplay();
                            }
                            srand(time(NULL));
                            random = rand();
                            short move = random % 2;
                            switch (move) {
                                case 1:
                                    srand(time(NULL));
                                    random = rand();
                                    while (random > 100){
                                        random /= 10;
                                    }
                                    if (ennemi.accuracy / (ennemi.accuracy + joueur1.my_supemon[joueur1.supemon_select].evasion) > random) {
                                        joueur1.my_supemon[joueur1.supemon_select].hp -= (ennemi.moves[0].power * ennemi.attack) / joueur1.my_supemon[joueur1.supemon_select].defense;
                                    }
                                    break;
                                default:
                                    if (strcmp(ennemi.moves[1].damagingMove, "attack") == 1){
                                        ennemi.attack += 1;
                                    } else if (strcmp(ennemi.moves[1].damagingMove, "evasion") == 1){
                                        ennemi.evasion += 1;
                                    } else {
                                        ennemi.defense += 1;
                                    }
                                    break;
                            }
                        } else {
                            srand(time(NULL));
                            random = rand();
                            short move = random % 2;
                            switch (move) {
                                case 1:
                                    srand(time(NULL));
                                    random = rand();
                                    while (random > 100) {
                                        random /= 10;
                                    }
                                    if (ennemi.accuracy /
                                        (ennemi.accuracy + joueur1.my_supemon[joueur1.supemon_select].evasion) > random) {
                                        joueur1.my_supemon[joueur1.supemon_select].hp -=
                                                (ennemi.moves[0].power * ennemi.attack) /
                                                joueur1.my_supemon[joueur1.supemon_select].defense;
                                    }
                                    break;
                                default:
                                    if (strcmp(ennemi.moves[1].damagingMove, "attack") == 1) {
                                        ennemi.attack += 1;
                                    } else if (strcmp(ennemi.moves[1].damagingMove, "evasion") == 1) {
                                        ennemi.evasion += 1;
                                    } else {
                                        ennemi.defense += 1;
                                    }
                                    break;
                            }
                            if (ennemi.hp == 0){
                                win = 1;
                                BattleWinDisplay();
                            } else if (joueur1.my_supemon[joueur1.supemon_select].hp == 0){
                                other_end = 1;
                                BattleLooseDisplay();
                            }
                            switch (move_choice) {
                                case 1:
                                    srand(time(NULL));
                                    random = rand();
                                    while (random > 100){
                                        random /= 10;
                                    }
                                    if (joueur1.my_supemon[joueur1.supemon_select].accuracy / (joueur1.my_supemon[joueur1.supemon_select].accuracy + ennemi.evasion) > random) {
                                        ennemi.hp -= (joueur1.my_supemon[joueur1.supemon_select].moves[0].power * joueur1.my_supemon[joueur1.supemon_select].attack) / ennemi.defense;
                                    }
                                    break;
                                case 2:
                                    if (strcmp(joueur1.my_supemon[joueur1.supemon_select].moves[1].damagingMove, "attack") == 1){
                                        joueur1.my_supemon[joueur1.supemon_select].attack += 1;
                                    } else if (strcmp(joueur1.my_supemon[joueur1.supemon_select].moves[1].damagingMove, "evasion") == 1){
                                        joueur1.my_supemon[joueur1.supemon_select].evasion += 1;
                                    } else {
                                        joueur1.my_supemon[joueur1.supemon_select].defense += 1;
                                    }
                                    break;
                                default:
                                    break;
                            }
                        }
                    }
                    if (ennemi.hp == 0){
                        win = 1;
                        BattleWinDisplay();
                    } else if (joueur1.my_supemon[joueur1.supemon_select].hp == 0){
                        other_end = 1;
                        BattleLooseDisplay();
                    }
                } while (other_end == 0 && win ==0);
                if (win == 1){
                    srand(time(NULL));
                    random = rand();
                    while (random > 500){
                        random /= 10;
                    }
                    joueur1.supcoins += random;
                    srand(time(NULL));
                    random = rand();
                    while (random > 500){
                        random /= 10;
                    }
                    if (random < 100){
                        random = 100;
                    }
                    random *= ennemi.myLevel;
                    short supemon = joueur1.supemon_select;
                    joueur1.my_supemon[supemon].experience += random;
                    short level_win = 0;
                    while (joueur1.my_supemon[supemon].experience > joueur1.my_supemon[supemon].experience_required_to_lvl_up){
                        joueur1.my_supemon[supemon].experience -= joueur1.my_supemon[supemon].experience_required_to_lvl_up;
                        joueur1.my_supemon[supemon].experience_required_to_lvl_up += 1000;
                        joueur1.my_supemon[supemon].myLevel += 1;
                        level_win += 1;
                    }
                    if (level_win > 0) {
                        for (short i = 0; i < level_win; i++) {
                            srand(time(NULL));
                            random = rand();
                            random %= 2;
                            new_stat_float = joueur1.my_supemon[supemon].hpmax * 1.3;
                            if (random == 0) {
                                new_stat_int = new_stat_float;
                            } else {
                                new_stat_int = new_stat_float + 1;
                            }
                            joueur1.my_supemon[supemon].hpmax = new_stat_int;
                            new_stat_float = joueur1.my_supemon[supemon].base_attack * 1.3;
                            if (random == 0) {
                                new_stat_int = new_stat_float;
                            } else {
                                new_stat_int = new_stat_float + 1;
                            }
                            joueur1.my_supemon[supemon].base_defense = new_stat_int;
                            new_stat_float = joueur1.my_supemon[supemon].base_defense * 1.3;
                            if (random == 0) {
                                new_stat_int = new_stat_float;
                            } else {
                                new_stat_int = new_stat_float + 1;
                            }
                            joueur1.my_supemon[supemon].base_defense = new_stat_int;
                            new_stat_float = joueur1.my_supemon[supemon].base_accuracy * 1.3;
                            if (random == 0) {
                                new_stat_int = new_stat_float;
                            } else {
                                new_stat_int = new_stat_float + 1;
                            }
                            joueur1.my_supemon[supemon].base_accuracy = new_stat_int;
                            new_stat_float = joueur1.my_supemon[supemon].base_evasion * 1.3;
                            if (random == 0) {
                                new_stat_int = new_stat_float;
                            } else {
                                new_stat_int = new_stat_float + 1;
                            }
                            joueur1.my_supemon[supemon].base_evasion = new_stat_int;
                            new_stat_float = joueur1.my_supemon[supemon].base_speed * 1.3;
                            if (random == 0) {
                                new_stat_int = new_stat_float;
                            } else {
                                new_stat_int = new_stat_float + 1;
                            }
                            joueur1.my_supemon[supemon].base_speed = new_stat_int;
                        }
                    }
                }
                for (int i = 0; i < 6; i++) {
                    if (joueur1.my_supemon[i].hpmax != 0){
                        joueur1.my_supemon[i].attack = joueur1.my_supemon[i].base_attack;
                        joueur1.my_supemon[i].defense = joueur1.my_supemon[i].base_defense;
                        joueur1.my_supemon[i].evasion = joueur1.my_supemon[i].base_evasion;
                        joueur1.my_supemon[i].accuracy = joueur1.my_supemon[i].base_accuracy;
                        joueur1.my_supemon[i].speed = joueur1.my_supemon[i].base_speed;
                    }
                }
                break;
            case 2:
                do {
                    do {
                        other_choice = ShopInput();
                    } while (other_choice != 1 && other_choice != 2 && other_choice != 3);
                    short item_choice;
                    short action_end =0;
                    switch (other_choice) {
                        case 1:
                            do {
                                short number;
                                do {
                                    item_choice = ShopBuyingInput();
                                } while (item_choice != 1 && item_choice != 2 && item_choice != 3 && item_choice != 4);
                                switch (item_choice) {
                                    case 1:
                                        do {
                                            number = ShopNumberItemManager();
                                        } while (joueur1.supcoins < my_items[0].prix_achat*number);
                                        joueur1.nb_items[0] += number;
                                        joueur1.supcoins -= my_items[0].prix_achat*number;
                                        break;
                                    case 2:
                                        do {
                                            number = ShopNumberItemManager();
                                        } while (joueur1.supcoins < my_items[1].prix_achat*number);
                                        joueur1.nb_items[1] += number;
                                        joueur1.supcoins -= my_items[1].prix_achat*number;
                                        break;
                                    case 3:
                                        do {
                                            number = ShopNumberItemManager();
                                        } while (joueur1.supcoins < my_items[2].prix_achat*number);
                                        joueur1.nb_items[2] += number;
                                        joueur1.supcoins -= my_items[2].prix_achat*number;
                                        break;
                                    default:
                                        action_end = 1;
                                        break;
                                }
                            } while (action_end == 0);
                            break;
                        case 2:
                            do {
                                short number;
                                short possible = 0;
                                do {
                                    item_choice = ShopSellingInput(joueur1.nb_items[0], joueur1.nb_items[1], joueur1.nb_items[2]);
                                    if (item_choice == 1 && joueur1.nb_items[0] > 0){
                                        possible = 1;
                                    } else if (item_choice == 2 && joueur1.nb_items[1] > 0){
                                        possible = 1;
                                    } else if (item_choice == 3 && joueur1.nb_items[2] > 0){
                                        possible = 1;
                                    }
                                } while (possible == 0 && item_choice != 4);
                                switch (item_choice) {
                                    case 1:
                                        do {
                                            number = ShopNumberItemManager();
                                        } while (number > joueur1.nb_items[0]);
                                        joueur1.nb_items[0] -= number;
                                        joueur1.supcoins += my_items[0].prix_vente*number;
                                        break;
                                    case 2:
                                        do {
                                            number = ShopNumberItemManager();
                                        } while (number > joueur1.nb_items[1]);
                                        joueur1.nb_items[1] -= number;
                                        joueur1.supcoins += my_items[1].prix_vente*number;
                                        break;
                                    case 3:
                                        do {
                                            number = ShopNumberItemManager();
                                        } while (number > joueur1.nb_items[2]);
                                        joueur1.nb_items[2] -= number;
                                        joueur1.supcoins += my_items[2].prix_vente*number;
                                        break;
                                    default:
                                        action_end = 1;
                                        break;
                                }
                            } while (action_end == 0);
                            break;
                        default:
                            other_end = 1;
                            break;
                    }
                } while (other_end == 0);
                break;
            case 3:
                do {
                    other_choice = SpnCenterInput();
                } while (other_choice != 1 && other_choice != 2);

                if (other_choice == 1){
                    SpnCenterHealing();
                    for (int i = 0; i < 6; i++) {
                        if (joueur1.my_supemon[i].hpmax != 0){
                            joueur1.my_supemon[i].hp = joueur1.my_supemon[i].hpmax;
                        }
                    }
                }
                break;

            default:
                LeaveGame();
                end = 1;
                FILE *myFile = NULL;
                myFile = fopen("..\\Code\\Gamesave.txt", "a+");
                fputs(joueur1.myplayer, myFile);
                putw(joueur1.supcoins, myFile);

                for (int i =0; i<= 5; i++) {
                    if (joueur1.my_supemon[i].hp == 0) {
                        fwrite(&joueur1.my_supemon[i].hp, sizeof(struct joueur), 1, myFile);
                        fwrite(&joueur1.my_supemon[i].myLevel, sizeof(struct joueur), 1, myFile);
                        fwrite(&joueur1.my_supemon[i].experience, sizeof(struct joueur), 1, myFile);
                        fwrite(&joueur1.my_supemon[i].experience_required_to_lvl_up, sizeof(struct joueur), 1, myFile);
                        fwrite(&joueur1.my_supemon[i].hpmax, sizeof(struct joueur), 1, myFile);
                        fwrite(&joueur1.my_supemon[i].base_attack, sizeof(struct joueur), 1, myFile);
                        fwrite(&joueur1.my_supemon[i].base_defense, sizeof(struct joueur), 1, myFile);
                        fwrite(&joueur1.my_supemon[i].base_evasion, sizeof(struct joueur), 1, myFile);
                        fwrite(&joueur1.my_supemon[i].base_accuracy, sizeof(struct joueur), 1, myFile);
                        fwrite(&joueur1.my_supemon[i].attack, sizeof(struct joueur), 2, myFile);
                        fwrite(&joueur1.my_supemon[i].defense, sizeof(struct joueur), 3, myFile);
                        fwrite(&joueur1.my_supemon[i].evasion, sizeof(struct joueur), 4, myFile);
                        fwrite(&joueur1.my_supemon[i].accuracy, sizeof(struct joueur), 5, myFile);
                        fwrite(&joueur1.my_supemon[i].speed, sizeof(struct joueur), 6, myFile);
                        fwrite(&joueur1.my_supemon[i].moves[0].name, sizeof(struct joueur), 7, myFile);
                        fwrite(&joueur1.my_supemon[i].moves[1].name, sizeof(struct joueur), 8, myFile);
                    }
                }
                for (int i =0; i<= 2; i++) {
                    if (joueur1.nb_items[i] == 0) {
                        putw(joueur1.nb_items[i], myFile);
                    }
                }
                break;
        }
    } while (end == 0);
}
