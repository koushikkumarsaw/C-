#include <iostream>
using namespace std;
void bubbleshort(int arr[], int size)
{
    int i,temp;
    for(i=0;i<size-1;i++)
    {
        bool swap=false;
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }    
        if (swap==false)
        {
            break;
        }
    }
}
int binary(int arr[], int size, int target)
{
    // if(size%2==0)
    // {
    //     size+=1;
    // }
    //even without this why answer come proper 
    int left=0;
    int right=size-1;
    while (left<=right)
    {
        int mid=(left+right)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid]<target)
        {
            left=mid+1;
        }
        else if (arr[mid]>target)
        {
            right=mid-1;
        }
    }
    return -1;
}
int main()
{
    int size=6,arr[6];
    cout<<"enter the six number: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bubbleshort(arr,size);
    cout<<"\nnumber are in shorted: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<",";
    }
    int target,index;
    cout<<"\nenter the target: ";
    cin>>target;
    index=binary(arr,size,target);
    if (index !=-1)
    {
        cout<<"target at : "<<index;
    }
    else if (index==-1)
    {
        cout<<"target is not there.";
    }    
    return 0;
}