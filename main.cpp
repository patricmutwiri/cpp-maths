#include <iostream>

using namespace std;

int main()
{
    float x,y, product,sum,divs,subs;
    cout << "Enter x ";
    cin>>x;
    cout << "Enter y ";
    cin>>y;
    product = x*y;
    divs = x/y;
    subs = x-y;
    sum = x+y;
    cout<<"The output of "<<x<<" and "<<y<<" is ";
    cout<<"Sum "<<sum<<"\nProduct "<<product<<"\nDivision"<<divs<<"\nSubs"<<subs;

    return 0;
}
