#include <iostream>
using namespace std;
int sum_grid(int grid[2][2])
{   int sum=0;
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<2;c++)
        {
            sum = sum + grid[c][r];
            
        }
        
    }
    return sum;
}
int main()
{
    int sum , grid[2][2] = {
        {4,5},
        {6,8}
    };
    sum=sum_grid( grid );
    cout<<"sum of grid:"<<sum;
    return 0;
}