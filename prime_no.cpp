#include<iostream>

using namespace std;
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout<<"entre value  :-";
    cin>>n;
    for(int i=2;i<n;i++)
    {
    
    if(prime(i)==0)
    {
        // system("cls");
        cout<<i<<"\t";
        // system("cls");
    }
    }

}