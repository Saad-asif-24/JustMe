#include <iostream>
#include <iomanip>
using namespace std;

void calculateCost(float budget, string category, int numPeople)
{
    float left_Amount, tickets;
    if (numPeople >= 1 && numPeople <= 4)
    {
        left_Amount = budget * 0.25;
    }
    else if (numPeople >= 5 && numPeople <= 9)
    {
        left_Amount = budget * 0.4;
    }
    else if (numPeople >= 10 && numPeople <= 24)
    {
        left_Amount = budget * 0.5;
    }
    else if (numPeople >= 25 && numPeople <= 49)
    {
        left_Amount = budget * 0.6;
    }
    else if (numPeople >= 50)
    {
        left_Amount = budget * 0.75;
    }

    if (category == "VIP")
    {
        tickets = numPeople * 499.99;
    }
    if (category == "Normal")
    {
        tickets = numPeople * 249.99;
    }
    float amount;
    if (left_Amount >= tickets)
    {
        amount = left_Amount-tickets;

        cout<< "Yes! You have " <<setprecision(2)<<(left_Amount - tickets) << " leva left.";
    }
    else
    {
        cout<<"Not enough money! You need " <<setprecision(2)<<(tickets - left_Amount) << " leva";
    }
}
main()
{
    float budget;
    string category;
    int numPeople;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category(VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in group: ";
    cin >> numPeople;

    calculateCost(budget, category, numPeople);
}
