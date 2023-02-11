/*--------------Find to the Maximum and minimum number from an Array---------------*/
#include<iostream>
using namespace std;

int main ()
{
    int Num[100],n,i;
    cout<<"How many Number in Array : ";
    cin>>n;

    for(i=0;i<n;i++) 
    {
        cin>>Num[i];
    }

    int max = Num[0];
     for(i=1;i<n;i++)
    {
        if(max < Num[i])
        {
            max = Num[i];
        }
    }

    int min = Num[0];
    for(i=1;i<n;i++)
    {
        if(min > Num[i])
        {
            min = Num[i];
        }
    }

    cout<<"Maximum Number is = "<<max<<endl;
    cout<<"Minimum Number is = "<<min<<endl;
    return 0;
}
