#include <stdio.h>
int main(void) {
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    while (a && b) {
        if (a >= b) a -= b;
        else b -= a;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
