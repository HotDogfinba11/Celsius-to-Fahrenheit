#include <iostream>

using namespace std;
int celsius;
int fahrenheit;

int main()
{
    cout << "Temperature in celsius:";
    cin >> celsius;

    fahrenheit = ((9 * celsius)/5) + 32;
    cout << "Temperature in fahrenheit is:" << fahrenheit;


    return 0;
}
