//
// Created by Home on 21/02/2024.
//

#ifndef PROJETC_FUNCTION_H
#define PROJETC_FUNCTION_H


char StartDisplay();
short StartInput();


short MainInput();

void FirstBattleDisplay();
short BattleInput(short ennemi_name, short ennemi_hp, short player_name, short player_hp);

short BattleMovepoolInput(short first, short second);

short BattleSupemonInput();

short BattleItemsInput(short potion, short super_potion, short rare_candy);

void BattleSpnCatchingDisplay(short success);
short ReplaceSupemonCatch();

void BattleRunawayDisplay(short success);
void BattleWinDisplay();
void BattleLooseDisplay();


short ShopInput();
short ShopBuyingInput();
short ShopNumberItemManager();
short ShopSellingInput(short potion, short super_potion, short rare_candy);


short SpnCenterInput();
void SpnCenterHealing();

void LeaveGame();

#endif //PROJETC_FUNCTION_H