#include <iostream>
using namespace std;

void howManyStickers(int n)
{
    int stickers = n * n * 6;
    cout << "Number of stickers needed: " << stickers;
}

int main()
{
    int sideLength;
    cout << "Enter the side length of Rubik's cube: ";
    cin >> sideLength;
    howManyStickers(sideLength);
    return 0;
}