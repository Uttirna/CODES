//calculate square root of a number after n precisions after decimal
#include<iostream>
using namespace std;
int main()
{
    int N,t;
    cin>>N;
    float i=1;
    float inc=1;
    cout<<"enter precision";
    cin>>t;
    t++;
    while(t--){
        while(i*i<=N)
        {
            i=i+inc;
        }
        i=i-inc;
        inc=inc/10;
    }
    cout<<i;
}
