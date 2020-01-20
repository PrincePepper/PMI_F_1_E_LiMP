#include <stdio.h>

int main() {
    int a;
    float arifm = 0;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);   // заполняем массив
    }

    for (int i = 0; i < a; i++) {
        arifm += arr[i];        // находим сумму элементов
    }

    printf("%.1f", arifm / (float) a);
}