#include <iostream>
using namespace std;

bool isPalindrome(int n)
{

    int original = n;
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return original == rev;
}

int main()
{
    int num;

    cin >> num;

    if (isPalindrome(num))
    {
        cout << num << " is palindrome";
    }
    else
    {
        cout << num << " is not palindrome";
    }

    return 0;
}