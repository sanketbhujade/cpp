/*    
1
23
456
78910

    */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,ll,pp;
    int tempn =0;

    cin>>n;
    ll=pp;

    for(i=ll;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {
            cout<<j+tempn;
            m=j;
        }
        cout<<"\n";
        tempn=tempn+m;
pp=i;
    }
    return 0;
}