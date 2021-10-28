#include <stdio.h>
#include "data.c"

int main(int argc, char *argv[])
{
    alimentationDonnees();
    printf("%d\n", DiamondSpear.damage);
    printf("%d\n", DiamondSpear.durability);
}