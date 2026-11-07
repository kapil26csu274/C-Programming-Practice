#include <stdio.h>
int main(void) {
    int n, x, count = 0;
    scanf("%d", &n); x = n;
    while (x > 0) {
        int d = x % 10;
        if (d != 0 && n % d == 0) count++;
        x /= 10;
    }
    printf("%d\n", count);
    return 0;
}
