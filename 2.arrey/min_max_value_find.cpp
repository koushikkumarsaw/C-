#include <iostream>
using namespace std;

// The function takes the array, its size, and two reference variables
void findMinAndMax(int arr[], int size, int &minAns, int &maxAns) {
    // 1. We start by assuming the first card is BOTH the biggest and smallest
    minAns = arr[0];
    maxAns = arr[0];
    
    // 2. Loop through the array starting from index 1
    for(int i = 1; i < size; i++) {
        if (arr[i]>maxAns)
        {
            maxAns=arr[i];
        }
        else if (arr[i]<minAns)
        minAns=arr[i];
    }
}

int main() {
    int myNumbers[5] = {90, 10, 80, 50, 3};
    
    // Create empty variables to hold our answers
    int smallest = 0;
    int biggest = 0;
    
    // Pass everything into the function. Notice we don't need "theAnswer =" 
    // because the function will directly modify 'smallest' and 'biggest'
    findMinAndMax(myNumbers, 5, smallest, biggest);
    
    cout << "Smallest is: " << smallest << endl;
    cout << "Biggest is: " << biggest << endl;
    
    return 0;
}