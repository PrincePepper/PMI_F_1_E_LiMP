#include <stdio.h>

void NOD(int min, int d, int n, int i) {
    if ((min % i == 0) && (d % i == 0) && (n % i == 0)) printf("%d", i);
    else {
        i--;
        NOD(min, d, n, i);
    }

}

int main() {
    int i, n, d;
    scanf("%d%d%d", &i, &n, &d);
    if (i < n && i < d) NOD(i, n, d, i);
    else {
        if (n < i && n < d) NOD(n, i, d, n);
        else NOD(d, n, i, d);
    }
} 