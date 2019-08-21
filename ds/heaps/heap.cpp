#include <iostream>

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

void maxHeapify(int *heap, int n, int k)
{
    for (int i = 0; i <= n; i++)
        cout << heap[i] << " ";
    cout << "\n";

    int temp = heap[k];
    int right = rightChild(k, n);
    int left = leftChild(k, n);

    if (left != -1 && right != -1)
    {
        int max = heap[k];
        if (heap[right] > max)
            max = heap[right];
        else if (heap[left] > max)
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

// void buildMaxHeap(int *heap, int n)
// {
//     for(int i=0;i<=n; i++) cout<<heap[i]<<" ";
//     cout<<"\n";

//     for(int i=0; i<=n; i++)
//         maxHeapify(heap, n , i);

// }

int main()
{
    int heap[] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    int n = sizeof(heap) / sizeof(heap[0]) - 1;

    cout << parent(1, n) << "\n";
    cout << leftChild(2, n) << "\n";
    cout << parent(n, n) << "\n";
    cout << leftChild(3, n) << "\n";
    cout << rightChild(3, n) << "\n";

    maxHeapify(heap, n, 1);
}