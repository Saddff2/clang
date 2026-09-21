#include <stdio.h>
#include <string.h>

// Функция, которая пачкает память на стеке
void dirty_stack(void) 
{
    volatile char trash[128];
    for (int i = 0; i < sizeof(trash); i++) {
        trash[i] = 'X'; // заполняем стек буквами 'X'
    }
}

// Функция, которая встанет на то же самое место в стеке
void test(void) 
{
    char a[3] = {'D', 'O', 'G'};
    char b[3] = {'C', 'A', 'T'};

    printf("b = %s\n", b);
}

int main(void) 
{
    dirty_stack(); // Записали мусор в стек и вышли
    test();        // Зашли в test на то же место памяти
    return 0;
}