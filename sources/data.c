/*
** Filename : structures
**
** Made by : Messai Rafiq - Megnouche Zinedine - Mouhamad Zaid 
**
** Description : contains all the structures necessary for the game.
*/
#include <stdio.h>
#include "structures.h"

/* Declaration de l'ensemble des armes. */
Arms WoodSword;
Arms StoneSword;
Arms StoneHammer;
Arms StoneSpear;
Arms IronSword;
Arms IronSpear;
Arms IronHammer;
Arms DiamondSword;
Arms DiamondSpear;
Arms DiamondHammer;

/* Declaration de l'ensemble des outils. */
Tools WoodPickaxe;
Tools WoodBillHook;
Tools WoodChopped;
Tools StonePickaxe;
Tools StoneBillHook;
Tools StoneChopped;
Tools IronPickaxe;
Tools IronBillHook;
Tools IronChopped;

/* Declaration Potions de vie. */
Healings LifePotionSmall;
Healings LifePotionMedium;
Healings LifePotionLarge;

/* Declaration d'armures. */
Armors StoneChestPlate;
Armors IronChestPlate;
Armors DiamondChestPlate;

/* Declaration ressources de craft. */
CraftResources Fir;
CraftResources Stone;
CraftResources Grass;
CraftResources Beech;
CraftResources Iron;
CraftResources Lavender;
CraftResources Oak;
CraftResources Diamond;
CraftResources Hemp;


void alimentationDonnees()
{
    /**************************************************/
    WoodSword.name = "Epee en Bois";
    WoodSword.damage = 1;
    WoodSword.durability = 2;
    WoodSword.durabilityMax = 10;

    StoneSword.name = "Epee en Pierre";
    StoneSword.damage = 2;
    StoneSword.durability = 10;
    StoneSword.durabilityMax = 10;

    IronSword.name = "Epee en Fer";
    IronSword.damage = 5;
    IronSword.durability = 10;
    IronSword.durabilityMax = 10;


    DiamondSword.name = "Epee en Diamant";
    DiamondSword.damage = 10;
    DiamondSword.durability = 10;
    DiamondSword.durabilityMax = 10;


    /**************************************************/

    StoneSpear.name = "Lance en Pierre";
    StoneSpear.damage = 3;
    StoneSpear.durability = 8;
    StoneSpear.durabilityMax = 8;


    IronSpear.name = "Lance en Fer";
    IronSpear.damage = 7;
    IronSpear.durability = 8;
    IronSpear.durabilityMax = 8;

    DiamondSpear.name = "Lance en Diamant";
    DiamondSpear.damage = 15;
    DiamondSpear.durability = 8;
    DiamondSpear.durabilityMax = 8;

    /**************************************************/

    StoneHammer.name = "Marteau en Pierre";
    StoneHammer.damage = 4;
    StoneHammer.durability = 8;
    StoneHammer.durabilityMax = 8;

    IronHammer.name = "Marteau en Fer";
    IronHammer.damage = 10;
    IronHammer.durability = 8;
    IronHammer.durabilityMax = 8;

    DiamondHammer.name = "Marteau en Diamant";
    DiamondHammer.damage = 20;
    DiamondHammer.durability = 8;
    DiamondHammer.durabilityMax = 8;

    /**************************************************/

    WoodPickaxe.name = "Pioche en Bois";
    WoodPickaxe.durability = 10;
    WoodPickaxe.durabilityMax = 10;

    StonePickaxe.name = "Pioche en Pierre";
    StonePickaxe.durability = 10;
    StonePickaxe.durabilityMax = 10;

    IronPickaxe.name = "Pioche en Fer";
    IronPickaxe.durability = 10;
    IronPickaxe.durabilityMax = 10;

    /**************************************************/

    WoodBillHook.name = "Serpe en Bois";
    WoodBillHook.durability = 10;
    WoodBillHook.durabilityMax = 10;

    StoneBillHook.name = "Serpe en Pierre";
    StoneBillHook.durability = 10;
    StoneBillHook.durabilityMax = 10;

    IronBillHook.name = "Serpe en Fer";
    IronBillHook.durability = 10;
    IronBillHook.durabilityMax = 10;

    /**************************************************/

    WoodChopped.name = "Hache en Bois";
    WoodChopped.durability = 10;
    WoodChopped.durabilityMax = 10;

    StoneChopped.name = "Hache en Pierre";
    StoneChopped.durability = 10;
    StoneChopped.durabilityMax = 10;

    IronChopped.name = "Hache en Fer";
    IronChopped.durability = 10;
    IronChopped.durabilityMax = 10;

    /**************************************************/

    LifePotionSmall.name = "Potion de vie I";
    LifePotionSmall.restoreLife = 30;

    LifePotionMedium.name = "Potion de vie I";
    LifePotionMedium.restoreLife = 80;

    LifePotionLarge.name = "Potion de vie I";
    LifePotionLarge.restoreLife = 200;

    /**************************************************/

    StoneChestPlate.name = "Plastron en pierre";
    StoneChestPlate.damageResist = 10;

    IronChestPlate.name = "Plastron en fer";
    IronChestPlate.damageResist= 20;

    DiamondChestPlate.name = "Plastron en diamant";
    DiamondChestPlate.damageResist= 40;

    /**************************************************/

    Fir.name = "Sapin";
    Fir.storage = 20;

    Stone.name = "Pierre";
    Stone.storage = 20;

    Grass.name = "Herbe";
    Grass.storage = 20;

    Beech.name = "Hetre";
    Beech.storage = 20;

    Iron.name = "Fer";
    Iron.storage = 20;

    Lavender.name = "Lavende";
    Lavender.storage = 20;

    Oak.name = "Chene";
    Oak.storage = 20;

    Diamond.name = "Diamant";
    Diamond.storage = 20;

    Hemp.name = "Chanvre";
    Hemp.storage = 20; 

   /**************************************************/

}

