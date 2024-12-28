#include <iostream>
#include <string>
using namespace std;

void calculatePayableAmount(string d, double p)
{
    double disc, payableAmount;
    if (d == "Sunday" || d == "sunday")
    {
        disc = p * 0.1;
        payableAmount = p - disc;
        cout << "Payable amount: $" << payableAmount;
    }
    else
    {
        cout << "Payable amount: $" << p;
    }
}

int main()
{
    string day;
    cout << "Enter purchase day: ";
    cin >> day;
    double purchase;
    cout << "Enter purchase amount: ";
    cin >> purchase;
    calculatePayableAmount(day, purchase);
    return 0;
}