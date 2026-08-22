#include <iostream>
using namespace std;

// Use 'void' because we are not returning a value
void swapvalue(int &a, int &b)
{
    int temp = a;   // Store 'a' in temp
    a = b;          // Give 'b's value to 'a'
    b = temp;       // Give temp's (old 'a') value to 'b'
    
    cout << "\nNumbers inside function after swap: " << a << " " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter two numbers to swap: ";
    cin >> a >> b;
    
    // Pass 'a' and 'b' into the function
    swapvalue(a,b);
    
    cout << "Numbers in main after swap: " << a << " " << b << endl;
    
    return 0;
}