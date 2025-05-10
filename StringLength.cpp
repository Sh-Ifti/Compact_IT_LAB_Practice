#include <iostream>
using namespace std;

int strLength(const char* str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }
    return length;
    
}

int main()
{
    const char* givenString = "MY home";

    cout<<"Length of the string is " << strLength(givenString)<<endl;

    return 0;
}