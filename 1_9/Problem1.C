#include <stdio.h>
int main() {
    int n = 1000, cnt = 0;
    for (int i = 3; i < n; ++i) {
        cnt += i * (!(i % 3) | !(i % 5));
    }
    printf("%d\n", cnt); // 233168 //
    return 0;
}