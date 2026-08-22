#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) 
{
    int left = 0;
    int right = size - 1;
    
    // Keep searching while the search space is valid
    while (left <= right) 
    {
        // 1. Find the middle index
        int mid = (left + right) / 2;
        
        // 2. Check the middle
        if (arr[mid] == target) 
        {
            return mid; // Found it!
        } 
        else if (target > arr[mid]) 
        {
            left = mid + 1; // Search the right half
        } 
        else 
        {
            right = mid - 1; // Search the left half
        }
    }
    
    // If the loop finishes and left crosses right, the target is not in the array
    return -1; 
}

int main() 
{
    // Rule: Binary Search ONLY works on sorted arrays!
    int mySortedArray[7] = {10, 20, 30, 40, 50, 60, 70};
    int target = 60;
    
    int index = binarySearch(mySortedArray, 7, target);
    
    if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found!" << endl;
    }
    
    return 0;
}