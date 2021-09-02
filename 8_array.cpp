
#include <iostream>

using namespace std;


int main() {
int n,arr[10000];
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>arr[i];
    
}
for(int j=n;j>0;j--)
{
    cout<<arr[j]<<" ";
}


    return 0;
}
