#include <stdio.h>
int main(void) {
    long long n;
    scanf("%lld", &n);
    if (n < 1) { puts("false"); return 0; }
    while (n % 3 == 0) n /= 3;
    puts(n == 1 ? "true" : "false");
    return 0;
}
