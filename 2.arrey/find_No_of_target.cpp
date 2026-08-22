#include <iostream>
using namespace std;
int countTarget(int arr[], int size, int target)
{   int count=0,i;
    for(i=0;i<size;i++)
    {
        if (arr[i]==target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[5],size=5,target,count,i;
    cout<<"enter 5 number:\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the target:";
    cin>>target;
    count=countTarget(arr,size,target);
    cout<<"\nNo of target in array: "<<count;
    return 0;
}