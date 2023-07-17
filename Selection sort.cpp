#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndex = i;
        for (int j=i+1;j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<<" ";

    }

    cout<< endl;
}

int main()
{
    int arr[] = {5,2,4,6,1,3};
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout<< "original array: ";
    printArray(arr,n);

    SelectionSort(arr,n);
    cout<<"Sorted array: ";
    printArray(arr,n);

    return 0;
}
