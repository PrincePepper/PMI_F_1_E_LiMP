#include "stdio.h"
#include "string.h"

int main() {
    char a[100];
    int z;

    gets(a);

    z = strlen(a);

    for (int i = 0; i < z;i++){
        if (a[i] != 92)
            printf("%c" , a[i]);

        if (a[i] == 92)
            printf("\n");

    }
    return 0;
} 