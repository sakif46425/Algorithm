#include<bits/stdc++.h>
using namespace std;

int *mergeTwoArrays(int *A, int n, int *B, int m)
{
    int *c = new int[n+m];
    int i=0, j=0, k=0;

    while(i<=n-1 && j<=m-1)
    {
        if(A[i]>B[j])
        {
            c[k++]=B[j++];
        }
        else
        {
            c[k++]=A[i++];
        }
    }
    while(i<=n-1)
    {
        c[k++]=A[i++];
    }
    while(j<=m-1)
    {
        c[k++]=B[j++];
    }

    return c;
}
void print(int *A, int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int A[]={5,10,40,50,60};
    int B[]={11,13,18,99,101};
    int *c=mergeTwoArrays(A,5,B,5);
    print(c,10);

}

