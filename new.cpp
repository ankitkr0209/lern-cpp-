// #include <iostream> 

// using namespace std; 

  
// // base class 

// class Vehicle { 

// public: 

//     Vehicle() { cout << "This is a Vehicle\n"; } 
// }; 

  
// // first sub_class derived from class vehicle 

// class fourWheeler : public Vehicle { 

// public: 

//     fourWheeler() 

//     { 

//         cout << "Objects with 4 wheels are vehicles\n"; 

//     } 
// }; 
// // sub class derived from the derived base class fourWheeler 

// class Car : public fourWheeler { 

// public: 

//     Car() { cout << "Car has 4 Wheels\n"; } 
// }; 

  
// // main function 

// int main() 
// { 

//     // Creating object of sub class will 

//     // invoke the constructor of base classes. 

//     Car obj; 

//     return 0; 
// }
//Write a program in c++ to find mean of continous series by using width. 
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    float ul[20],ll[20],f[20],x[20],fx[20],sum_of_f=0,sum_of_fx=0,mean;

    cout<<"Enter the number of class interval u want to entered:";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the class interval "<<i<<" of lower and upper limit: "<<endl;
        cin>>ll[i]>>ul[i];
        cout<<"Enter the frequency "<<i<<" :";
        cin>>f[i];
    }
    cout<<endl<<endl;

    cout.width(8);
    cout<<"Class Interval(CI)";
    cout.width(18);
    cout<<"Frequency (f)";
    cout.width(18);
    cout<<"Mid value (x)";
    cout.width(8);
    cout<<"fx"<<endl;

    for(i=1;i<=n;i++)
    {
        cout.width(8);
        cout<<ll[i]<<"-"<<ul[i];
        cout.width(18);
        cout<<f[i];
        x[i]=(ll[i]+ul[i])/2;
        cout.width(18);
        cout<<x[i];
        fx[i]=f[i]*x[i];
        cout.width(15);
        cout<<fx[i]<<endl;
    }

    cout.width(33);
    cout<<"---------";
    cout.width(31);
    cout<<"------"<<endl;

    cout.width(30);
    for(i=1;i<=n;i++)
    {
        sum_of_f+=f[i];
    }
    cout<<sum_of_f;

    cout.width(33);
    for(i=1;i<=n;i++)
    {
        sum_of_fx+=fx[i];
    }
    cout<<sum_of_fx<<endl;
    
    mean=sum_of_fx/sum_of_f;
    cout<<"\nMean is "<<mean<<endl;
}