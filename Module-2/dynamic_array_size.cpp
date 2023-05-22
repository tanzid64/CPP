#include<bits/stdc++.h>
using namespace std;
int main()
{
    int * a = new int[5];
    //Input
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    //copy
    int b[7];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[5] = 60;
    b[6] = 70;
    //Delete array
    delete[] a;
    //Output
    for (int i = 0; i < 7; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}