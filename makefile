
TEST_VAL=40

all: fib-naive fib-memoized

fib-memoized: fib-memoized.c main.c
	clang fib-memoized.c main.c -o $@

fib-naive: fib-naive.c main.c
	clang fib-naive.c main.c -o $@

run:
	time ./fib-naive $(TEST_VAL)
	time ./fib-memoized $(TEST_VAL)

clean:
	rm *.o fib-naive fib-memoized
