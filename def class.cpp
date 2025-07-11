#include<iostream>
using namespace std;
class student               
{
    public:
    string name;
    int age;
    string branch;          
    float result;
    int year;
    int prn;
};
int main()
{
    student s1,s2;

    cout<<"1st student: "<<endl;
    s1.name = "Anupreeya";
    s1.age = 19;
    s1.branch = "ENTC";
    s1.prn = 022;
    s1.result = 7.9;
    s1.year = 2;
    cout<<s1.name<<endl<<s1.age<<endl<<s1.branch<<endl<<s1.prn<<endl<<s1.result<<endl<<s1.year<<endl;

    cout<<"\n2nd student: "<<endl;
    s2.name = "Anushka";
    s2.age = 20;
    s2.branch = "ENTC";
    s2.prn = 025;
    s2.result = 8.2;
    s2.year = 2;
    cout<<s2.name<<endl<<s2.age<<endl<<s2.branch<<endl<<s2.prn<<endl<<s2.result<<endl<<s2.year<<endl;

}
