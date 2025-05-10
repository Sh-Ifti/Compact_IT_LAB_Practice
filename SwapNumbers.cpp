#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << "Before swap " << " a: " << a << " and b: " << b << endl;

    a = a + b; // a + b = 30
    b = a - b; // a = 30, b = 20; b = a - b = 30 - 20 = 10, which is prev value of a
    a = a - b; // a = 30, b = 10; a = 30 - 10 = 20; which is the prev value of b

    cout << "After swap " << " a: " << a << " and b: " << b << endl;

    return 0;
}