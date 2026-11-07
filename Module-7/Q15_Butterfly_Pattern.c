#include <stdio.h>
int main(void) {
    int n; scanf("%d", &n);
    int half=(n+1)/2;
    for (int i=1;i<=half;i++) {
        for (int j=1;j<=i;j++) putchar('*');
        for (int s=0;s<2*(half-i);s++) putchar(' ');
        for (int j=1;j<=i;j++) putchar('*');
        putchar('\n');
    }
    for (int i=half-1;i>=1;i--) {
        for (int j=1;j<=i;j++) putchar('*');
        for (int s=0;s<2*(half-i);s++) putchar(' ');
        for (int j=1;j<=i;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
