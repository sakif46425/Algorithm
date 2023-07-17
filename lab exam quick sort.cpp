#include<bits/stdc++.h>
using namespace std;

class Sort
{
private:
    int *a;
    int n;

public:
    Sort(int *p, int n)
    {
        a = new int[n];
        this->n = n;

        for(int i = 0; i < n; i++)
        {
            a[i] = p[i];
        }
    }

    void printList()
    {
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void bubble()
    {
        for(int k = 0; k < n; k++)
        {
            for(int i = 0; i < n-1; i++)
            {
                if(a[i] > a[i+1])
                    swap(a[i], a[i+1]);
            }
        }
    }

    void quicksort(int low, int high)
    {
        if (low < high)
        {
            int pivotIndex = partition(low, high);
            quicksort(low, pivotIndex - 1);
            quicksort(pivotIndex + 1, high);
        }
    }

    int partition(int low, int high)
    {
        int pivot = a[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++)
        {
            if (a[j] < pivot)
            {
                i++;
                swap(a[i], a[j]);
            }
        }

        swap(a[i + 1], a[high]);
        return i + 1;
    }

    ~Sort()
    {
        delete[] a;
    }
};

int main()
{
    int m[] = {4, 10, 6, 7, 19, 30};
    Sort s(m, 6);
    cout << "Original List: ";
    s.printList();
    s.bubble();
    cout << "Sorted List (Bubble Sort): ";
    s.printList();

    Sort s2(m, 6);
    s2.quicksort(0, 5);
    cout << "Sorted List (Quicksort): ";
    s2.printList();

    return 0;
}

