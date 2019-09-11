#include <stdio.h>
#include <math.h>
typedef long long ll;
int divSum(ll n) {
    int sum = 0;
    ll k = sqrt(n);
    for (ll i = 1; i * i <= n; ++i) {
        sum += 2 * !(n % i);
    }
    return sum - (k * k == n);
}
int main() {
    ll i;
    for (i = 1; divSum(i * -~i >> 1LL) <= 500; ++i) {
        continue;
    }
    printf("%lld\n", i * -~i >> 1LL); // 76576500 //
    return 0;
}