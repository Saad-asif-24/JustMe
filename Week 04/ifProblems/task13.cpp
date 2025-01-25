#include <iostream>
#include <string>
using namespace std;

float lowestPrice(int n, string t);

int main()
{
    int kilometers;
    string time;
    cout << "Enter the number of kilometers(1-5000): ";
    cin >> kilometers;
    cout << "Enter the period of the day(day/night): ";
    cin >> time;

    cout << "Lowest price for " << kilometers << " kilometers: " << lowestPrice(kilometers, time) << " EUR";
    return 0;
}

float lowestPrice(int distance, string period)
{
    float taxi = 1e9, bus = 1e9, train = 1e9;
    // for taxi
    if (period == "day")
    {
        taxi = 0.7 + 0.79 * distance;
    }
    else if (period == "night")
    {
        taxi = 0.7 + 0.90 * distance;
    }

    // for bus
    if ((distance > 20 && distance < 100) && (period == "day" || period == "night"))
    {
        bus = 0.09 * distance;
    }

    // for train
    if ((distance >= 100) && (period == "day" || period == "night"))
    {
        train = 0.06 * distance;
    }

    if (taxi < bus && taxi < train)
    {
        return taxi;
    }
    if (bus < taxi && bus < train)
    {
        return bus;
    }
    else
    {
        return train;
    }
}