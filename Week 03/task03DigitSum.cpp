#include <iostream>
using namespace std;

int digitSum(int n)
{
    int sum = 0, rem;
    while (n > 0)
    {
        rem = n % 10; // 3
        sum += rem;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits: " << digitSum(num);
    return 0;
}