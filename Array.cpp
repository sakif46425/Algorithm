#include<iostream>
using namespace std;

int sumArray(int *a, int n )
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(a+i);
    }
    return sum;
}

int main()
{
    int a[]={10,20,30,40,50};
    int result= sumArray(a,5);
    cout<<result<<endl;

}


