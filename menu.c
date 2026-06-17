#include <stdio.h>

int main()
{
    char option;
    printf("<-----Welcome to chile's Restaurent----->\n\n");
    printf("Pleases order\n");

    printf("1.Starter\n2.Main Course\n3.Desser\n4.exit\n");
    scanf("%c", &option);

    switch(option)
    {
        case'1':
        printf("You have choose starter\n");
        printf("1.chicken 65\n2.Dragon chicken\n3.paneer pakoda\n");
        break;

        case'2':
        printf("You have choose main course\n");
        printf("1.chicken masala\n2.chicken afghani\n3.chicken Tandoori\n");
        break;

        case'3':
        printf("You have choose Dessert\n");
        printf("1.Ice cream\n2.cake\n3.food\n");
        break;

        case'4':
        printf("Thankyou Visit again\n");
        break;

        default:
        printf("Bad luck Vist next Time\n");


    }
    return 0;
    
}

