/*        */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    //int **arr;
    
    cin>>n>>q;
    int ele_arr[n];
    int *arr[n];
    int i;
    //arr= new int *[n-1];
    for(i=0;i<n;i++)
    {
        cin>>ele_arr[i];
        arr[i]= new int [(ele_arr[i])];
        for(int j=0;j<ele_arr[i];j++)
        {
            cin>>arr[i][j];

        }
    }
/*int s,d,f,g;
cin>>s>>d; 
cin>>f>>g;
cout<<s<<d; 
cout<<f<<g;?*/
    
        int ii,jj,kkk,lll;
        cout<<"\n"<<q<<"\n";
        for(int k=0;k<q;k++)
        {
            cin>>ii>>jj;
            cout<<"\n"<<"element"<<arr[ii][jj]<<"\n";
            
        }
    



    return 0;
}