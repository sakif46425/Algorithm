#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Please Enter the Size of Array:";
    cin>>n;
    int *a= new int[n];

    for(int i;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
