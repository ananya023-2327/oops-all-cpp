#include <iostream>
using namespace std;
int count=0;
class student{
    public:
    student()
    {
        count++;
        cout<<"no of objects created: "<<count<<endl;
    }
    ~student(){
        ~count;
        cout<<"no of objecs deleted: "<<count<<endl;
    }
};

int main() {
    student s1;
    s1.~student();
    return 0;
}
