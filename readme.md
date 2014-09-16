
# Fibonacci

This contains two C implementations of calculating fibonacci numbers.  The first is a naive recursive implementation, the second caches past results for a speed boost.  You can time them to see the difference.


## Results

I ran this on my 2011 MacBook Pro with an Intel Core i7-2635QM CPU @ 2.00GHz.

For small values, they're about the same:

```
time ./fib-naive 20
6765
        0.00 real         0.00 user         0.00 sys
time ./fib-memoized 20
6765
        0.00 real         0.00 user         0.00 sys
```


For larger values though, there's a pretty solid difference:

```
time ./fib-naive 40
102334155
        0.95 real         0.95 user         0.00 sys
time ./fib-memoized 40
102334155
        0.00 real         0.00 user         0.00 sys
```
