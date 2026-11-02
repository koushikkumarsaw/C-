#include <iostream>
#include <string>
using namespace std;
// int palindrome(string word)
// { 
//     bool ans;      
//     int left=0;
//     int right=(word.length()-1);
//     while (left<right)
//     {
//         ans = false;
//         if (word[left]==word[right])
//         {
//             left++;
//             right--;
//             ans=true;
//         } 
//         if (ans==false)
//         {
//             break;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     string word;
//     int ans;
//     cout <<"enter the word:";
//     cin>>word;
//     ans=palindrome(word);
//     if (ans==true)
//     {
//         cout<<word<<" is palindrome.";
//     }
//     else if (ans !=true)
//     {
//         cout<<word<<" is not palindrome.";
//     }
//     return 0;
// }


// 1. Use 'bool' as the return type instead of 'int'
bool isPalindrome(string word)
{ 
    int left = 0;
    int right = word.length() - 1;
    
    while (left < right)
    {
        // If any pair does not match, exit immediately
        if (word[left] != word[right])
        {
            return false;
        }
        
        left++;
        right--;
    }
    
    // If the loop finishes completely, it is a palindrome!
    return true;
}

int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    
    if (isPalindrome(word))
   {
        cout << word << " is a palindrome." << endl;
    }
    else
    {
        cout << word << " is NOT a palindrome." << endl;
    }
    
    return 0;
}