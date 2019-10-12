#include<iostream>
#include<cstring>
using namespace std;

void print_substrings(char *a)
{
    int i=0,j;
    while(a[i]!='\0')
    {
        j=i;
        while(a[j]!='\0')
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k];
            }
            cout<<endl;
            j++;
        }
        i++;
    }
    return;
}


int main()
{
    char a[100];
    cin>>a;
    print_substrings(a);
    return 0;
}
