#ifndef PROTO_H
#define PROTO_H

#include "defs.h"
#include "hackman.h"

#define PXPF 4

void displayGameOver(void);
void drawStartScreen(void);
void drawBoard(boolean);
void drawPlayer(Player*,boolean);
void drawLives(void);
void drawScore(void);
void displayFruit(Player*);
void getReady(void);
void displayDots(uint8_t,uint8_t,boolean,boolean);
void deathAnimation(void);
void displayEatScore(void);
uint8_t getControl(void);
void startMelody(void);
void eatSound(void);
void clearScreen(void);

#endif //PROTO_H
