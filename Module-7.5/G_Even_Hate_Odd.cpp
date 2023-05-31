#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    for (int j = 0; j < t; j++)
    {
        int n, even = 0, odd = 0; cin>>n;
        int a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin>>a[i];
            a[i]%2==0 ? even++:odd++;
        }
        if(even==odd) cout<<"0"<<endl;
        else if(n%2!=0) cout<<"-1"<<endl;
        else cout<<abs(even-odd)/2<<endl;
    }
    
    return 0;
}