#include <iostream>
using namespace std;

void calculateFuel(float d)
{
    float fuel = d * 10;
    cout << "Fuel needed: " << fuel;
}

int main()
{
    float distance;
    cout << "Enter distance: ";
    cin >> distance;
    calculateFuel(distance);
    return 0;
}