#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "characters.h"
#include "game.h"
#include "player.h"
#include "gacha.h"
#include <assert.h>

void printGachaMenu(tPlayer *player)
{

    int *option = malloc(sizeof(int));
    bool *retCondition = malloc(sizeof(bool)); // liiipicotres: if false, won't finish the loop

    printf("Gacha system\n");

    do
    {
        
        printf("1. Single Roll\n");
        printf("2. 10x Roll\n");
        printf("3. Exit\n");
        scanf("%d", option);
        assert(*option > 0 && *option < 4);

        // liiipicotres: Check if the player has enough currency to roll. If not, will not allow the player to roll
        if ((player->currency < 160 && *option == 1) || (player->currency < 1600 && *option == 2))
        {
            printf("F2p, no money?? lmao\n");
        }
        else
        {
            *retCondition = true;
        }

    } while (*retCondition == false);

    switch (*option)
    {
    case 1:

        printf("Single Roll\n");
        break;

    case 2:
        printf("10x Roll\n");
        break;

    case 3:
        printf("Exit\n");
        break;
    }
}