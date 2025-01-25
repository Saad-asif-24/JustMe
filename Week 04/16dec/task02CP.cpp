#include<iostream>
#include<iomanip>
using namespace std;

float taxCalculator(char,float);
main()
{
    char Vehicle_Code;
    float price;

    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> Vehicle_Code;
    cout << "Enter the price of the vehicle: $";
    cin >> price;

    float Vehicle_price_after_tax = taxCalculator( Vehicle_Code,price);
    cout << fixed << setprecision(2);
    cout << "The final price of a vehicle of type " << Vehicle_Code << " after adding the tax is $" << Vehicle_price_after_tax;
}
float taxCalculator(char Vehicle_Code, float price)
{
    float  price_after_tax;
    if (Vehicle_Code == 'M')
    {
        price_after_tax = price + (price*0.06);
        
    }
    else if (Vehicle_Code == 'E')
    {
       price_after_tax = price + (price*0.08);

    }
    else if (Vehicle_Code == 'S')
    {
        price_after_tax = price + (price*0.10);

    }
    else if (Vehicle_Code == 'V')
    {
        price_after_tax = price + (price*0.12);

    }
    else if (Vehicle_Code == 'T')
    {
        price_after_tax = price + (price*0.15);

    }
    return price_after_tax;
}