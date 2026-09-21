#include <stdio.h>


int main(void)

{
    int day, month, year;
    printf("Введите дату: ");
    scanf("%d /%d /%d", &day, &month, &year);
    printf("Your date is: %d%.2d%.2d", year, month, day);
    return 0;
}

