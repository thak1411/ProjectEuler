#include <stdio.h>
#include <math.h>
int main() {
    for (int i = 1; i < 555; ++i) {
        for (int j = i + 1; j < 555; ++j) {
            int k = sqrt(i * i + j * j);
            if (i + j + k == 1000 && k * k == i * i + j * j) {
                printf("%d\n", i * j * k); // 31875000 //
            }
        }
    }
    return 0;
}