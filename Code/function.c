//
// Created by Home on 21/02/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include <string.h>

/*
 * if (numStart == 1){
        printf("1-Supameche \n hp: %d\n attack:%d\n defense:%d\n evasion:%d\n accuracy:%d\n speed:%d\n", supameche.hp, supameche.attack, supameche.defense, supameche.evasion, supameche.accuracy, supameche.speed);
    } else if(numStart == 2){
        printf("2-Supapuce \n hp: %d\n attack:%d\n defense:%d\n evasion:%d\n accuracy:%d\n speed:%d\n", supapuce.hp, supapuce.attack, supapuce.defense, supapuce.evasion, supapuce.accuracy, supapuce.speed);
    } else {
        printf("3-Supbizarre \n hp: %d\n attack:%d\n defense:%d\n evasion:%d\n accuracy:%d\n speed:%d\n", supbizarre.hp, supbizarre.attack, supbizarre.defense, supbizarre.evasion, supbizarre.accuracy, supbizarre.speed);
    }
*/

char StartDisplay()
{
    fflush(stdin);
    char name[10];
    printf("_______________________________________\n");
    printf("What is your name ? (10 characters max)\n");
    scanf("%s", &name);
    printf("_______________________________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    printf("____________________________________________________________\n");
    printf("Hello %s\n", name);
    printf("Welcome to the world of Supemon !\n");
    printf("Your journey has just begun in the small city of Supintown !\n");
    printf("____________________________________________________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return name[10];
}

short StartInput()
{
    printf("_____________________\n");
    printf("Choose your starter :\n");
    printf("_____________________\n");
    printf("\n");
    printf("1 - Supameche\n");
    printf("2 - Supapuce\n");
    printf("3 - Supbizarre\n");
    printf("\n");
    printf("1, 2 or 3 : \n");

    fflush(stdin);
    short numStart;
    scanf("%hd", &numStart);
    printf("___________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    switch (numStart) {
        case 1:
            printf("______________________________________________\n");
            printf("Congratulation Supameche is your new Supemon !\n");
            printf("______________________________________________\n");
            for (int i = 0; i < 2; ++i) {
                printf("\n");
            }
            break;
        case 2:
            printf("_____________________________________________\n");
            printf("Congratulation Supapuce is your new Supemon !\n");
            printf("_____________________________________________\n");
            for (int i = 0; i < 2; ++i) {
                printf("\n");
            }
            break;
        case 3:
            printf("_______________________________________________\n");
            printf("Congratulation Supbizarre is your new Supemon !\n");
            printf("_______________________________________________\n");
            for (int i = 0; i < 2; ++i) {
                printf("\n");
            }
            break;
        default:
            printf("_____________\n");
            printf("Wrong number.\n");
            printf("_____________\n");
            for (int i = 0; i < 2; ++i) {
                printf("\n");
            }
            break;
    }
    return numStart;
}


void MainDisplay()
{
    fflush(stdin);
    printf("_______________________________________________________________________\n");
    printf("Welcome to Supintown, a town where everyone wants to be a C developer !\n");
    printf("_______________________________________________________________________\n");
    printf("\n");
    printf("Where do you want to go ?\n");
    printf("\n");
    printf("1 - Into the Wild, to catch or fight some Supemon !\n");
    printf("2 - In the Shop, to buy supplies !\n");
    printf("3 - At the Supemon-Center, to heal your Supemon !\n");
    printf("4 - Or do you simply want to leave the game\n");
    printf("\n");
    printf("1, 2, 3 or 4 : \n");
}

short MainInput()
{
    MainDisplay();
    fflush(stdin);
    short numMain;
    scanf("%hd", &numMain);
    printf("______________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return numMain;
}

void FirstBattleDisplay()
{
    fflush(stdin);
    printf("_________________________\n");
    printf("A wild Supemon appeared !\n");
    printf("_________________________\n");
    printf("\n");
}

void BattleDisplay(short ennemi_name, short ennemi_hp, short player_name, short player_hp)
{
    fflush(stdin);
    printf("Actual Turn\n");
    printf("\n");
    switch (ennemi_name) {
        case 1:
            printf("Enemy : Supameche\n");
            break;
        case 2:
            printf("Enemy : Supapuce\n");
            break;
        default:
            printf("Enemy : Supbizarre\n");
            break;
    }
    printf("_________________________\n");
    printf("Enemy hp : %hd\n", ennemi_hp);
    printf("_________________________\n");
    printf("\n");
    switch (player_name) {
        case 1:
            printf("Player : Supameche\n");
            break;
        case 2:
            printf("Player : Supapuce\n");
            break;
        default:
            printf("Player : Supbizarre\n");
            break;
    }
    printf("_________________________\n");
    printf("Player's hp : %hd\n", player_hp);
    printf("_________________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    printf("What will you do ?\n");
    printf("\n");
    printf("1 - Moves, Skills or whatever they are called !\n");
    printf("2 - Supemon, if your Supemon doesn't feel so good !\n");
    printf("3 - Backpack, because every battle needs items !\n");
    printf("4 - Supeball like Supemon-GO !\n");
    printf("5 - Retreat !\n");
    printf("\n");
    printf("1, 2, 3, 4 or 5 : \n");
}

short BattleInput(short ennemi_name, short ennemi_hp, short player_name, short player_hp)
{
    BattleDisplay(ennemi_name, ennemi_hp, player_name, player_hp);
    fflush(stdin);
    short numBattle;
    scanf("%hd", &numBattle);
    printf("_________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return numBattle;
}

void BattleMovepoolDisplay(short first, short second)
{
    fflush(stdin);
    //movepool
    printf("What will you do ?\n");
    if (first == 1){
        printf("1 - Scratch !\n");
    } else{
        printf("1 - Pound !\n");
    }
    if (second == 2){
        printf("2 - Growl !\n");
    } else if (second == 4){
        printf("2 - Foliage !\n");
    } else{
        printf("2 - Shell !\n");
    }
    printf("3 - Cancel !\n");
    printf("\n");
    printf("1, 2 or 3 : \n");
}

short BattleMovepoolInput(short first, short second)
{
    BattleMovepoolDisplay(first, second);
    fflush(stdin);
    short numMovepool;
    scanf("%hd", &numMovepool);
    printf("___________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return numMovepool;
}

void BattleSupemonDisplay()
{
    fflush(stdin);
    //Supemon-list
    printf("Who will you choose for battle ?\n");
    printf("1 - First Supemon !\n");
    printf("2 - Second Supemon !\n");
    printf("3 - Third Supemon !\n");
    printf("4 - Fourth Supemon !\n");
    printf("5 - Fifth Supemon !\n");
    printf("6 - Sixth Supemon !\n");
    printf("7 - Cancel !\n");
    printf("\n");
    printf("1, 2, 3, 4, 5, 6 or 7 : \n");
}

short BattleSupemonInput()
{
    BattleSupemonDisplay();
    fflush(stdin);
    short numSupemon;
    scanf("%hd", &numSupemon);
    printf("_______________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return numSupemon;
}

void BattleItemsDisplay(short potion, short super_potion, short rare_candy)
{
    fflush(stdin);
    //Items-list
    printf("Backpack Items  :\n");
    printf("\n");
    printf("__________________\n");
    printf("1 - Potion : %hd\n", potion);
    printf("2 - Super Potion %hd\n", super_potion);
    printf("3 - Rare candy %hd\n", rare_candy);
    printf("4 - Go back\n");
    printf("__________________\n");
    printf("\n");
    printf("1, 2, 3 or 4 : \n");
}

short BattleItemsInput(short potion, short super_potion, short rare_candy)
{
    BattleItemsDisplay(potion, super_potion, rare_candy);
    fflush(stdin);
    short numItems;
    scanf("%hd", &numItems);
    printf("______________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return numItems;
}

void BattleSpnCatchingDisplay(short success)
{
    fflush(stdin);
    //Supemon-catchdng text
    printf("________________________________________\n");
    printf("The wild Supemon entered the Supeball  :\n");
    printf("________________________________________\n");
    printf("Tic\n");
    printf("\n");
    printf("Tic\n");
    printf("\n");
    if (success == 1) {
        printf("Tic, catched !\n");
    } else {
        printf("Tic, Failed\n");
    }
    printf("_________________________________________________________\n");
    printf("Congratulation you've catch a new Supemon for your team !\n");
    printf("_________________________________________________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
}

short ReplaceSupemonCatch()
{
    short choice;
    printf("What Supemon do you want to replace : 1, 2, 3, 4, 5 or 6: \n");
    scanf("%hd", &choice);
    printf("_________________________________________________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return choice;
}

void BattleRunawayDisplay(short success)
{
    fflush(stdin);
    //Runaway text
    if (success == 1) {
        printf("________________________\n");
        printf("You escaped the battle !\n");
        printf("________________________\n");
        for (int i = 0; i < 2; ++i) {
            printf("\n");
        }
    } else {
        printf("_______________________\n");
        printf("You failed to escaped !\n");
        printf("_______________________\n");
        for (int i = 0; i < 2; ++i) {
            printf("\n");
        }
    }
}

void BattleWinDisplay()
{
    printf("____________________\n");
    printf("You win the battle !\n");
    printf("____________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
}

void BattleLooseDisplay()
{
    printf("____________________\n");
    printf("You lost the battle.\n");
    printf("____________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
}


void ShopDisplay()
{
    fflush(stdin);
    printf("_________________________________________________________________________________________________________________\n");
    printf("Welcome to my humble shop !\n");
    printf("Lamp oil. Rope? BOMBS? You want it? Sorry Link, I can't GIVE credit! Come back when you're a little, mmm, richer!\n");
    printf("_________________________________________________________________________________________________________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    printf("How can I help you ?\n");
    printf("\n");
    printf("1 - Buy what's on the list !\n");
    printf("2 - Sell some goods !\n");
    printf("3 - Back to the city !\n");
    printf("\n");
    printf("1, 2 or 3 : \n");
}

short ShopInput()
{
    ShopDisplay();
    fflush(stdin);
    short numShop;
    scanf("%hd", &numShop);
    printf("___________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return numShop;
}

void ShopBuyingDisplay()
{
    fflush(stdin);
    //Buying Items
    printf("Items :\n");
    printf("________________\n");
    printf("1 - Potion\n");
    printf("2 - Super Potion\n");
    printf("3 - Rare candy\n");
    printf("4 - Go back\n");
    printf("________________\n");
    printf("\n");
    printf("1, 2, 3 or 4 : \n");
}

short ShopBuyingInput()
{
    ShopBuyingDisplay();
    fflush(stdin);
    short numBuy;
    scanf("%hd", &numBuy);
    printf("______________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return numBuy;
}

short ShopNumberItemManager()
{
    fflush(stdin);
    short number;
    printf("How many ?\n");
    scanf("%hd", &number);
    printf("__________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return number;
}

void ShopSellingDisplay(short potion, short super_potion, short rare_candy)
{
    fflush(stdin);
    //Selling Items
    printf("Selling Items  :\n");
    printf("________________\n");
    printf("1 - Potion : %hd\n", potion);
    printf("2 - Super Potion %hd\n", super_potion);
    printf("3 - Rare candy %hd\n", rare_candy);
    printf("4 - Go back\n");
    printf("________________\n");
    printf("\n");
    printf("1, 2, 3 or 4 : \n");
}

short ShopSellingInput(short potion, short super_potion, short rare_candy)
{
    ShopSellingDisplay(potion, super_potion, rare_candy);
    fflush(stdin);
    short numSell;
    scanf("%hd", &numSell);
    printf("______________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return numSell;
}

void SpnCenterDisplay()
{
    fflush(stdin);
    printf("_______________________________\n");
    printf("Welcome to our Supemon-center !\n");
    printf("_______________________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    printf("Shall we heal your Supemon ?\n");
    printf("\n");
    printf("1 - Heal !\n");
    printf("2 - Back to the city !\n");
    printf("\n");
    printf("1 or 2 : \n");
}

short SpnCenterInput()
{
    SpnCenterDisplay();
    fflush(stdin);
    short numSpnCenter;
    scanf("%hd", &numSpnCenter);
    printf("________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
    return numSpnCenter;
}

void SpnCenterHealing()
{
    printf("___________________________________\n");
    printf("Your Supemon are now fully healed !");
    printf("___________________________________\n");
    for (int i = 0; i < 2; ++i) {
        printf("\n");
    }
}

void LeaveGame()
{

}
