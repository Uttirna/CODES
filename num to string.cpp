#include<iostream>
using namespace std;

string s[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void int_to_string(int n)
{
    if(n==0)
        return ;
    int_to_string(n/10);
    int index=n%10;
    cout<<s[index]<<" ";
    return;

}

int main()
{
    int n;
    cin>>n;
    int_to_string(n);
    return 0;
}
