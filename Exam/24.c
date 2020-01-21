#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int cmp(const void *a, const void *b) {
    return  *(int*)b-*(int*)a;
}

int main(int argc, char *argv[]) {
    int n=10,a[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        a[i] = -50+rand()%101;
    }

    qsort(a, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}