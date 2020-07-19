/*Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix array is shown below:

const arr = [

[1, 2, 3],

[4, 5, 6],

[9, 8, 9]

]

The left-to-right diagonal = 1 + 5 + 9 = 15. The right to left diagonal = 3 + 5 + 9 = 17. Their absolute difference is |15 - 17| = 2.
Goal: Your task is to create a function diagonalDifference. It must return an integer representing the absolute diagonal difference.


*/
#include<bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> &arr)
{
    int left=0;
    int right=0;
    for(int i=0,j=0;i<arr.size();i++,j++)
    {
        left+= arr[i][j];               //left diagonal sum
    }

    for(int i=0,j=arr.size()-1;i<arr.size();i++,j--)
    {
        right+= arr[i][j];               //left diagonal sum
    }
    int diff = right-left;

    return abs(diff);
}

int main()
{
     int n;
     cin>>n;
     vector<vector<int>> matrix(n);

     for(int i=0;i<n;i++)
     {
         matrix[i].resize(n);
         for(int j=0;j<n;j++)
         {
             cin>>matrix[i][j]; //Enter the matrix
         }
     }

     cout<< diagonalDifference(matrix)<<endl;
}
