#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int a[], int low, int high)
{
    int pivot = a[high], pivot_index = high;
    
    int i = low;
    while (i < pivot_index)
    {
        if (a[i] > pivot)
        {
            swap(a[i], a[pivot_index - 1]), swap(a[pivot_index - 1], a[pivot_index]);
            pivot_index -- ;
        }
        else i ++ ;
    }

    return pivot_index;
}

void quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        int loct = partition(a, low, high);
        // cout << loct << endl;
        quicksort(a, low, loct - 1), quicksort(a, loct + 1, high);
    }
}

int main()
{
    int a[] = {2, 5, 6, 2, 22, 3, 8, 7, 9, 1, 4, 5, 9, 7, 9};

    // cout << sizeof a / 4 - 1 << endl;
    quicksort(a, 0, sizeof a / 4 - 1);

    for (int i = 0; i < sizeof a / 4; i ++ ) cout << a[i] << ' ';

    return 0;
}