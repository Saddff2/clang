#include <stdio.h>


int main(void)

{
    int item, day, month, year;
    float price;
    printf("Введите item number и price и дату: ");
    scanf("%d %f %d /%d /%d", &item, &price, &day, &month, &year);
    printf("item \t Unit \t\t Purchase\n \t Price \t\t Date\n %d \t $ %.2f \t %d/%d/%d\n", item, price, day, month, year);
    return 0;
}
