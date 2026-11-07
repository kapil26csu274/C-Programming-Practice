#include <stdio.h>
int main(void) {
    long long n;
    scanf("%lld", &n);
    puts(n > 0 && (n & (n - 1)) == 0 ? "true" : "false");
    return 0;
}
