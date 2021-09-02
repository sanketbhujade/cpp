/*  sumof evens  till n      */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    while(n!=0)
    {
        if(n%2==0)
        {
        sum=sum+n;
        n--;
        }
        else
        {
            n--;
        }


    }
    cout<< "sum is :"<<sum<<endl;
    
    return 0;
}