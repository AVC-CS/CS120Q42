#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double rate1 = 1.10;
    const double rate2 = 2.20;
    const double rate3 = 3.70;
    const double rate4 = 4.80;
    double total_charge;
    double weight, distance, rate;

    cout << "Enter the package weight and distance: ";
    cin >> weight >> distance;

    /*
    Code you program here
    */

    // Use the followig print statements
    cout << setw(10) << left << setprecision(2) << fixed;
    cout << total_charge << endl;
}