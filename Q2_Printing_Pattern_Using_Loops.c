#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i, left = j, bottom = size - 1 - i, right = size - 1 - j;
            int value = n - (top < bottom ? (top < left ? (top < right ? top : right) : (left < right ? left : right))
                                           : (bottom < left ? (bottom < right ? bottom : right) : (left < right ? left : right)));
            printf("%d", value);
            if (j < size - 1) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
