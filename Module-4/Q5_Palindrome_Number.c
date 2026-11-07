#include <stdio.h>
int main(void) {
    int x;
    scanf("%d", &x);
    if (x < 0) { puts("false"); return 0; }
    int original = x;
    long long reversed = 0;
    while (x > 0) { reversed = reversed * 10 + x % 10; x /= 10; }
    puts(reversed == original ? "true" : "false");
    return 0;
}
