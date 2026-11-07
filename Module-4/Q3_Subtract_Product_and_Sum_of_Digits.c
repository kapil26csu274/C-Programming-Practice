#include <stdio.h>
int main(void) {
    int n, sum = 0, product = 1;
    scanf("%d", &n);
    while (n > 0) {
        int d = n % 10;
        sum += d; product *= d; n /= 10;
    }
    printf("%d\n", product - sum);
    return 0;
}
