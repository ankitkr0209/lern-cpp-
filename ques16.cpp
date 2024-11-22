// Write a recursive function that finds factorial of a number?
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;

    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    cout<<"\n enter the number you want a factorial :-";
    cin>>n;
    cout<<"\n factorial of "<<n<<" =  "<<factorial(n);
    return 0;
}