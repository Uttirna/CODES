#include<iostream>
using namespace std;

void bubble_sort(int *a,int n)
{
    int round,i;
    for(round=1;round<n;round++)
    {
        for(i=0;i<=n-1-round;i++)
        {
            if(a[i+1]<a[i])
            {
                 swap(a[i+1],a[i]);
            }
        }
    }
    return ;

}

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" " ;
    return 0;
}


