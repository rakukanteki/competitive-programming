#include<bits/stdc++.h>
using namespace std;

void constructMatrix(int matrix[5][5])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>matrix[i][j];
        }
    }

}


int main()
{
    int matrix[5][5];
    int i, j, new_i, new_j;
    constructMatrix(matrix);

    if(matrix[2][2] == 1)
    {
        cout<<0;
    }
    else
    {
        //Find the index where 1 located.
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(matrix[i][j] == 1)
                {
                    new_i = i;
                    new_j = j;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        int result = abs(new_i - 2) + abs(new_j - 2);
        cout<<result;
    }


    return 0;
}