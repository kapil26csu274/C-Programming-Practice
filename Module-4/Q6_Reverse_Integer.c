#include <stdio.h>
#include <limits.h>
int main(void) {
    int x;
    scanf("%d", &x);
    long long rev = 0;
    while (x != 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    if (rev < INT_MIN || rev > INT_MAX) rev = 0;
    printf("%lld\n", rev);
    return 0;
}
