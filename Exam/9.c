#include <stdio.h>

int Recur(int y) {
    y++;
    int s=0;
    if (y<11) return s+y*2-1 + Recur(y); else
        return s;
}

int main() {
    printf("%d",Recur(4));
} 