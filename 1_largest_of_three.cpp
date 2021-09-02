#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
cout<<"enter num";    
cin>>a>>b>>c;
if(a==1)
    cout<<b+c;
else if(a==2)
    cout<<b-c;
else if(a==3)
cout<<b*c;
else
cout<<"invalid input";

return 0;
}