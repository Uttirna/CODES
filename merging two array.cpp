//merges two sorted arrays one having space m+n and m elements another with n space and n elements
#include<iostream>
using namespace std;

void mergearr(int *a,int *b,int m,int n)
{
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0&&j>=0)
    {
        if(a[i]>=b[j])
        {
            a[k]=a[i];
            i--;
            k--;
        }
        else
        {
            a[k]=b[j];
            j--;
            k--;
        }
    }
    if(j>=0)
    {
        while(j>=0)
        {
            a[k]=b[j];
            j--;
            k--;
        }
    }
    return;
}



int main()
{
    int m,n,a[100],b[100];
    cin>>m;
    cin>>n;
    cout<<"enter first array";
    for(int i=0;i<m;i++)
        cin>>a[i];
    cout<<"enter second array";
    for(int i=0;i<n;i++)
        cin>>b[i];
    mergearr(a,b,m,n);
    for(int i=0;i<m+n;i++)
        cout<<a[i]<<" ";
    return 0;
}

