#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    double width, height, radius;
    double area;

    cout << "Geometry Calculator\n";
    cout << "\t1. Calculate the Area of Circle\n";
    cout << "\t2. Calculate the Area of Rectangle\n";
    cout << "\t3. Calculate the Area of Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    /*
    Code your program here
    Use switch statement

    */

    // Use the following print statements to print the output
    cout << left << setprecision(2) << fixed;
    cout << "The area is " << area << endl;
}