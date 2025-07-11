//Defining method in class.
#include<iostream>
using namespace std;

class student               
{
    public:
    void myMethod()
    {
        cout<<"I am studying in 2nd year.";
    }
};
int main()
{
    student s1;
    s1.myMethod();
}
