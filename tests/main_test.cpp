#include <cassert>
#include "suite.h"

void testFuncA() {
    Suite suite;
    double result = suite.FuncA(5, 1.0);
    assert(result == 0.425781);
}

int main() {
    testFuncA();
    return 0;
}
