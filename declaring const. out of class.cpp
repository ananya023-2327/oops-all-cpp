
#include <iostream>
using namespace std;
     class student {
        int rno;
        char name[50];
        double fee;
        
        public:
        student();
        void display();
    };
     student::student(){
         cout<<"Name of student is    ";
         cin>>name;
         cout<<"roll number is: ";
         cin>>rno;
         cout<<"enetr the fee: ";
         cin>>fee;
     }
     void student::display()
     {
         cout<<endl<<rno<<endl<<name<<endl<<fee;
     }
    int main(){
    student s;
    s.display();
    return 0;
}

//experimenting by placing the contructor out of the class. et voila, nothing changes. 
