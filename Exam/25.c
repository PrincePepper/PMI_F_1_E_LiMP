//
// Created by User on 21.01.2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define all_numb 500
#define first_v 0
#define second_v 101


int bubblesort(int *mass) {
    int value_bubble = 0;
    for (int i = 0; i < all_numb; i++)
        for (int j = 0; j < all_numb; j++)
            if (mass[j] > mass[j + 1]) {
                int c = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = c;
                value_bubble++;
            }
    return value_bubble;
}

int value_quik = 0;

int quiksort(int *s_arr, int first, int last) {

    if (first < last) {
        int left = first, right = last, middle = s_arr[(left + right) / 2];
        do {
            while (s_arr[left] < middle) left++;
            while (s_arr[right] > middle) right--;
            if (left <= right) {
                int tmp = s_arr[left];
                s_arr[left] = s_arr[right];
                s_arr[right] = tmp;
                left++;
                right--;
                value_quik++;
            }
        } while (left <= right);
        quiksort(s_arr, first, right);
        quiksort(s_arr, left, last);

    }
    return value_quik;
}

int main() {
    int x = first_v;
    int y = second_v;
    int mass[all_numb];
    int mass2[all_numb];
    srand(time(NULL));

    for (int i = 0; i < all_numb; i++) {
        int a = x + rand() % y;
        mass[i] = a;
        mass2[i] = a;
    }

    printf("%d ", bubblesort(mass));
    printf("%d ", quiksort(mass, 0, all_numb));
}
