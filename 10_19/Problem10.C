#include <stdio.h>
typedef long long ll;
int mem[2000001];
int main() {
    ll res = 0;
    for (int i = 2; i * i < 2000001; ++i) {
        if (mem[i]) continue;
        for (int j = i + i; j < 2000001; j += i) {
            mem[j] = 1;
        }
    }
    for (int i = 2; i < 2000001; ++i) {
        res += !mem[i] * (ll)i;
    }
    printf("%lld\n", res); // 142913828922 //
    return 0;
}