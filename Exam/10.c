#include "stdio.h"

void dec_to_bin(int n) {
    if (n >= 8)
        dec_to_bin(n / 8);
    printf("%d", n % 8);

}

int main() {
    int n;
    scanf("%d", &n);
    dec_to_bin(n);
} 