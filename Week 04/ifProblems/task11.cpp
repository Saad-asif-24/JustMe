#include <iostream>
using namespace std;

string checkSpeed(float s);

int main()
{
    float speed;
    cout << "Enter speed: ";
    cin >> speed;
    cout << checkSpeed(speed);
    return 0;
}

string checkSpeed(float s)
{
    if (s <= 10)
    {
        return "slow";
    }
    if ((s > 10) && (s <= 50))
    {
        return "average";
    }
    if ((s > 50) && (s <= 150))
    {
        return "fast";
    }
    if ((s > 150) && (s <= 1000))
    {
        return "ultra-fast";
    }
    if (s > 1000)
    {
        return "extremely fast";
    }
}
