#include <stdio.h>
int main(void) {
    int L, T;
    if (scanf("%d", &L) != 1 || scanf("%d", &T) != 1) return 0;
    while (T--) {
        int W, H;
        scanf("%d %d", &W, &H);
        if (W < L || H < L) printf("UPLOAD ANOTHER\n");
        else if (W == H) printf("ACCEPTED\n");
        else printf("CROP IT\n");
    }
    return 0;
}
