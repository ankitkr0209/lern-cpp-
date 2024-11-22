#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char string1[] = "c++ ";
     char string2[20] = "programming";
    int n = strlen(string1);
    int m = strlen(string2);
    for(int i=0;i<m;i++)
    {
        cout.write(string2,i);
        cout<<endl;
    }
    for(int i=m;i>0;i--)
    {
        cout.write(string2,i);
        cout<<endl;
    }
    // cout.write(string1,n).write(string2,m);
    cout<<endl;
    cout.write(string1,5);
    cout<<"ram";

}