#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;

    for (int i = 0; i < 3; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}
