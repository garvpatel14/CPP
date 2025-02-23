#include <stdio.h>
#include <math.h>

int main() {
    int H, L;
    scanf("%d %d", &H, &L);
    double depth = sqrt(L * L - H * H);
    printf("%.6f\n", depth);
    return 0;
}
