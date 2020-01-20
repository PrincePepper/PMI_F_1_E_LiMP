//
// Created by User on 20.01.2020.
//
#include <stdio.h>

int GetN(int i) {
    if (i == 1)
        return 3;
    return GetN(i - 1) + 4;
}

int main() {
    for (int i = 1; i < 10; i++)
        printf("%d ", GetN(i));
}
