//prints a 2d array in wave style(google it)
#include<iostream>
using namespace std;

void wave_print(int (*a)[4],int n,int m)
{
    int i,j;
    for(j=0;j<m;j++)
    {
        if(j%2)
        {
            for(i=n-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
}

int main()
{
    int a[3][4]={{0,1,2,3},
                {4,5,6,7},
                {8,9,10,11}};
    wave_print(a,3,4);
    return 0;
}
