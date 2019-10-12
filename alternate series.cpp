//returns sum of series -1+2-3+4-5+6.....
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
                k=-i;
            else
                k=i;
            sum=sum+k;
        }
        cout<<sum<<endl;
    }
    return 0;
}
