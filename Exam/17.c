#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int **a;
    a = (int **) malloc(sizeof(int *) * 7);
    for (int i = 0; i < 7; i++)
        a[i] = (int *) malloc(sizeof(int) * 7);

    //заполнение матрицы и печать 
    srand(time(NULL));
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            a[i][j] = rand() % 81 + 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("-----------------------\n");

    //изменение 
    for (int i = 0; i < 7; i++) {
        for (int j = abs(3 - i); j <= 6 - abs(3 - i); j++) {
            a[i][j] = 99;
        }
    }

    //печать матрицы 
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //чистим матрицу 
    for (int i = 0; i < 7; i++)
        free(a[i]);
    free(a);

    return 0;
} 