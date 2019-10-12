#include<iostream>
using namespace std;

int bin_search(int *a,int s,int e,int key)
{
    int mid =(s+e)/2;
    if(s>e)
    {
        return -1;
    }
    if(a[mid]==key)
    {
        return mid;
    }
    if(a[mid]<key)
    {
        bin_search(a,mid+1,e,key);
    }
    else
    {
        bin_search(a,s,mid-1,key);
    }
}

int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key;
    cin>>key;
    int ans=bin_search(a,0,n-1,key);
    ans==-1?cout<<"Not found"<<endl:cout<<"found at index"<<ans<<endl;
    return 0;
}
