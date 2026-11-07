#include <stdio.h>
int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) sum += i;
    printf("%d\n", sum);
    return 0;
}
