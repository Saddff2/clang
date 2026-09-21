#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    printf("Введите высоту коробки: ");
    scanf("%d", &height);
    printf("Введите ширину коробки: ");
    scanf("%d", &width);
    printf("Введите длину коробки: ");
    scanf("%d", &length);
    volume = height * width * length;
    weight = (volume + 165) / 166;
    printf("Volume: %d\n", volume);
    printf("Weight: %d\n", weight);
    return 0;
}