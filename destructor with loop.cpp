#include <iostream>
using namespace std;
int count=0;
class student{
    public:
    student()
    {
        for (int j=0; j<10; j++){
        count++;
        cout<<"no of objects created: "<<count<<endl;
        }
    }
    ~student(){
        for (int j=0; j<10; j++){
        count--;
        cout<<"no of objects deleted: "<<count<<endl;
        }
    }
};

int main() {
    student s1;
   return 0;
}
