#include <iostream>
#include <math.h>

using namespace std;

int parent(int index, int n)
{
    if (index <= 0 || index > n)
        return -1;
    else
        return (index - 1) / 2;
}

int leftChild(int index, int n)
{
    int val = index * 2 + 1;
    if (index < 0 || val > n)
        return -1;
    else
        return val;
}

int rightChild(int index, int n)
{
    int val = index * 2 + 2;
    if (index < 0 || val > n)
        return -1;
    else
        return val;
}

void printHeap(int* heap, int n)
{   
    int j=2;
    for(int i=0; i<=n; i++)
    {
        cout<<heap[i]<<" ";
        if(i == j-2)
        {
            cout<<"\n";
            j*=2;
        }
    }
    cout<<"\n";
}

void maxHeapify(int* heap, int n, int k)
{
    // for (int i = 0; i <= n; i++)
    //     cout << heap[i] << " ";
    // cout << "\n";

    int temp = heap[k];
    int right = rightChild(k, n);
    int left = leftChild(k, n);

    if (left != -1 && right != -1)
    {
        int max = heap[k];
        if (heap[right] > max)
            max = heap[right];
        if (heap[left] > max)
            max = heap[left];

        if (heap[right] == max)
        {
            heap[k] = heap[right];
            heap[right] = temp;
            maxHeapify(heap, n, right);
        }
        else if (heap[left] == max)
        {
            heap[k] = heap[left];
            heap[left] = temp;
            maxHeapify(heap, n, left);
        }
    }

    else if (left != -1 && right == -1)
    {

        if (heap[left] > heap[k])
        {
            heap[k] = heap[left];
            heap[left] = temp;
            maxHeapify(heap, n, left);
        }
    }

    else if (left == -1 && right != -1)
    {

        if (heap[left] > heap[k])
        {
            heap[k] = heap[right];
            heap[right] = temp;
            maxHeapify(heap, n, right);
        }
    }
}

void buildMaxHeap(int *heap, int n)
{

    for(int i=n; i>=0; i--)
        maxHeapify(heap, n , i);

}

void heapSort(int *heap, int n)
{   
    int sorted[n+1]; 
    for(int i=0; i<=n ;i++)
    {   
        buildMaxHeap(heap, n-i);
        sorted[i] = heap[0];
        heap[0] = heap[n-i];
    }
    
    for(int i=0; i<=n ; i++) cout<<sorted[i]<<" ";
    cout<<"\n";
}


int main()
{
    int heap[] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    int n = sizeof(heap) / sizeof(heap[0]) - 1;

    // cout << parent(1, n) << "\n";
    // cout << leftChild(2, n) << "\n";
    // cout << parent(n, n) << "\n";
    // cout << leftChild(3, n) << "\n";
    // cout << rightChild(3, n) << "\n";

    printHeap(heap, n);
    maxHeapify(heap, n, 1);
    cout<<"\n";
    printHeap(heap, n);
    cout<<"\n";

    int heap2[] = {1, 8, 2, 3, 9, 7, 14, 10, 4, 16};
    int n2=sizeof(heap2) / sizeof(heap2[0]) - 1;
    printHeap(heap2, n2);
    buildMaxHeap(heap2, n2);
    cout<<"\n";
    printHeap(heap2, n2);
    cout<<"\n";
    heapSort(heap2, n);
}