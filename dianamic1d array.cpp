#include<bits/stdc++.h>
using namespace std;

void printArray(int *m, int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<m[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter size of array "<<endl;

    cin>>n;

    int *a = new int[n];

    ofstream fout("5k.txt");

    for(int i=0;i<n;i++)
    {
        //fin>>a[i];
        //cout<<a[i];
        //a[i]= (rand()%1000)+1;
        fout<<a[i];
    }

    printArray(a,n);
}
