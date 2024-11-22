#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int a;
    char flag = 'y';
    do{
    cout<<"\nenter the value :-";
    cin>>a;
    cout<<endl;
    cout<<"factorial of" << a <<"is :-"<<factorial(a)<<endl; 
    cout<<"wish to continue[Y/N] :-";
    flag = getche();
    }
    while(flag=='y' || flag == 'Y');
}

