#include <stdio.h>
int main(void) {
    int arrivalTime, delayedTime;
    if (scanf("%d %d", &arrivalTime, &delayedTime) != 2) return 0;
    printf("%d\n", (arrivalTime + delayedTime) % 24);
    return 0;
}
