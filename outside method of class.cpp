//Defining method outside class.
#include<iostream>
using namespace std;

class student
{
    public:
    void myMethod();
};

void student::myMethod()
{
    cout<<"Studying in 2nd year.";
}

int main()
{
    student s1;
    s1.myMethod();
}
