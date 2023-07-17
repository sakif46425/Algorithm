#include<bits/stdc++.h>
using namespace std;



class Sorting {
public:
    Sorting() {}



    static void quickSort(int* arr, int low, int high) {
        if (low < high) {
            int pivotIndex = partition(arr, low, high);



            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }



    static int partition(int* arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;



        for (int j = low; j <= high - 1; ++j) {
            if (arr[j] < pivot) {
                ++i;
                swap(arr[i], arr[j]);
            }
        }



        swap(arr[i + 1], arr[high]);
        return i + 1;
    }



    static void bubbleSort(int* arr, int size) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};



void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main() {
    int n = 100000;
    Sorting* s = new Sorting();



    int* arr = new int[n];
    ifstream fin("100k.txt");



    for (int i = 0; i < n; i++) {
        fin >> arr[i];
    }



    clock_t start, end;
    double time_taken;



    // Quick Sort
    start = clock();
    s->quickSort(arr, 0, n - 1);
    end = clock();
    time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by quickSort: " << fixed << time_taken << setprecision(5) << " sec" << endl;



    // Bubble Sort
    start = clock();
    s->bubbleSort(arr, n);
    end = clock();
    time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by bubbleSort: " << fixed << time_taken << setprecision(5) << " sec" << endl;



    delete[] arr;
    delete s;



    return 0;
}
