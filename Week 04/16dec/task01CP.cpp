#include <iostream>
using namespace std;

string VolumeOfPyramid(float, float, float, string);
main()
{
    float length, width, height;
    string units;
    cout << "Enter the length of pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of pyramid(in meters): ";
    cin >> width;
    cout << "Enter the height of pyramid(in meters): ";
    cin >> height;
    cout << "Enter the desired output unit(millimeters, centimeters, meters, kilometers): ";
    cin >> units;
    string result = VolumeOfPyramid(length, width, height, units);
    cout << result;
}

string VolumeOfPyramid(float length, float width, float height, string units)
{
    float volume = (length * width * height) / 3;

    if (units == "millimeters")
    {
        volume *= 1000 * 1000 * 1000;
        units = "mm^3";
    }
    else if (units == "centimeters")
    {
        volume *= 1000 * 1000;
        units = "cm^3";
    }
    else if (units == "meters")
    {
        units = "m^3";
    }
    else if (units == "kilometers")
    {
        volume /= 1000 * 1000 * 1000;
        units = "km^3";
    }
    return "The volume of the pyramid is " + to_string(volume) + " " + units;
}
