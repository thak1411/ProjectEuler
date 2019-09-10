#include <stdio.h>
int mem[104744];
int main() {
    for (int i = 2; i * i < 104744; ++i) {
        if (mem[i]) continue;
        for (int j = i + i; j < 104744; j += i) {
            mem[j] = 1;
        }
    }
    int i, k = 10001;
    for (i = 2; k; ++i) {
        k -= !mem[i];
    }
    printf("%d\n", --i); // 104743 //
    return 0;
}