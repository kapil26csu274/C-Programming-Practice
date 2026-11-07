#include <stdio.h>
int main(void) {
    int mainFuel, additionalFuel;
    if (scanf("%d %d", &mainFuel, &additionalFuel) != 2) return 0;
    int distance = 10 * mainFuel;
    distance += 10 * (mainFuel / 5 < additionalFuel ? mainFuel / 5 : additionalFuel);
    printf("%d\n", distance);
    return 0;
}
