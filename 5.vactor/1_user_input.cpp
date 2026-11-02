//Write a program that repeatedly prompts the user to enter integers
//and pushes each one into a vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> number;
    int n,m=1;
    while(true)
    {
        cout<<"enter the "<<m<<" number: ";
        cin>>n;
        if (n==-1)
        {
            break;
        }
        number
    }
    number.pop_back();
    cout<<"\nCount size"<<number.size();
    cout<<"\nnumbers in vector: ";
    for(int i=0;i<number.size();i++)
    {
        cout<<number[i]<<" ";
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> number;
//     int n;
//     int m = 1;

//     while (true)
//     {
//         cout << "Enter number " << m << ": ";
//         cin >> n;

//         if (n == -1) 
//         {
//             break; // Stop immediately; do not store -1
//         }

//         number.push_back(n);
//         m++;
//     }

//     cout << "\nTotal count: " << number.size() << endl;
//     cout << "Numbers in vector: ";
//     for (int i = 0; i < number.size(); i++)
//     {
//         cout << number[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }