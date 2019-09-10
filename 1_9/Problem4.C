#include <stdio.h>
char str[7], ln;
int isPal() {
    for (int i = 0; i < -~ln / 2; ++i) {
        if (str[i] != str[~-ln - i]) return 0;
    }
    return 1;
}
int max(int i, int j) {
    return i > j ? i : j;
}
int main() {
    int res = 0;
    for (int i = 100; i < 1000; ++i) {
        for (int j = 100; j < 1000; ++j) {
            ln = sprintf(str, "%d", i * j);
            res = max(res, isPal() ? i * j : 0);
        }
    }
    printf("%d\n", res); // 906609 //
    return 0;
}