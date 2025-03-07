#include <stdio.h>

//Create like 3 rooms
/**
 * have player look around
 * check player inventory (ds?)
 * turn based combat at end, fight dragon?
 */

struct player{
    int health,dmg,strength;
    char hat[25];
};

int main(){

    printf("Welcome to the Dungeon!\n");
    int choice;

    do{
        printf("Select an option\n1.\t Look\n2. Open Door\n3.\t Inventory\n4.\t Quit\n");
        scanf("%d", &choice);
    }while (choice != 4);
    

    return 0;
}