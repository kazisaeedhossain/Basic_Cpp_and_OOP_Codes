#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int sum;
    for(int i = 0; i<=100;i+=5)
    {
        sum+=i;
        cout<<i<<" ";
    }
    cout<<" = "<<sum;

    return 0;
}
