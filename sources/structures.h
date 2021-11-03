/*
** Filename : structures
**
** Made by : Messai Rafiq - Megnouche Zinedine - Mouhamad Zaid 
**
** Description : contains all the structures necessary for the game.
*/

#ifndef structures_h
#define structures_h

typedef struct Arms
{
    char* name;
    int damage;
    int durability;
} Arms;

typedef struct Tools
{
    char* name;
    int durability;
} Tools;

typedef struct Healings
{
    char*name;
    int restoreLife;
} Healings;

typedef struct Armors
{
    char* name;
    int damageResist;
} Armors;

typedef struct CraftResources
{
    char*name;
    int storage;
} CraftResources;

typedef struct Inventory
{
    int storage;
    CraftResources ressources[20];
    Arms arms[20];
    Tools tools[20];
    Healings healings[20];
    Armors armors[20];

} Inventory;

typedef struct Player
{
    int level;
    float experience;
    float CurrentlifePoint;
    int maxLifePoint;
    Inventory inventory;
    

} Player;

typedef struct PNJ
{
    int* storage;
} PNJ;

typedef struct Monster
{
    int monster;
    int level;
    float CurrentlifePoint;
    int maxLifePoint;
    int damage;
} Monster;


#endif /* structures_h */