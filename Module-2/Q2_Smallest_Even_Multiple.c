#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    printf("%d\n", (n % 2 == 0) ? n : 2 * n);
    return 0;
}
