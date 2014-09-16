
#include <limits.h>
#include <assert.h>

long long fib(long long n) {
    assert(n > 0);

    static long long cache[LONG_LONG_MAX];
    cache[0] = 1;   //  fib(1)
    cache[1] = 1;   //  fib(2)
    static long long maxCachedN = 2;

    if (n <= maxCachedN) {
        return cache[n-1];
    } else {
        cache[n-1] = fib(n-1) + fib(n-2);
        maxCachedN = n;
        return cache[n - 1];
    }
}
