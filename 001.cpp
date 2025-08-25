#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    // Run a very basic "test"
    if (add(2, 3) == 5) {
        std::cout << "Test passed ✅" << std::endl;
        return 0; // exit success for CI
    } else {
        std::cerr << "Test failed ❌" << std::endl;
        return 1; // exit failure for CI
    }
}
