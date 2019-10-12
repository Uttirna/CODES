#include<iostream>
using namespace std;

bool find_key(int *a,int n,int key)
{
    if(n==0)
        return false;

    int ans = find_key(a+1,n-1,key);
    if(a[0]==key&&ans)
    {
        return true;
    }
    return false;
}



int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    find_key(a,n,key)?cout<<"found":cout<<"not found";
    return 0;
}
