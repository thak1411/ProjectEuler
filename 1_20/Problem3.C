#include <stdio.h>
#include <math.h>
typedef long long ll;
ll max(ll i, ll j) {
    return i > j ? i : j;
}
int mem[775148];
int main() {
    ll n = 600851475143LL, res = 0;
    ll sqrtN = sqrt(n) + 1;
    printf(" >> %lld\n", sqrtN);
    for (ll i = 2; i * i <= sqrtN; ++i) {
        if (mem[i]) continue;
        for (ll j = i + i; j <= sqrtN; j += i) {
            mem[j] = 1;
        }
    }
    for (ll i = 2; i * i <= n; ++i) {
        res = max(res, !(n % i) & !mem[i] ? i : 0);
    }
    printf("%lld\n", res); // 6857 //
    return 0;
}