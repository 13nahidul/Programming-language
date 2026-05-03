#include <stdio.h>

struct Item {
    char name[50];
    int units;
    float price_per_unit;
    float total;
};

int main() {
    struct Item items[3];
    float grand_total = 0;

    // Input
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for item %d\n", i + 1);

        printf("Item Name: ");
        scanf(" %[^\n]", items[i].name);

        printf("Number of Units: ");
        scanf("%d", &items[i].units);

        printf("Price per Unit: ");
        scanf("%f", &items[i].price_per_unit);

        // Calculate total for each item
        items[i].total = items[i].units * items[i].price_per_unit;

        grand_total += items[i].total;
    }

    // Print categorized bill
    printf("\n\n====== GROCERY BILL ======\n");
    printf("%-15s %-10s %-15s %-10s\n", "Name", "Units", "Price/Unit", "Total");

    for (int i = 0; i < 3; i++) {
        printf("%-15s %-10d %-15.2f %-10.2f\n",
               items[i].name,
               items[i].units,
               items[i].price_per_unit,
               items[i].total);
    }

    printf("\nGrand Total: %.2f\n", grand_total);

    return 0;
}
