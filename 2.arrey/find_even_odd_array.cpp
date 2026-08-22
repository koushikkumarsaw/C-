#include <iostream>
using namespace std;
void countEvenOdd(int arr[], int size, int &even, int &odd)
{
    for(int i=0;i<size;i++)
    {
        if (arr[i]%2==0)
        {
            even++;
        }
        else if (arr[i]%2!=0)
        {
            odd++;
        }
    }
}
int main()
{
    int arr[5];
    int size=5, even=0, odd=0, i;
    cout<<"enter 5 number: ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    countEvenOdd(arr,size,even,odd);
    cout<<"\neven number: "<<even;
    cout<<"\nodd number: "<<odd;
}