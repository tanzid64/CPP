#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i]; 
    }
    delete[] a;
    for (int i = 0; i < m; i++)
    {
        if(i>=n) cin>>b[i];
        cout<<b[i]<<" ";
    }
    
    return 0;
}