
#include <stdio.h>
#include <stdlib.h>

long fib(long n);

int main(int argc, char **argv) {
    //  first parameter is the value to calculate the fibonacci of
    //  if none is provided, we default to 50
    long long n = 50;
    if (argc >= 2) {
        n = atoi(argv[1]);
    }

    printf("%d\n", fib(n));

    return 0;
}
