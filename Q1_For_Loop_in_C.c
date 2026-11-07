#include <stdio.h>
int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    const char *words[] = {"one", "two", "three", "four", "five",
                           "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) puts(words[i - 1]);
        else puts(i % 2 == 0 ? "even" : "odd");
    }
    return 0;
}
