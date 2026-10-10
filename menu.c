#include <stdio.h>

int main()
{
    int choice, item, qty;
    int totalBill = 0;

    int vegsandwichQty = 0, cheesesandwichQty = 0, frenchfriesQty = 0;
    int vegburgerQty = 0, cheeseburgerQty = 0, pizzaQty = 0;
    int chocolatecakeQty = 0, brownieQty = 0, icecreamQty = 0;
    int coffeeQty = 0, coldcoffeeQty = 0;

    printf("\n");
    printf("=========================================\n");
    printf("                CHILE'S CAFE             \n");
    printf("=========================================\n");
    printf("             Welcome to Our Cafe\n");
    printf("           Pick Something delicious!\n");
    printf("-----------------------------------------\n");
   
    while(1) //1 means true restaurent should continue until user select exit so menu keep repeting
    {
        printf("           Cafe Menu\n");
        printf("1. Snacks\n");
        printf("2. Main Food\n");
        printf("3. Desserts\n");
        printf("4. Beverages\n");
        printf("5. Exit and Bill\n\n");
        printf("========================================\n");
        printf("\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // SNACKS
            case 1:
            {
                int visitvegsandwich = 0; // these stores order for current vist only
                int visitcheesesandwich = 0;
                int visitfrenchfries = 0;
                int visitTotal = 0;

                while(1)
                {
                    printf("\nSnacks Menu\n");
                    printf("1. Veg Sandwich      - Rs.80\n");
                    printf("2. Cheese Sandwich   - Rs.100\n");
                    printf("3. French Fries      - Rs.90\n");
                    printf("4. Back\n\n");

                    printf("Select your Snacks: ");
                    scanf("%d", &item);

                    if(item == 4)
                    {
                        printf("\n====================================\n");
                        printf("      SNACKS ORDER SUMMARY\n");
                        printf("====================================\n");

                        if(visitvegsandwich)
                            printf("Veg Sandwich       %d      Rs.%d\n",
                                   visitvegsandwich,
                                   visitvegsandwich * 80);

                        if(visitcheesesandwich)
                            printf("Cheese Sandwich    %d      Rs.%d\n",
                                   visitcheesesandwich,
                                   visitcheesesandwich * 100);

                        if(visitfrenchfries)
                            printf("French Fries       %d      Rs.%d\n",
                                   visitfrenchfries,
                                   visitfrenchfries * 90);

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
                            vegsandwichQty += qty;
                            visitvegsandwich += qty;
                            totalBill += qty * 80;
                            visitTotal += qty * 80;
                            printf("Added %d plates of Veg Sandwich\n", qty);
                            break;

                        case 2:
                            cheesesandwichQty += qty;
                            visitcheesesandwich += qty;
                            totalBill += qty * 100;
                            visitTotal += qty * 100;
                            printf("Added %d plates of Cheese Sandwich\n", qty);
                            break;

                        case 3:
                            frenchfriesQty += qty;
                            visitfrenchfries += qty;
                            totalBill += qty * 90;
                            visitTotal += qty * 90;
                            printf("Added %d plates of French Fries\n", qty);
                            break;

                        default:
                            printf("Invalid Choice\n");
                    }
                }
                break;
            }

            // MAIN FOOD
            case 2:
            {
                int visitvegburger = 0;
                int visitcheeseburger = 0;
                int visitpizza = 0;
                int visitTotal = 0;

                while(1)
                {
                    printf("\nMain Food Menu\n");
                    printf("1. Veg Burger     - Rs.120\n");
                    printf("2. Cheese Burger  - Rs.150\n");
                    printf("3. Pizza          - Rs.200\n");
                    printf("4. Back\n\n");

                    printf("Select your main Food: ");
                    scanf("%d", &item);

                    if(item == 4)
                    {
                        printf("\n====================================\n");
                        printf("    MAIN FOOD ORDER SUMMARY\n");
                        printf("====================================\n");

                        if(visitvegburger)
                            printf("Veg Burger      %d      Rs.%d\n",
                                   visitvegburger,
                                   visitvegburger * 120);

                        if(visitcheeseburger)
                            printf("Cheese Burger   %d      Rs.%d\n",
                                   visitcheeseburger,
                                   visitcheeseburger * 150);

                        if(visitpizza)
                            printf("Pizza           %d      Rs.%d\n",
                                   visitpizza,
                                   visitpizza * 200);

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
                            vegburgerQty += qty;
                            visitvegburger += qty;
                            totalBill += qty * 120;
                            visitTotal += qty * 120;
                            printf("Added %d plates of Veg Burger\n", qty);
                            break;

                        case 2:
                            cheeseburgerQty += qty;
                            visitcheeseburger += qty;
                            totalBill += qty * 150;
                            visitTotal += qty * 150;
                            printf("Added %d plates of Cheese Burger\n", qty);
                            break;

                        case 3:
                            pizzaQty += qty;
                            visitpizza += qty;
                            totalBill += qty * 200;
                            visitTotal += qty * 200;
                            printf("Added %d plates of Pizza\n", qty);
                            break;

                        default:
                            printf("Invalid Choice\n");
                    }
                }
                break;
            }

            // DESSERTS
            case 3:
            {
                int visitchocolatecake = 0;
                int visitbrownie = 0;
                int visiticecream = 0;
                int visitTotal = 0;

                while(1)
                {
                    printf("\nDessert Menu\n");
                    printf("1. Chocolate Cake        - Rs.100\n");
                    printf("2. Brownie               - Rs.120\n");
                    printf("3. Ice Cream             - Rs.80\n");
                    printf("4. Back\n\n");

                    printf("Select your Dessert: ");
                    scanf("%d", &item);

                    if(item == 4)
                    {
                        printf("\n====================================\n");
                        printf("      DESSERT ORDER SUMMARY\n");
                        printf("====================================\n");

                        if(visitchocolatecake)
                            printf("Chocolate Cake         %d      Rs.%d\n",
                                   visitchocolatecake,
                                   visitchocolatecake * 80);

                        if(visitbrownie)
                            printf("Brownie                %d      Rs.%d\n",
                                   visitbrownie,
                                   visitbrownie * 100);

                        if(visiticecream)
                            printf("Ice Cream              %d      Rs.%d\n",
                                   visiticecream,
                                   visiticecream * 100);

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
                            chocolatecakeQty += qty;
                            visitchocolatecake += qty;
                            totalBill += qty * 100;
                            visitTotal += qty * 100;
                            printf("Added %d Chocolate Cake(s)\n", qty);
                            break;

                        case 2:
                            brownieQty += qty;
                            visitbrownie += qty;
                            totalBill += qty * 120;
                            visitTotal += qty * 120;
                            printf("Added %d brownie(s)\n", qty);
                            break;

                        case 3:
                            icecreamQty += qty;
                            visiticecream += qty;
                            totalBill += qty * 80;
                            visitTotal += qty * 80;
                            printf("Added %d Ice Cream(s)\n", qty);
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
                int visitcoffee = 0;
                int visitcoldcoffee = 0;
                int visitTotal = 0;

                while(1)
                {
                    printf("\nBeverages Menu\n");
                    printf("1. Coffee           - Rs.60\n");
                    printf("2. Cold Coffee      - Rs.100\n");
                    printf("3. Back\n\n");

                    printf("Select your Beverage: ");
                    scanf("%d", &item);

                    if(item == 3)
                    {
                        printf("\n====================================\n");
                        printf("     BEVERAGE ORDER SUMMARY\n");
                        printf("====================================\n");

                        if(visitcoffee)
                            printf("Coffee           %d      Rs.%d\n",
                                   visitcoffee,
                                   visitcoffee * 60);

                        if(visitcoldcoffee)
                            printf("Cold Coffee      %d      Rs.%d\n",
                                   visitcoldcoffee,
                                   visitcoldcoffee * 100);

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
                            coffeeQty += qty;
                            visitcoffee += qty;
                            totalBill += qty * 60;
                            visitTotal += qty * 60;
                            printf("Added %d Coffee(s)\n", qty);
                            break;

                        case 2:
                            coldcoffeeQty += qty;
                            visitcoldcoffee += qty;
                            totalBill += qty * 100;
                            visitTotal += qty * 100;
                            printf("Added %d Cold Coffee(s)\n", qty);
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

                if(vegsandwichQty)
                    printf("%-20s %-10d Rs.%d\n", "Veg Sandwich", vegsandwichQty, vegsandwichQty * 80);

                if(cheesesandwichQty)
                    printf("%-20s %-10d Rs.%d\n", "Cheese Sandwich", cheesesandwichQty, cheesesandwichQty * 100);

                if(frenchfriesQty)
                    printf("%-20s %-10d Rs.%d\n", "French Fries", frenchfriesQty, frenchfriesQty *90);

                if(vegburgerQty)
                    printf("%-20s %-10d Rs.%d\n", "Veg Burger", vegburgerQty, vegburgerQty * 120);

                if(cheeseburgerQty)
                    printf("%-20s %-10d rs.%d\n", "Cheese Burger", cheeseburgerQty, cheeseburgerQty * 150);

                if(pizzaQty)
                    printf("%-20s %-10d Rs.%d\n", "Pizza", pizzaQty, pizzaQty * 200);

                if(chocolatecakeQty)
                    printf("%-20s %-10d Rs.%d\n", "Chocolate Cake", chocolatecakeQty, chocolatecakeQty * 100);

                if(brownieQty)
                    printf("%-20s %-10d Rs.%d\n", "Brownie", brownieQty, brownieQty * 120);

                if(icecreamQty)
                    printf("%-20s %-10d Rs.%d\n", "Ice Cream", icecreamQty, icecreamQty * 80);

                if(coffeeQty)
                    printf("%-20s %-10d Rs.%d\n", "Coffee", coffeeQty, coffeeQty * 60);

                if(coldcoffeeQty)
                    printf("%-20s %-10d Rs.%d\n", "Cold Coffee", coldcoffeeQty, coldcoffeeQty * 100);

                printf("--------------------------------------------------\n");
                printf("Total Bill : Rs.%d\n", totalBill);
                printf("==================================================\n");

                return 0;

            default:
                printf("Invalid Choice, Try Again\n");
        }
    }

    return 0;
}

