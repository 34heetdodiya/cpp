#include <iostream>
using namespace std;

int main()
{
    int num, reversednum = 0, originalnum, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    originalnum = num;   // Save the original number

    while (num != 0)
    {
        remainder = num % 10;
        reversednum = reversednum * 10 + remainder;
        num /= 10;
    }

    cout << "Original number: " << originalnum << endl;
    cout << "Reversed number: " << reversednum << endl;

    return 0;
}