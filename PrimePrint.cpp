#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int start, limit;

    cin >> start;
    cin >> limit;

    int count = 0;
    int num = start;

    while (count < 15)
    {
        if (isPrime(num))
        {
            cout << num << " ";
            count++;
        }

        num++;
    }

    return 0;
}