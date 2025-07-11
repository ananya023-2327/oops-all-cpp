#include <iostream>

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // Declare a pointer to a function taking (int,int) and returning int
    int (*funcPtr)(int, int);

    funcPtr = &add;
    std::cout << "add(3, 4) = " << funcPtr(3, 4) << '\n';

    funcPtr = &multiply;
    std::cout << "multiply(3, 4) = " << funcPtr(3, 4) << '\n';

    return 0;
}
