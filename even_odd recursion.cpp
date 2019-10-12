//prints odd uptill 1 then even uptill n
#include<iostream>
using namespace std;
void printeven(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<endl;
    printeven(i+2,n);
    return;
}
void printodd(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    printodd(n-2);
    return;
}

int main()
{
    int n;
    cin>>n;
    printodd(n);
    printeven(2,n);
    return 0
}
