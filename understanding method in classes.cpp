#include <iostream>
using namespace std;

 class Student{
     public:
     string name;
     float age;
     string branch;
    float result;
     void Year()
     {
         cout<<"im studying in second year"<<endl;
     }
 };
int main() {
    Student s1;
    s1.name = "ananya";
    s1.age = 18;
    s1.branch = "entc";
    s1.result = 89.98;
 
    cout<<"name of student 1 is: "<<s1.name<<endl;
    cout<<"age of student: "<<s1.age<<endl;
    cout<<"branch of student is: "<<s1.branch<<endl;
    cout<<"result of student: "<<s1.result<<endl;
    s1.Year();
}
