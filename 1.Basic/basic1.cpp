#include <iostream>
using namespace std;
int main()
{
    int n=5,i,t=0;
    for (i=1;i<=n;i++)
    {
       t=t+i;
    }
//return n;
cout<<"total  "<<t;
}
int sumupto(int n){
    int total=0,i;
    for(i=1;i<=n;i++)
    {
        total+=i;
    }
    return total;
}