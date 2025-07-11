//Volume of cubiod using class
#include<iostream>
using namespace std;

class volume
{
    public:
    int height,base,length,vol;
    void input()
    {
        cout<<"Enter height: ";
        cin>>height;
        cout<<"Enter lenght: ";
        cin>>length;
        cout<<"Enter base: ";
        cin>>base;
    }
    void calculation()
    {
        vol = height*length*base;
    }
    void output()
    {
        cout<<"The volume of the cuboid is: "<<vol;
    }
};
int main()
{
    volume v1;
    v1.input();
    v1.calculation();
    v1.output();
}
