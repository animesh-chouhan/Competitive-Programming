#include <iostream>

using namespace std;

template <size_t row, size_t col>
void print_array(int (&arr)[row][col])
{
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < row; ++j)
            cout << arr[i][j] << " ";
}

int main(int argc, const char *argv[])
{
    int a[10][5];
    print_array(a);
    cout << "\n";

    for (int i = 0; i < argc; ++i)
        cout << argv[i];

    return 0;
}