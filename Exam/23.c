#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void qs(int *array, int first, int last) {
    if (first < last) {
        int left = first, right = last, supporting_element = array[(left + right) / 2];
        do {
            while (array[left] < supporting_element) left++;
            while (array[right] > supporting_element) right--;
            if (left <= right) {
                int tmp = array[left];
                array[left] = array[right];
                array[right] = tmp;
                left++;
                right--;
            }

        } while (left <= right);
        qs(array, first, right);
        qs(array, left, last);
    }
}

int main() {
    int n=10;
    srand(time(NULL));
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = -50+rand()%101;
    }

    qs(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
} 