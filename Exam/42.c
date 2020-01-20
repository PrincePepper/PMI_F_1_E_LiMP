#include <stdio.h>
#include <math.h>

int main() {
    int a[10];
    a[0] = 1;
    for (int k = 1; k < 10; k++) {
        a[k] = a[k - 1] + k;
        printf("%d", a[k]);
        printf(" %d ", (int) pow(a[k], 2));
        printf(" %d\n", (int) pow(a[k], 3));
    }
} 