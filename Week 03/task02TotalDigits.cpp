#include <iostream>
using namespace std;

int totalDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Total number of digits in the number is: " << totalDigits(num);
    return 0;
}