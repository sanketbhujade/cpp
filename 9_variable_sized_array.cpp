// program uses dynamic array concept with pointers
#include <cmath>
#include <cstdio>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n,q;
    //int **arr;
    
    cin>>n>>q;
    int ele_arr[n];
    int *arr[n-1];
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
        int ii,jj;
        while(q!=0)
        {
            cin>>ii>>jj;
            cout<<arr[ii][jj]<<"\n";
            q--;
        }
    
    return 0;
}
