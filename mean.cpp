#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"\n enter the no. of value :-";
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cout<<"\n enter the value of "<<i+1<<":-";
        cin>>a[i];

    }
    // printing th value of x
    cout<<"\n x = ";
    float mean =0;
    for(i=0;i<n;i++)
    {
        mean+=a[i];
        cout<<"\t"<<a[i];
    }
    mean = mean/n;
    cout<<"\n mean = "<<mean;
    float m_dif = 0;
    for(i=0;i<n;i++)
    {
        m_dif += ((a[i] - mean)*(a[i] - mean));

    }
    cout<<"\n m_diff ="<<m_dif;
    float mean_dev = 0;
    mean_dev = sqrt((m_dif/n));
    cout<<"\n mean deviation of this obsrervation is :-"<<mean_dev;



}
