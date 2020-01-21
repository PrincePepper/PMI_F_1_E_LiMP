#include "stdio.h"

int main() {
    int x, n = 1;
    scanf("%d", &x);

    int arr[x * 2 - 1]; // пример : если x = 6, то массмв должен состоять из 11 элементов
    arr[x - 1] = x; // помещаем x в свою ячейку
    for (int i = 0; i < x * 2 - 1; i++) {
        if (i < x)
            arr[i] = i + 1; // заполняем числами слева
        else {
            arr[i] = x - n; // справа
            n++;
        }
    }

    for (int i = 0; i < x * 2 - 1; i++)
        printf("%d ", arr[i]);  // вывод массива
} 