#include <stdio.h>
int main(void) {
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if (v1 == v2) puts(x1 == x2 ? "YES" : "NO");
    else if ((x2 - x1) % (v1 - v2) == 0 &&
             (x2 - x1) / (v1 - v2) >= 0) puts("YES");
    else puts("NO");
    return 0;
}
