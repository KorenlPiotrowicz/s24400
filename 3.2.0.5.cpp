#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

void quicksort(int A[], int lo, int hi);
int partition(int A[], int lo, int hi);

int main()
{
    srand (time(NULL));
    int tab_size = 64;
    int A[tab_size] = {0};
    for (int i=0; i<tab_size; i++){
        A[i] = rand() % 200 + 1;
    }
    quicksort(A, 0, tab_size);
    for (int i=0; i<tab_size; i++){
        cout << A[i] << " ";
    }

    return 0;
}

void quicksort(int A[], int lo, int hi){
    int p;
    if (lo >= 0 && hi >= 0 && lo < hi){
        p = partition(A, lo, hi);
        quicksort(A, lo, p);
        quicksort(A, p+1, hi);
    }
}

int partition(int A[], int lo, int hi){
    int pivot = A[(hi + lo) / 2];
    int i = lo - 1;
    int j = hi + 1;

    while (true){
        do {
            i++;
        } while(A[i] < pivot);
        do{
            j--;
        } while(A[j] > pivot);

        if (i >= j){
            return j;
        }
        swap(A[i], A[j]);
    }
}