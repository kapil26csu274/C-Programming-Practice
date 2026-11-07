#include <stdio.h>
int main(void) {
    int n, steps = 0;
    scanf("%d", &n);
    while (n > 0) {
        if (n % 2 == 0) n /= 2;
        else n--;
        steps++;
    }
    printf("%d\n", steps);
    return 0;
}
