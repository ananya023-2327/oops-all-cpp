#include <iostream>
using namespace std;

int main() {
   int a = 2;
   int*aptr;
   aptr=&a;
   
   cout<<&a<<endl;
   cout<<aptr<<endl;
   cout<<*aptr<<endl;
   
    return 0;
}
