#include <stdio.h>
#include <string.h>

int GetN(int i) {
    if (i == 1)
        return 1;
    return GetN(i - 1) * 2;
}

int main() {
    for (int i = 1; i < 10; i++)
        printf("%d ", GetN(i));
}