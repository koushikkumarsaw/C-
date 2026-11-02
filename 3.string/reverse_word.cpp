#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string myWord;
    cout<<"enter the word:";
    cin>>myWord;
    int left=0;
    int right=myWord.length()-1;
    while (left < right) 
{
    // 1. Store the left letter in a temporary safe box
    char temp = myWord[left]; 
    
    // 2. Overwrite the left letter with the right letter
    myWord[left] = myWord[right]; 
    
    // 3. Put the original left letter (from the safe box) into the right spot
    myWord[right] = temp; 
    
    // 4. Move both fingers inward!
    left++;
    right--;
}
cout<<"string in reverse:"<<myWord;
}
