//two methods 1st is by address 2nd is iterative way
#include<iostream>
using namespace std;

bool isSorted(int *a,int n)
{
    if(n==1||n==0)
    {
        return true;
    }
    bool choteka_ans = isSorted(a+1,n-1);
    if(a[0]<=a[1]&&choteka_ans)
    {
        return true;
    }
    return false;
}

bool isSorted1(int *a,int i,int n)
{
    if(i==n-1)
        return true;
    bool choteka_ans = isSorted1(a,i+1,n);
    if(a[i]<=a[i+1]&&choteka_ans)
    {
        return true;
    }
    return false;

}

int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    isSorted(a,n)?cout<<"sorted ":cout<<"not sorted";
    isSorted1(a,0,n)?cout<<"sorted ":cout<<"not sorted";
    return 0;
}
