/*
** Filename : structures
**
** Made by : Messai Rafiq - Megnouche Zinedine - Mouhamad Zaid 
**
** Description : contains all the structures necessary for the game.
*/

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

typedef struct Craft
{
    char*name;
    int storage;
} Craft;

typedef struct Inventory
{
    int* storage;
    Craft* ressources;
} Craft;

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
