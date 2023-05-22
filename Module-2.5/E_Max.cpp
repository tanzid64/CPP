#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, maximum = INT_MIN;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        maximum = max(maximum,a[i]);
    }
    cout<<maximum;
    return 0;
}