#include <iostream>
using namespace std;
int sum_row(int grid[3][3])
{
    //int row=1;
    for(int r=0;r<3;r++)
        {   
            int rowSum = 0;
            for(int c=0;c<3;c++)
                {
                    rowSum+=grid[r][c];     
                }
            cout<<"Sum of row "<<r<<" : "<<rowSum<<endl;
            //row++;
        }
    return 0;
}
int main()
{
    int grid[3][3] = {
    {10, 20,0 30},
    {10, 10, 10},
    {5, 5, 5}
    };
    sum_row(grid);
    return 0;
}























