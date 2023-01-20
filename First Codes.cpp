#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b;
    cout<<"Enter two value = ";
    cin>>a>>b;

    if(a>b)
    {
        cout<<a<<" is greater than "<<b<<" !!!";
    }
    else if(a<b)
    {
        cout<<a<<" is less then "<<b<<" !!!";
    }
    else
        cout<<a<<" and "<<b<<" are equal !!!";

    return 0;
}
