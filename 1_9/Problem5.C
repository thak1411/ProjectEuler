#include <stdio.h>
#include <math.h>
int mem[21], cnt[21];
int max(int i, int j) {
    return i > j ? i : j;
}
int main() {
    int res = 1;
    for (int i = 1; i < 21; ++i) {
        mem[i] = i;
    }
    for (int i = 2; i * i < 21; ++i) {
        if (mem[i] != i) continue;
        for (int j = i + i; j < 21; j += i) {
            mem[j] = i;
        }
    }
    for (int i = 1; i < 21; ++i) {
        int cn[21] = { 0, };
        int j;
        for (j = i; j > 1; j /= mem[j]) {
            ++cn[mem[j]];
        }
        for (int j = 1; j < 21; ++j) {
            cnt[j] = max(cnt[j], cn[j]);
        }
    }
    for (int i = 1; i < 21; ++i) {
        res *= pow(i, cnt[i]);
    }
    printf("%d\n", res); // 232792560 //
    return 0;
}