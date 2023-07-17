/*#include<bits/stdc++.h>
using namespace std;

class sort
{
private:
    int *a;
    int n;

public:
    sort(int n,int *p)
    {
        a=new int[n];
        this-> n=n;

        for(int i=0;i<n;i++)
        {
            a[i]=p[i];
        }
    }

    void printList()
    {
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
    }

    int * bubble()
    {
        for(int k=0; k<n; k++)
        {

        for(int i=0; i<n-1;i++)
        {
            if(a[i]>a[i+1])
                swap(a[i],a[i+1]);
        }
        }
    }

};

int main()
{
    int m[]={4,10,6,7, 19, 30};
    sort *s = new sort();
    s->printList(m,6);
    s->bubble(m,6);
    s->printList(m,6);

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
class Sort
{

public:
    Sort(){}

    void printList(int *a,int n)
    {
      for(int i=0;i<n;i++)
    {
        cout<< a[i]<<" ";
    }
    cout<<endl;
    }
    void bubble(int *a,int n)
    {
       for(int k=0;k<n;k++){ for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                swap(a[i],a[i+1]);
        }
    }

}

int partition(int *arr,int low, int hi)
{
	int pivot=arr[hi];
	int i=low-1;
	for(int j=low;j<hi;j++)
	{
		if(arr[j]<pivot)
		{
			i++;

			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}


	}

	i++;
		int temp=arr[i];
		arr[i]=pivot;
		arr[hi]=temp;
		return i;
}


void quicksort(int *arr,int low,int hi)
{
	if(low<hi)
	{
		int pidx=partition(arr,low,hi);
		quicksort(arr,low,pidx-1);
		quicksort(arr,pidx+1,hi);

	}
}
};
int main()
{
    int m[]={4,10,6,7,19,30};
    Sort *s=new Sort();
    s->printList(m,6);
    s-> bubble(m,6);
    s->printList(m,6);
    s->quicksort(m,0,6-1);
    s->printList(m,6);

}

