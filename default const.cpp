
#include <iostream>
using namespace std;
    class construct{
       public:
       int a,b;
       construct()
       {
           a=10;
           b=20;
           
       }
       void add ()
       {
           cout<< a+b;
       }
    };
     
    int main(){
       construct c1;
       c1.add();
 
    return 0;
}
