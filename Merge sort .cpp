#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;


    int  L[n1], R[n2];

    for(i=0; i<n1; i++)
        L[i] = arr[l+1];
    for(j=0; j<n2; j++)
        R[j]= arr[m+1+j];

    i=0;
    j=0;
    k=l;

    while( i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }

        k++;


    }

    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m = l + (r-l)/2;
        MergeSort(arr, l, m);
        MergeSort(arr, m+1,r);
        Merge(arr,l,m,r);
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
        cout<< arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] ={64,25,12,22,11};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    printArray(arr, arrsize);
    MergeSort(arr,0, arrsize-1);
    cout<<"Sorted array: ";
    printArray(arr,arrsize);


    return 0;
}
