#include<iostream>
using namespace std;

bool check_permutation(char *a,char *b)
{
    int farr[26]={0};
    int index;
    for(int i=0;a[i]!='\0';i++)
    {
        index=a[i]-'a';
        farr[index]++;
    }
    for(int i=0;b[i]!='\0';i++)
    {
        index=b[i]-'a';
        farr[index]--;
    }
    for(int i=0;i<26;i++)
    {
        if(farr[i])
            return false;
    }
    return true;
}

int main()
{
    char a[100],b[100];
    cin>>a;
    cin>>b;
    check_permutation(a,b)?cout<<"permutation of each other":cout<<"Not permutation";
    return 0;
}
