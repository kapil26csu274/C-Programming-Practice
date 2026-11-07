#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n >= 1 && n <= 9) {
        const char *words[] = {"one", "two", "three", "four", "five",
                               "six", "seven", "eight", "nine"};
        printf("%s\n", words[n - 1]);
    } else {
        printf("Greater than 9\n");
    }
    return 0;
}
