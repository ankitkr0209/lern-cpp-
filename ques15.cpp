#include<iostream>
using namespace std;
int add(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n+add(n-1);
    }
}
int main()
{
    int n;
    cout<<"\n enter number :-";
    cin>>n;
    if(n>0)
    {
    cout<<"\n addition of first "<<n<<" natural number = "<<add(n);
    }
    else{
        cout<<"\n entered number is not a natural number ";
        
    }
    return 0;
}