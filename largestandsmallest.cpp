#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int swap =0;
    cout<<"\n enter the no. you want to enter :-";
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++)
    {
        cout<<"\n enter the value of "<<i+1<<":-";
        cin>>arr[i];

    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }
    for( i=0;i<n-1;i++)
    {
        for( j=0;j<n-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = swap;
            }
        }
    }
    cout<<endl;
    cout<<"\n smallest number = "<<arr[0];
    cout<<"\n largest number = "<<arr[n-1];
    return 0;
}