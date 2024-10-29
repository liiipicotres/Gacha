#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "characters.h"
#include "game.h"
#include "player.h"
#include "gacha.h"

int main()
{

  setCharactersAtBase(characters);
  //char *aux = NULL;
  //storeFile(&characters[2], aux);
  
  tPlayer jugador;
  jugador.currency = 1000;
  strcpy(jugador.name, "Liiipicotres");
  setCharactersAtBase(jugador.playerCharacterList);

  storePlayerInfo("Prueba", jugador);


  printGachaMenu(&jugador);
  startGame();

  

    return 0;
}