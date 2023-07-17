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

    /*~Sort()
    {
        delete[] a;
    }*/
};

int main()
{
    int m[] = {4, 10, 6, 7, 19, 30};
    Sort s(m, 6);
    cout << "Original List: ";
    s.printList();
    s.bubble();
    cout << "Sorted List: ";
    s.printList();

    return 0;
}

