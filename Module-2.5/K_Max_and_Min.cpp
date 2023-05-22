#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maximum = INT_MIN, minimum = INT_MAX;
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
        maximum = max(maximum,a[i]);
        minimum = min(minimum,a[i]);
    }
    cout<<minimum<<" "<<maximum;
    return 0;
}