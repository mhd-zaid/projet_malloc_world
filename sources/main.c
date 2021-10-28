#include <stdio.h>
#include "data.c"

int main(int argc, char *argv[])
{
    alimentationDonnees();
    printf("%s\n", DiamondSpear.name);
    printf("%d\n", DiamondSpear.damage);
    printf("%d\n", DiamondSpear.durability);
}