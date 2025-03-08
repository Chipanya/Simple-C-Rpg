#include <stdio.h>

int displayMenu();

//Create like 3 rooms
/**
 * have player look around
 * check player inventory (ds?)
 * turn based combat at end, fight dragon?
 */

/*
just do the fight, 3 rooms ,generate a random enemy type for first 2, then dragon, get an item
menu at end to add stats change items (equip)
*/

struct inventory{

};

struct player{
    int health,dmg,strength;
    char hat[25];
};

struct monster{
    int health;
    int strength;
    int dmg;
    int expValue;
};


int main(){

    printf("Welcome to the Dungeon!\n");
    int choice;

    do
    {
        choice = displayMenu();
    } while (choice != 4);
    
    

    return 0;
}

int displayMenu(){
    int choice;

    printf("Choose an option\n1. Move to next room\n2.Check inventory\n3. Check stats\n4.Check Room Info\n5. Quit\n");
    scanf("%d", &choice);
    switch (choice){
    case 1:
        printf("go to next room\n");
        break;
    case 2:
        printf("inventory\n");
        break;
    case 3:
        printf("stats\n");
        break;
    case 4:
        printf("Room info\n");
        break;
    default:
        printf("Enter a number between 1 and 5\n");
        break;
    }
    return choice;
}