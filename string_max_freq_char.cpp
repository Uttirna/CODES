//returns char having maximum freq in the string
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int Max=0,index,farr[26]={0};
    char str[1000];
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        index = str[i]-'a';
        farr[index]++;
    }
    for(int i=0;i<26;i++)
    {
        if(farr[i]>farr[Max])
        {
            Max=i;
        }
    }
    char key='a'+ Max;
    cout<<key<<endl;
    return 0;
}
