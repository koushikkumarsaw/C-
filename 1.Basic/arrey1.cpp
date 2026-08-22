#include <iostream>
using namespace std;

int main() {
    int i,total=0;
    int mark[4]={50,60,70,80};
    for(i=0;i<4;i++)
    {
        total+=mark[i];
    }
    cout<<"total="<<total;

    return 0;
}