#include <stdio.h>
#include <stdlib.h>
#include "soma.h"

static int tests_run = 0;

void assert_int_eq(int expected, int actual, const char *msg) {
    tests_run++;
    if (expected != actual) {
        fprintf(stderr, "FAIL: %s — expected %d, got %d\n", msg, expected, actual);
        exit(EXIT_FAILURE);
    }
}

int main(void) {
    assert_int_eq(5, soma(2,3), "soma(2,3)");
    assert_int_eq(0, soma(0,0), "soma(0,0)");
    assert_int_eq(-1, soma(-2,1), "soma(-2,1)");
    assert_int_eq(1000000, soma(999999,1), "soma large");

    printf("OK (%d tests)\n", tests_run);
    return 0;
}
