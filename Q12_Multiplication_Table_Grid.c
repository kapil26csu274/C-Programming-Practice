#include <stdio.h>
int main(void) {
    int n; scanf("%d", &n);
    for (int i=1;i<=n;i++) { for (int j=1;j<=n;j++) printf("%d%s", i*j, j==n?"":" "); putchar('\n'); }
    return 0;
}
