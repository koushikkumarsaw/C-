#include <iostream>
using namespace std;
int searchElement(int arr[], int size, int target)
{
    int count=0, i;
    for (i=0;i<size;i++)
    {
        if (target==arr[i])
        {
        break;
        }
        count++;
    }
    return count;
}
int main()
{
    int arr[5], target,index,i;
    int size=5;
    cout<<"Enter the 5 number: \n";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target number :";
    cin>>target;
    index=searchElement(arr,size,target);
    cout<<"index of arrey:"<<index;
    return 0;
}