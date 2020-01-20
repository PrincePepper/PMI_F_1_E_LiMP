#include <stdio.h>
#include <string.h>

int GetN(int i) {
    if (i == 1)
        return 1;
    return GetN(i - 1) * i;
}

int main() {
    printf("%d ", GetN(2) * GetN(5));
}