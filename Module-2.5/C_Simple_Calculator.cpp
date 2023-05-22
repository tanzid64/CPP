#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum,  mult, x, y, sub;
    cin>>x>>y;
    mult = x*y;
    sum = x+y;
    sub = x-y;
    
    cout<<x<<" + "<<y<<" = "<<sum<<endl<<x<<" * "<<y<<" = "<<mult<<endl<<x<<" - "<<y<<" = "<<sub;
    return 0;
}