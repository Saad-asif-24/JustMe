#include <iostream>
using namespace std;

string paratyAnalysis(int n,int s);
int sum(int n);

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int S = sum(num);
    cout << paratyAnalysis(num,S);
    return 0;
}

int sum(int n)
{
    int sum = 0, rem;
    while (n > 0)
    {
        rem = n % 10; 
        sum += rem;
        n /= 10;
    }
    return sum;
}
string paratyAnalysis(int n,int sum)
{
    

    // for even
    if ((sum % 2 == 0) && (n % 2 == 0))
    {
        return "true";
    }

    // for odd
    if (!(sum % 2 == 0) && !(n % 2 == 0))
    {
        return "true";
    }

    if ((sum % 2 == 0) && !(n % 2 == 0))
    {
        return "false";
    }

    if (!(sum % 2 == 0) && (n % 2 == 0))
    {
        return "false";
    }
}
