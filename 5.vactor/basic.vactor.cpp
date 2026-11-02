#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Declare an empty vector of integers
    vector<int> numbers;

    // Add elements dynamically to the end
    numbers.push_back(10);
    numbers.push_back(25);
    numbers.push_back(40);

    cout << "Current size: " << numbers.size() << endl; // Prints 3

    // Access elements with standard array indexing
    for (int i = 0; i < numbers.size(); i++) 
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Remove the last item (40)
    numbers.pop_back();

    cout << "New size after pop: " << numbers.size() << endl; // Prints 2

        for (int i = 0; i < numbers.size(); i++) 
    {
        cout << numbers[i] << " ";
    }

    return 0;
}