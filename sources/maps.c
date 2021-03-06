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


void ressourceMap(int** map,int longueurMap,char zone){
    int elementZone;
    switch (zone) {
        case 1:
             elementZone = 3;
            break;
        case 2:
            elementZone = 6;
            break;
        case 3:
            elementZone = 9;
            break;
        default:elementZone = 3;
            break;
    }
   // int elementZone =3;
    int nbElement = randomNumber(3, 15);
    printf("%d ressources \n",nbElement);
    for (int count=0; count<3; count+=1) {
        for(int i= 0;i<nbElement;i+=1){
            addCase(map, longueurMap, elementZone);
        }
        elementZone+=1;
    }

}
void wall(int** map,int longueurMap){
    int wall = -1;
    int nbElementZone = randomNumber(2, 5);
    printf("%d murs \n",nbElementZone);
    for (int i=0; i<nbElementZone; i+=1) {
        addCase(map, longueurMap, wall);
    }
}
void teleporterZone(int** map,int longueurMap,char zoneNum){
    int portal;
    switch (zoneNum) {
        case 1:
            portal = -2;
            addCase(map, longueurMap, portal);
            break;
        case 2:
            portal = -2;
            addCase(map, longueurMap, portal);
            portal = -3;
            addCase(map, longueurMap, portal);
            break;
        case 3:
            portal = -3;
            addCase(map, longueurMap, portal);
            break;
    }
    
}
void addCase(int** map,int longueurMap,int value){
    int x = randomNumber(0, longueurMap-1);
    int y = randomNumber(0, longueurMap-1);
    if(map[x][y] != 0){
        while (map[x][y] != 0) {
            x = randomNumber(0, longueurMap-1);
            y = randomNumber(0, longueurMap-1);
        }
    }
    map[x][y] = value;
}
void monsterSpawn(int** map,int longueurMap,char zone){
    int x = 0;
    int y = 0;
    int nbMonsters = randomNumber(10, 15);
    printf("%d monstres \n",nbMonsters);
        for(int i= 0;i<nbMonsters;i+=1){
            /*x=randomNumber(0,longueurMap-1);
            y=randomNumber(0,longueurMap-1);*/
            //printf("x: %d, y: %d ; ",x,y);
            int monster = randomNumber(12, 97);
            switch (zone) {
                case 1:
                    monster = randomNumber(12, 35);
                    break;
                case 2:
                    monster = randomNumber(35, 69);
                    break;
                case 3:
                    monster = randomNumber(69, 97);
                    break;
            }
            addCase(map, longueurMap, monster);
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
    //addCase(map, longueurMap, 1);
    map[2][2] =1;
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
void playGame(int** map,int longueur){
    do {
        printf("deplacement joueur \n");
        movePlayer(map,longueur);
        
    } while (1);
}
void movePlayer(int** map,int longueur){
    char keyPress = 0;
    scanf("%c",&keyPress);
         switch (keyPress)
        {
            case 'z':
                printf("keypress = %c      ",keyPress);
                actionPlayer(map,longueur,keyPress);
                scanf("%c",&keyPress);
                printMap(map,longueur);
                break;
            case 's':
                actionPlayer(map,longueur,keyPress);
                scanf("%c",&keyPress);
                printMap(map,longueur);
                break;
            case 'q':
                actionPlayer(map,longueur,keyPress);
                scanf("%c",&keyPress);
                printMap(map,longueur);
                break;
            case 'd':
                actionPlayer(map,longueur,keyPress);
                scanf("%c",&keyPress);
                printMap(map,longueur);
                break;
        }
}

int** actionPlayer(int** map,int longueur,char move){
    
    for (int i = 0; i <= longueur-1; i+=1)
    {
        for (int j = 0; j <= longueur-1; j+=1)
        {
            if (map[i][j] == 1)
            {
                switch (move)
                {
                    case 'z':
                        //printf("cas Z up --------");
                        if(i-1 >=0 && map[i-1][j] != -1){
                            map[i][j]= 0;
                            map[i-1][j]= 1;
                        }
                       // printMap(map, longueur);
                        return map;
                        break;
                    case 's':
                       // printf("%d longueurr-----",longueur);
                       // printf("%d : i+1-----",i+1);
                        if(i+1<=longueur-1 && map[i+1][j] != -1){
                            map[i][j]= 0;
                            map[i+1][j]= 1;
                        }
                        return map;
                        break;
                    case 'q':
                        if(j-1 >=0 && map[i][j-1]!= -1){
                            map[i][j]= 0;
                            map[i][j-1]= 1;
                        }
                        return map;
                        break;
                    case 'd':
                        if(j+1<=longueur-1 && map[i][j+1]!= -1){
                            map[i][j]= 0;
                            map[i][j+1]= 1;
                        }
                        return map;
                        break;
                }

            }
            
        }
        
    }
    return map;
    
}

int** createMap(int size,char zone){
    // ---------------- LONGUEUR ALEATOIRE PB ------------------------//
    //  int longueur = randomNumber(8, 15);
    
    //------------------- LONGUEUR VALEUR PAR DEFAUT ---------------------//
   // int longueur = 14;
    printf("----------------ZONE %d ---------------",zone);
    int** maps = malloc(size*sizeof(int*));
    for(int i=0;i<size;i+=1){
        maps[i] = malloc(size*sizeof(int));
        for (int j=0; j<size; j+=1) {
            maps[i][j] = 0;
        }
    }
    
    ressourceMap(maps, size,zone);
    wall(maps, size);
    playerSpawn(maps, size);
    teleporterZone(maps, size,zone);
    monsterSpawn(maps, size,zone);
    return maps;
}

   // return map;

void printMap(int** maps,int longueur){
    printf("%s","------------------------------------MAPS---------------------------------\n \n");
  //  *pLong;
    for (int i=0; i<longueur;i+=1) {
        for (int j=0; j<longueur; j+=1) {
            printf("%3d",maps[i][j]);
        }
        printf("\n");
        printf("\n");
    }
    printf("%d test ------   ",maps[4][5]);
}
