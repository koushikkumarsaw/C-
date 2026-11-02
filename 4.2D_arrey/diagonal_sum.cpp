#include <iostream>
using namespace std;
int anti_diagonal_sum(int grid[][3])
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=grid[i][2-i];
    }
    return sum;
}
int main()
{
    int grid[3][3]={
        {1,2,4},
        {4,5,6},
        {7,8,9}
    };
    int sum;
    sum=anti_diagonal_sum(grid);
    cout<<"sum of anti diagonal : "<<sum;
    return 0;
}