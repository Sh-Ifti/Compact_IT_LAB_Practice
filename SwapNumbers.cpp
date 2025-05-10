#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    if (x != y)
    {
        *x = *x ^ *y;
        *y = *x ^ *y;
        *x = *x ^ *y;
    }
}

int main()
{
    int a = 10, b = 20;

    cout << "Before swap " << " a: " << a << " and b: " << b << endl;

    swap(&a, &b);

    cout << "After swap " << " a: " << a << " and b: " << b << endl;

    return 0;
}