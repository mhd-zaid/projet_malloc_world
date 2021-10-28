//
//  maps.c
//  MALLOC_WORLD
//
//  Created by Zinedine Megnouche on 18/10/2021.
//

#include "maps.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fonction qui génére un entier aléatoire qui attend en paramètre un min et un max

int randomNumber(int min,int max){
    int random = (rand()%(max-min + 1)) + min;
    //printf("%d \n",random);
    return random;
}


void ressourceMap(int** map,int longueurMap){
    int x = 0;
    int y = 0;
    int elementZone =3;
    int nbElement = randomNumber(3, 15);
    printf("%d ressources \n",nbElement);
    for (int count=0; count<3; count+=1) {
        for(int i= 0;i<nbElement;i+=1){
            x=randomNumber(0,longueurMap-1);
            y=randomNumber(0,longueurMap-1);
            if (map[x][y]== 0) {
                map[x][y] = elementZone;
            }
            else{
               i-=1;
                }
        }
        elementZone+=1;
    }

}
void wall(int** map,int longueurMap){
    int wall = -1;
    int nbElementZone = randomNumber(2, 5);
    printf("%d murs \n",nbElementZone);
    for (int i=0; i<nbElementZone; i+=1) {
        int x = randomNumber(0, longueurMap-1);
        int y = randomNumber(0, longueurMap-1);
        map[x][y] = wall;
    }
}
void teleporterZone(int** map,int longueurMap,char zoneNum){
    int x = randomNumber(0, longueurMap-1);
    int y = randomNumber(0, longueurMap-1);
    int portal;
    switch (zoneNum) {
        case 1:
            portal = -2;
            x = randomNumber(0, longueurMap-1);
            y = randomNumber(0, longueurMap-1);
            map[x][y] = portal;
            break;
        case 2:
            portal = -2;
            x = randomNumber(0, longueurMap-1);
            y = randomNumber(0, longueurMap-1);
            map[x][y] = portal;
            portal = -3;
            x = randomNumber(0, longueurMap-1);
            y = randomNumber(0, longueurMap-1);
            map[x][y] = portal;
            break;
        case 3:
            portal = -3;
            x = randomNumber(0, longueurMap-1);
            y = randomNumber(0, longueurMap-1);
            map[x][y] = portal;
            break;
    }
    
}
void monsterSpawn(int** map,int longueurMap,char zone){
    int x = 0;
    int y = 0;
    int nbMonsters = randomNumber(10, 15);
    printf("%d monstres \n",nbMonsters);
        for(int i= 0;i<nbMonsters;i+=1){
            x=randomNumber(0,longueurMap-1);
            y=randomNumber(0,longueurMap-1);
            //printf("x: %d, y: %d ; ",x,y);
            int monster = randomNumber(12, 97);
            if(zone == 1){
                monster = randomNumber(12, 35);
            }
            else if(zone == 2){
                monster = randomNumber(35, 69);
            }
            else{
                monster = randomNumber(69, 97);
            }
            
            if (map[x][y]== 0) {
                map[x][y] = monster;
            }
            else{
                i-=1;
            }
        }
    if (zone == 3) {
        int monster =98;
        x = longueurMap-2;
        y = randomNumber(2, longueurMap-2);
        map[x][y]= monster;
        x +=1;
        map[x][y]= monster+1;
        map[x][y-1]= -1;
        map[x][y+1]= -1;
    }
}

void playerSpawn(int** map,int longueurMap){
    int x = randomNumber(0, longueurMap-1);
    int y = randomNumber(0, longueurMap-1);
    map[x][y] = 1;
}

/*int longMap(int** map){
    int count =0;
    int i =0;
   // int j =0;
    while (map[0][i] == '\0') {
        count+=1;
        i+=1;
    }
  //  printf("%d        ,longMAP _______________",count);
    return count;
}*/
void movePlayer(int** map,int longueur){
}
/*void actionPlayer(){
    char action;
    printf("move: ");
    scanf("%c",&action);
    
    switch (action) {
        case 'z':
            
            break;
        case 'q':
            
            break;
        case 'd':
            
            break;
        case 's':
            
            break;
        default:
            break;
    }
}*/
int** createMap(int size,char zone){
    /* ---------------- LONGUEUR ALEATOIRE PB ------------------------*/
    //  int longueur = randomNumber(8, 15);
    
    /*------------------- LONGUEUR VALEUR PAR DEFAUT ---------------------*/
   // int longueur = 14;
    
    int** maps = malloc(size*sizeof(int*));
    for(int i=0;i<size;i+=1){
        maps[i] = malloc(size*sizeof(int));
        for (int j=0; j<size; j+=1) {
            maps[i][j] = 0;
        }
    }
    
    monsterSpawn(maps, size,zone);
    ressourceMap(maps, size);
    wall(maps, size);
    playerSpawn(maps, size);
    teleporterZone(maps, size,zone);
    return maps;
}

   // return map;

void printMap(int** maps,int longueur){
    printf("%s","------------------------------------MAPS---------------------------------\n \n");
  //  *pLong;
    for (int i=0; i<longueur;i+=1) {
        for (int j=0; j<longueur; j+=1) {
            printf("%d    ",maps[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}
