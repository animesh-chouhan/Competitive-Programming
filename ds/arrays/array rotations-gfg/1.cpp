#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

void printarray(int arr[], int n)
{
        for (int i = 0; i < n; i++)
                cout << arr[i]<<" ";
        cout << "\n";
}

// method 1
int rotate1(int arr[], int d, int n)
{
        int temp[10];
        for (int i = 0; i < d; i++)
                temp[n - d + i] = arr[i];
        for (int i = d; i < n; i++)
                temp[i - d] = arr[i];
        for (int i = 0; i < n; i++)
                arr[i] = temp[i];
        printarray(arr, n);
}

// method 2
int rotate2(int arr[], int d, int n)
{
        int temp[d];
        for (int i = 0; i < d; i++)
                temp[i] = arr[i];
        for (int i = d; i < n; i++)
                arr[i - d] = arr[i];
        for (int i = 0; i < d; i++)
                arr[n - d + i] = temp[i];
        printarray(arr, n);
}

// method 3
int rotate3(int arr[], int d, int n)
{
        int temp;
        while (d--)
        {
                temp = arr[0];
                for (int i = 1; i < n; i++)
                        arr[i - 1] = arr[i];
                arr[n - 1] = temp;
                printarray(arr, n);
        }
}

// method 4
int gcd(int a, int b)
{
        if (b == 0)
                return a;
        gcd(b, a % b);
}

int rotate4(int arr[], int d, int n)
{
        int step = gcd(n, d);
        while (d> 0)
        {
                for (int i = 0; i < step; i++)
                {
                        int temp = arr[i];
                        for (int j = i; j < n - step; j += step)
                        {
                                arr[j] = arr[j + step];        
                        }
                        arr[n - step + i] = temp;
                        printarray(arr, n);
                }
                d=d-1;
        }
}

bool compare(int num1, int num2)
{
        return(num1>num2);
} 

int main()
{
        int n = 10;
        int array[n];
        for (int i = 0; i < n; i++)
                array[i] = i;

        rotate4(array, 3, n);
 
}
