#include <iostream>
using namespace std;

float discount(string day, string month, float amount);

int main()
{
    string day, month;
    float amount;
    cout << "Enter purchase day: ";
    cin >> day;
    cout << "Enter purchase month: ";
    cin >> month;
    cout << "Enter purchase amount: ";
    cin >> amount;
    cout << "Payable amount after discount: " << discount(day, month, amount);
    return 0;
}

float discount(string day, string month, float amount)
{
    float payable = amount;
    if (day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        payable = amount - (amount * 10) / 100;
    }

    return payable;
}