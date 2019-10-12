#include<iostream>
using namespace std;

void selection(int *a,int n)
{
    int i,minIndex,j;
    for(i=0;i<n-1;i++)
    {
        minIndex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[minIndex]>a[j])
            {
                minIndex=j;
            }
        }
        swap(a[minIndex],a[i]);
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    selection(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" " ;
    return 0;
}

