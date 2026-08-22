#include <iostream>
using namespace std;
int main()
{
    int b , p ,i, total=1;
    cout<<"enter the base: ";
    cin>>b;
    cout<<"enter the power: ";
    cin>>p;

    for (i=1;i<=p;i++)
    {
        total=total*b;
    }
    cout<<"Total= "<<total;
}