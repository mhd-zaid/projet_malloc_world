//
//  maps.h
//  MALLOC_WORLD
//
//  Created by Zinedine Megnouche on 18/10/2021.
//

#ifndef maps_h
#define maps_h

#include <stdio.h>
//int longMapRandom(int min,int max);

int** createMap(int size,char zone);
void movePlayer(int** map,int size);
int randomNumber(int min,int max);
void playGame(int** map,int longueur);
void wall(int** map,int size);
void monsterSpawn(int** map,int size,char zone);
void playerSpawn(int** map,int size);
int longMap(int** map);
void printMap(int** maps,int size);
void addCase(int** map,int longueurMap,int value);
void ressourceMap(int** map,int longueurMap,char zone);
int** actionPlayer(int** map,int longueur,char move);
#endif /* maps_h */
