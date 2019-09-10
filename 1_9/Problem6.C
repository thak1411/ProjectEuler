#include <stdio.h>
int main() {
    int n = 100, lo = 0, hi = 0;
    for (int i = 1; i <= n; ++i) {
        lo += i * i;
    }
    hi = (101 * 50) * (101 * 50);
    printf("%d\n", hi - lo); // 25164150 //
    return 0;
}