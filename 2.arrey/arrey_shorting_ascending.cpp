#include <iostream>
using namespace std;
void sorted(int arr[], int size)
// {
//     // OUTER LOOP: Repeat the whole process 'size' times
//     for (int step = 0; step < size; step++) 
//     {
//         // INNER LOOP: Your exact code (with the size-1 fix!)
//         for (int i = 0; i < size - 1; i++) 
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//     }
// }
//void optimizedBubbleSort(int arr[], int size)
{
    // OUTER LOOP
    for (int step = 0; step < size - 1; step++) 
    {
        bool swapped = false; // Assume no swaps will happen this round
        
        // INNER LOOP (Notice the '- step' optimization!)
        for (int i = 0; i < size - 1 - step; i++) 
        {
            if (arr[i] > arr[i + 1])
            {
                // Swap logic
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                
                swapped = true; // A swap happened!
            }
        }
        
        // If we made it through the whole inner loop without swapping, we are done!
        if (swapped == false) 
        {
            break; 
        }
    }
}
int main()
{
    int arr[5],size=5,i;
    cout<<"enter the 5 number";
    for (i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    sorted(arr,size);
    cout<<"array is shortedin ascending order";
    for (int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    return 0;

}


