#include<bits/stdc++.h>
using namespace std;

int *leftshift(int *m,int k,int n)
{
    for(int j=0;j<k;j++)
    {
        for(int i=1;i<n;i++)
        {
            m[i-1]=m[i];
        }
    }
    for(int i=n-k;i<n;i++)
    {
        m[i]=0;
    }

    return m;
}

void printList(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[]={10,20,30,40,50,60};
    int *p = leftshift(a,3,6);
    printList(p,6);

    return 0;
}


