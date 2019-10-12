#include<iostream>
#include<math.h>
using namespace std;
bool isArmstrong(int n){
    int sum = 0;
    int num = n;
    while(n>0)
    {
        int rem = n%10;
        sum = sum + rem*rem*rem;
        n=n/10;
    }
    if(sum == num)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin>>n;
    isArmstrong(n)?cout<<"true":cout<<"false";
    return 0;
}
