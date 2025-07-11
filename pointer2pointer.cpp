#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* ptr = &x;
    int** pptr = &ptr;

    cout << "Value of x: " << x << endl;
    cout << "Value using *ptr: " << *ptr << endl;
    cout << "Value using **pptr: " << **pptr << endl;

    return 0;
}
