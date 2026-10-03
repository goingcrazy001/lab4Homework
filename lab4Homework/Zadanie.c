#include <stdio.h>
#include <locale.h>
#include <stdbool.h> 

int main() {
    setlocale(LC_ALL, "RUS");
    int A, B, C, D, trigger;

    printf("=== СИСТЕМА СИГНАЛИЗАЦИИ МУЗЕЯ ===\n");
    printf("Введите состояние датчиков A, B, C, D (1 - сработал, 0 - не сработал).\n");
    printf("Введите 4 числа, разделенных пробелом: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if ((A < 0 || A > 1) ||
        (B < 0 || B > 1) ||
        (C < 0 || C > 1) ||
        (D < 0 || D > 1)) 
    {
        printf("Ошибка: Введены некорректные значения. Вводите только 0 или 1.\n");
        return 1;
    }
    int trigger = A + B + C + D;
    bool signal = (trigger >= 3);
    printf("Условие включения записи (1 - включено, 0 - выключено): %d\n", signal);

    return 0; 
}