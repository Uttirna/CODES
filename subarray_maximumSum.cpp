#include<iostream>
#include<climits>
using namespace std;

int maxsub_Arr(int *a,int n)
{
    int i,j,k,m=INT_MIN;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int sum=0;
            for(k=i;k<=j;k++)
            {
                sum=sum+a[k];
            }
            if(m<sum)
                m=sum;
        }
    }
    return m;
}


int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"maximum sum of subarray "<<maxsub_Arr(a,n)<<endl;
    return 0;
}
