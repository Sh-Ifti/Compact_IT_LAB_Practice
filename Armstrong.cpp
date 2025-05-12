#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int rem;
    int sum = 0;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n /= 10;
    }
    if (sum == temp)
        cout << temp << " is Armstrong";
    else
        cout << temp << " is not Armstrong";

    return 0;
}