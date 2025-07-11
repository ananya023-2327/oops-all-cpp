#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // allocate memory

    *ptr = 100;
    cout << "Value stored: " << *ptr << endl;

    delete ptr; // free memory

    return 0;
}
