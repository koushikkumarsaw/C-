#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{   int i,ans;
    for(i=0;i<size-1;i++)
    {
        if(arr[i] > arr[i + 1])
        {
            ans=false;
            return ans;
        }
        else if (arr[3]<arr[4])
        {
            ans=true;
            return ans;
        }
    }
}
int main()
{
    int arr[5],size=5,i,answer;
    cout<<"enter 5 number in ascending order: ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    answer=isSorted(arr,size);
    if (answer==true)
    {
        cout<<"TRUE: the array in ascending order";
    }
    else if (answer==false)
    {
        cout<<"FALSE: the array in not ascending order";
    }
    return 0;
}
