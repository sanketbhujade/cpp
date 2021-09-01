/*leap year is a year in which 
1)divisible by 4 and and NOT by 100
2)divisible by 400
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
cout<<"enter year"<<endl;    
cin>>year;
if((year%4==0) &&  (year%100!=0))
    cout<<year<<" is leap year";
else if ((year%400==0))
cout<<year<<" is leap year";
else
cout<<"not a leap year";

return 0;
}