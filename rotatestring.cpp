#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    cin>>a;
    int n;
    cin>>n;
    int i,j,length=strlen(a);
    for(i=1;i<=n;i++)
    {
        char card=a[length-i];
        for(j=length-i-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[i-1]=card;
    }

    cout<<a<<endl;

}
