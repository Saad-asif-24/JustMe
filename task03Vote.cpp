#include <iostream>
using namespace std;

void Vote(int a)
{
    if (a >= 18)
    {
        cout << "You are eligible to vote";
    }
    else
    {
        cout << "You are not eligible to vote";
    }
}

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    Vote(age);
    return 0;
}
