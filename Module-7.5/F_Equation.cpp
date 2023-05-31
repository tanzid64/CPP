#include<bits/stdc++.h>
using namespace std;
void equation(long long int x,int n)
{
    long long int result = 0;
    for (int i = 2; i <= n; i+=2)
    {
        long long int t = x;
        for (int j = 1; j < i; j++)
        {
            t = t*x;
        }
        result+=t;
    }
    cout<<result;
}
int main()
{
    int x,n; cin>>x>>n;
    equation(x,n);
    return 0;
}