# Домашнее задание к работе 4
## Условие задачи
<img width="1433" height="142" alt="image" src="https://github.com/user-attachments/assets/a619030a-17e7-4663-b430-88cce421cab2" />

## Алгоритм и блок-схема
### Алгоритм
1. Начало.
2. Объявление переменные `A`, `B`, `C`, `D`, `trigger`
3. Ввести значения переменных `A`, `B`, `C` и `D`
4. Проверить, находятся ли введённые значения в диапазоне [0, 1]; если нет — вывести сообщение об ошибке и завершить программу с кодом 1.
5. Вычислить `trigger = A + B + C + D` и определить `signal = (trigger >= 3)`.
6. Вывести значение переменной `signal`.
8. Конец.
### Блок-схема
<img width="473" height="859" alt="image" src="https://github.com/user-attachments/assets/0d79c414-40c8-4569-a0f8-22516602850b" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%220%22%3E7Vnfb9s2EP5rDLQPDkjq92NsJ10HbCiWAe0eGYmRhdGmQsmxvb9%2BR4qySElxEsfuVqAvFHm8o3l3n74j5Yk3X%2B0%2BSVoufxMZ4xOCst3EW0wIwT724aEkeyNJAiPJZZEZWSe4K%2F5hRoiMdFNkrHIUayF4XZSuMBXrNUtrR0alFFtX7UFw91dLmrOB4C6lfCj9WmT1spHGJOrkv7AiX7a%2FjMOkmVnRVtl4Ui1pJraWyLuZeHMpRN30Vrs54yp6bVwau9tnZg8bk2xdv8agqqmsh0Zmnarety6DGUQXBrPtsqjZXUlTNbOFDINsWa84jDB0HwrO54ILqe28hzhlaQryqpbi70O4iNIU6%2FqWrgquYPBnsYKMEvQ720L7h1jRNag023iifGO2MVmgSbLQLVLtddT1k5lub4wRkzXbWe6YAHxiYsVquQeVpZWj2CRk2%2BUTh0ZmVvFa%2BBnYTj1kBNTgKT%2Bs3YUcOibq4xko1uXmVRkAqJSqC1qUc8ZFLukKYlQyCbGrmezPfekm3pi0LGBx5o8mrWpeRnSFPQ%2BFfoBDTBLkERLApBSbdcaUYwhGlBc5JHGRglN6EyclnIQcQjLLiicnHOHjRr0jM6eXm6e2qEpYccxEbWPa%2BHENCjgud9oM6SBNKxWlaSo4pxrwSqeUrGLyiY3%2BIChAltGsecybx6LdBuS%2F2Ym7OxBrl1rpCZBNhpD1UOBAlnjRVeCCFgdnAC1bZz8aaVwbcugIJNAEEp4U%2BygY0kXcowuUOJGPknME3gSZZYMKNUyE2Mi0JY%2BO5638vDqYYJ2zukdYwwhJxmldPLk7e5e75DR3LVJ9m7uwqNx%2F0wQXtMO%2FDJ%2FpwWLnjPZmNAxTXs5vZ2H2LVx%2BTspfveRxjh%2BnyTvjZky%2FiAKc75CWuO847gGt2ZYx6gX%2FsItX5eN5p16iArc0vI0OGIaCFB3owJpJwsij4bG6Acw9WgTSZhFF7jK%2F%2F4Aa1m4fH49WFoUjdWykqbvmGKSsRV4uRRDE3egv17LIc6ihcJpT5kgpT8isqTqmNz%2F07NrT7HVQe3RY3lF7MBoWn8Ohti0%2Bse%2FA8hyFZxSALd7fyhLH0GxXsXV2rS4N6ijDaVUVqYtWF9psV9QNgcDJyIwVg%2BArRGIz7khEDfbWwDqzdSxzOT7CeOTFeSn3bR5HWcvCw7F8jxNZ6KMeYnpLNNkbMNlwodi%2FCnvo874vK%2BIjGPxJi2%2BjRfIMLWrGe%2BG03%2FMIq7xYPmEvHvfqXgj%2B7BkeVXC1ofzAxx8sgiYhXanENap62vv4HzFy1GPkyD2SeuRilOy%2FBv2XvNLqtT%2BvqyJjh9dnx9qPSWOXjgcWWpcO%2BzocJfeoY9X%2BzQJaPIn1x4eZlsz0LWPmKzSozq1uA62G2j60c6u%2FsNrGPLFgdiY84MS9HvavKOHl8BCesUTjkZvmiTU6sCv08ep84Urs%2F78qce9bVxifWonD3kLfuwxH5wSefzbg%2BQGeOIdDjxyH30UPh4fvOReFn4HEFF3hkJAXIAlRpXtLoVQIqY5jjbhYi%2F1TQRu5Cw0%2B3ZwMWhh2H%2Fcb9e4%2FEu%2FmXw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## Реализация программы
Программа написана на языке C++
```ccp
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

    trigger = A + B + C + D;
    bool signal = (trigger >= 3);
    printf("Условие включения записи (1 - включено, 0 - выключено): %d\n", signal);

    return 0; 
}
```
## Результат работы программы
```
=== СИСТЕМА СИГНАЛИЗАЦИИ МУЗЕЯ ===
Введите состояние датчиков A, B, C, D (1 - сработал, 0 - не сработал).
Введите 4 числа, разделенных пробелом: 1 1 1 1
Условие включения записи (1 - включено, 0 - выключено): 1
```
## Информация о разработчике
```
Имя: Харитонов Дмитрий Олегович
Группа: бИЦТ-261
Вариант: 28
