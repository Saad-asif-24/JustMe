#include <iostream>
using namespace std;

string checkTitle(int a, string g);

int main()
{
    int age;
    string gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender(m/f): ";
    cin >> gender;
    cout << "Your personal title is: " << checkTitle(age, gender);
    return 0;
}

string checkTitle(int a, string g)
{
    if (g == "m")
    {
        if (a >= 16)
        {
            return "Mr.";
        }
        else
        {
            return "Master";
        }
    }
    if (g == "f")
    {
        if (a >= 16)
        {
            return "Ms.";
        }
        else
        {
            return "Miss";
        }
    }
}