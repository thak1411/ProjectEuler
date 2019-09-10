#include <stdio.h>
int main() {
    int ar[32] = { 1, 2, };
    int max = 4000000, sum = 2;
    for (int i = 2; ar[i - 1] + ar[i - 2] <= max; ++i) {
        ar[i] = ar[i - 1] + ar[i - 2];
        sum += ar[i] * !(ar[i] & 1);
    }
    printf("%d\n", sum); // 4613732 //
    return 0;
}