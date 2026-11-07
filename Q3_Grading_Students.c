#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    while (n--) {
        int grade;
        scanf("%d", &grade);
        int next = ((grade / 5) + 1) * 5;
        if (grade >= 38 && next - grade < 3) grade = next;
        printf("%d\n", grade);
    }
    return 0;
}
