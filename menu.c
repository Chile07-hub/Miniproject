#include <stdio.h>

int main()
{
    int choice, item, qty;
    int totalBill = 0;

    int chicken65Qty = 0, dragonChickenQty = 0, paneerPakodaQty = 0;
    int chickenMasalaQty = 0, chickenAfghaniQty = 0, chickenTandooriQty = 0;
    int iceCreamQty = 0, cakeQty = 0, fruitSaladQty = 0;
    int softDrinkQty = 0, freshJuiceQty = 0;

    printf("<-----Chile's Restaurant----->\n\n");
    printf("Welcome to our restaurant\n");
    printf("Order your food\n");

    while(1) //1 means true restaurent should continue until user select exit so menu keep repeting
    {
        printf("\nRestaurant Menu\n");
        printf("1. Starter\n");
        printf("2. Main Course\n");
        printf("3. Dessert\n");
        printf("4. Beverages\n");
        printf("5. Exit\n\n");

        printf("Your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // STARTER
            case 1:
            {
                int visitChicken65 = 0; // these stores order for current vist only
                int visitDragonChicken = 0;
                int visitPaneerPakoda = 0;
                int visitTotal = 0;

                while(1)
                {
                    printf("\nStarter Menu\n");
                    printf("1. Chicken 65       - Rs.200\n");
                    printf("2. Dragon Chicken   - Rs.250\n");
                    printf("3. Paneer Pakoda    - Rs.180\n");
                    printf("4. Back\n\n");

                    printf("Select your starter: ");
                    scanf("%d", &item);

                    if(item == 4)
                    {
                        printf("\n====================================\n");
                        printf("      STARTER ORDER SUMMARY\n");
                        printf("====================================\n");

                        if(visitChicken65)
                            printf("Chicken 65       %d      Rs.%d\n",
                                   visitChicken65,
                                   visitChicken65 * 200);

                        if(visitDragonChicken)
                            printf("Dragon Chicken   %d      Rs.%d\n",
                                   visitDragonChicken,
                                   visitDragonChicken * 250);

                        if(visitPaneerPakoda)
                            printf("Paneer Pakoda    %d      Rs.%d\n",
                                   visitPaneerPakoda,
                                   visitPaneerPakoda * 180);

                        printf("------------------------------------\n");
                        printf("Visit Total : Rs.%d\n", visitTotal);
                        printf("====================================\n");
                        break;
                    }

                    printf("Enter quantity: ");
                    scanf("%d", &qty);

                    if(qty <= 0)
                    {
                        printf("Invalid Quantity\n");
                        continue;
                    }

                    switch(item)
                    {
                        case 1:
                            chicken65Qty += qty;
                            visitChicken65 += qty;
                            totalBill += qty * 200;
                            visitTotal += qty * 200;
                            printf("Added %d plates of Chicken 65\n", qty);
                            break;

                        case 2:
                            dragonChickenQty += qty;
                            visitDragonChicken += qty;
                            totalBill += qty * 250;
                            visitTotal += qty * 250;
                            printf("Added %d plates of Dragon Chicken\n", qty);
                            break;

                        case 3:
                            paneerPakodaQty += qty;
                            visitPaneerPakoda += qty;
                            totalBill += qty * 180;
                            visitTotal += qty * 180;
                            printf("Added %d plates of Paneer Pakoda\n", qty);
                            break;

                        default:
                            printf("Invalid Choice\n");
                    }
                }
                break;
            }

            // MAIN COURSE 
            case 2:
            {
                int visitMasala = 0;
                int visitAfghani = 0;
                int visitTandoori = 0;
                int visitTotal = 0;

                while(1)
                {
                    printf("\nMain Course Menu\n");
                    printf("1. Chicken Masala   - Rs.320\n");
                    printf("2. Chicken Afghani  - Rs.350\n");
                    printf("3. Chicken Tandoori - Rs.380\n");
                    printf("4. Back\n\n");

                    printf("Select your main course: ");
                    scanf("%d", &item);

                    if(item == 4)
                    {
                        printf("\n====================================\n");
                        printf("    MAIN COURSE ORDER SUMMARY\n");
                        printf("====================================\n");

                        if(visitMasala)
                            printf("Chicken Masala    %d      Rs.%d\n",
                                   visitMasala,
                                   visitMasala * 320);

                        if(visitAfghani)
                            printf("Chicken Afghani   %d      Rs.%d\n",
                                   visitAfghani,
                                   visitAfghani * 350);

                        if(visitTandoori)
                            printf("Chicken Tandoori  %d      Rs.%d\n",
                                   visitTandoori,
                                   visitTandoori * 380);

                        printf("------------------------------------\n");
                        printf("Visit Total : Rs.%d\n", visitTotal);
                        printf("====================================\n");
                        break;
                    }

                    printf("Enter quantity: ");
                    scanf("%d", &qty);

                    if(qty <= 0)
                    {
                        printf("Invalid Quantity\n");
                        continue;
                    }

                    switch(item)
                    {
                        case 1:
                            chickenMasalaQty += qty;
                            visitMasala += qty;
                            totalBill += qty * 320;
                            visitTotal += qty * 320;
                            printf("Added %d plates of Chicken Masala\n", qty);
                            break;

                        case 2:
                            chickenAfghaniQty += qty;
                            visitAfghani += qty;
                            totalBill += qty * 350;
                            visitTotal += qty * 350;
                            printf("Added %d plates of Chicken Afghani\n", qty);
                            break;

                        case 3:
                            chickenTandooriQty += qty;
                            visitTandoori += qty;
                            totalBill += qty * 380;
                            visitTotal += qty * 380;
                            printf("Added %d plates of Chicken Tandoori\n", qty);
                            break;

                        default:
                            printf("Invalid Choice\n");
                    }
                }
                break;
            }

            // DESSERT
            case 3:
            {
                int visitIceCream = 0;
                int visitCake = 0;
                int visitFruitSalad = 0;
                int visitTotal = 0;

                while(1)
                {
                    printf("\nDessert Menu\n");
                    printf("1. Ice Cream        - Rs.80\n");
                    printf("2. Cake             - Rs.100\n");
                    printf("3. Fruit Salad      - Rs.100\n");
                    printf("4. Back\n\n");

                    printf("Select your dessert: ");
                    scanf("%d", &item);

                    if(item == 4)
                    {
                        printf("\n====================================\n");
                        printf("      DESSERT ORDER SUMMARY\n");
                        printf("====================================\n");

                        if(visitIceCream)
                            printf("Ice Cream         %d      Rs.%d\n",
                                   visitIceCream,
                                   visitIceCream * 80);

                        if(visitCake)
                            printf("Cake              %d      Rs.%d\n",
                                   visitCake,
                                   visitCake * 100);

                        if(visitFruitSalad)
                            printf("Fruit Salad       %d      Rs.%d\n",
                                   visitFruitSalad,
                                   visitFruitSalad * 100);

                        printf("------------------------------------\n");
                        printf("Visit Total : Rs.%d\n", visitTotal);
                        printf("====================================\n");
                        break;
                    }

                    printf("Enter quantity: ");
                    scanf("%d", &qty);

                    if(qty <= 0)
                    {
                        printf("Invalid Quantity\n");
                        continue;
                    }

                    switch(item)
                    {
                        case 1:
                            iceCreamQty += qty;
                            visitIceCream += qty;
                            totalBill += qty * 80;
                            visitTotal += qty * 80;
                            printf("Added %d Ice Cream(s)\n", qty);
                            break;

                        case 2:
                            cakeQty += qty;
                            visitCake += qty;
                            totalBill += qty * 100;
                            visitTotal += qty * 100;
                            printf("Added %d Cake(s)\n", qty);
                            break;

                        case 3:
                            fruitSaladQty += qty;
                            visitFruitSalad += qty;
                            totalBill += qty * 100;
                            visitTotal += qty * 100;
                            printf("Added %d Fruit Salad(s)\n", qty);
                            break;

                        default:
                            printf("Invalid Choice\n");
                    }
                }
                break;
            }

            // BEVERAGES
            case 4:
            {
                int visitSoftDrink = 0;
                int visitFreshJuice = 0;
                int visitTotal = 0;

                while(1)
                {
                    printf("\nBeverages Menu\n");
                    printf("1. Soft Drink       - Rs.40\n");
                    printf("2. Fresh Juice      - Rs.90\n");
                    printf("3. Back\n\n");

                    printf("Select your beverage: ");
                    scanf("%d", &item);

                    if(item == 3)
                    {
                        printf("\n====================================\n");
                        printf("     BEVERAGE ORDER SUMMARY\n");
                        printf("====================================\n");

                        if(visitSoftDrink)
                            printf("Soft Drink       %d      Rs.%d\n",
                                   visitSoftDrink,
                                   visitSoftDrink * 40);

                        if(visitFreshJuice)
                            printf("Fresh Juice      %d      Rs.%d\n",
                                   visitFreshJuice,
                                   visitFreshJuice * 90);

                        printf("------------------------------------\n");
                        printf("Visit Total : Rs.%d\n", visitTotal);
                        printf("====================================\n");
                        break;
                    }

                    printf("Enter quantity: ");
                    scanf("%d", &qty);

                    if(qty <= 0)
                    {
                        printf("Invalid Quantity\n");
                        continue;
                    }

                    switch(item)
                    {
                        case 1:
                            softDrinkQty += qty;
                            visitSoftDrink += qty;
                            totalBill += qty * 40;
                            visitTotal += qty * 40;
                            printf("Added %d Soft Drink(s)\n", qty);
                            break;

                        case 2:
                            freshJuiceQty += qty;
                            visitFreshJuice += qty;
                            totalBill += qty * 90;
                            visitTotal += qty * 90;
                            printf("Added %d Fresh Juice(s)\n", qty);
                            break;

                        default:
                            printf("Invalid Choice\n");
                    }
                }
                break;
            }

            //  EXIT
            case 5:
                printf("\nThank you! Visit again.\n");

                printf("\n==================================================\n");
                printf("                    FINAL BILL\n");
                printf("==================================================\n");
                printf("%-20s %-10s %-10s\n", "Item", "Qty", "Amount");// %-20s string left aligned
                printf("--------------------------------------------------\n");

                if(chicken65Qty)
                    printf("%-20s %-10d Rs.%d\n", "Chicken 65", chicken65Qty, chicken65Qty * 200);

                if(dragonChickenQty)
                    printf("%-20s %-10d Rs.%d\n", "Dragon Chicken", dragonChickenQty, dragonChickenQty * 250);

                if(paneerPakodaQty)
                    printf("%-20s %-10d Rs.%d\n", "Paneer Pakoda", paneerPakodaQty, paneerPakodaQty *180);

                if(chickenMasalaQty)
                    printf("%-20s %-10d Rs.%d\n", "Chicken Masala", chickenMasalaQty, chickenMasalaQty * 320);

                if(chickenAfghaniQty)
                    printf("%-20s %-10d rs.%d\n", "Chicken Afghani", chickenAfghaniQty, chickenAfghaniQty * 350);

                if(chickenTandooriQty)
                    printf("%-20s %-10d Rs.%d\n", "Chicken Tandoori", chickenTandooriQty, chickenTandooriQty * 380);

                if(iceCreamQty)
                    printf("%-20s %-10d Rs.%d\n", "Ice Cream", iceCreamQty, iceCreamQty * 80);

                if(cakeQty)
                    printf("%-20s %-10d Rs.%d\n", "Cake", cakeQty, cakeQty * 100);

                if(fruitSaladQty)
                    printf("%-20s %-10d Rs.%d\n", "Fruit Salad", fruitSaladQty, fruitSaladQty * 100);

                if(softDrinkQty)
                    printf("%-20s %-10d Rs.%d\n", "Soft Drink", softDrinkQty, softDrinkQty * 40);

                if(freshJuiceQty)
                    printf("%-20s %-10d Rs.%d\n", "Fresh Juice", freshJuiceQty, freshJuiceQty * 90);

                printf("--------------------------------------------------\n");
                printf("Total Bill : Rs.%d\n", totalBill);
                printf("==================================================\n");

                return 0;

            default:
                printf("Invalid Choice. Try Again.\n");
        }
    }

    return 0;
}

