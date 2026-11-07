#include <stdio.h>
int main(void) {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n / i; i++) {
        if (n % i == 0) count += (i == n / i) ? 1 : 2;
    }
    printf("%d\n", count);
    return 0;
}
