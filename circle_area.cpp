// Algorithm Challenge
// 18 – Circle Area

#include <iostream>
#include <cmath> // for mathematical functions like pow()
using namespace std;

int main()
{
    float radius, area;
    const float PI = 3.14159; // use a constant for better readability

    // Ask the user to enter the radius
    cout << "Enter the radius: ";
    cin >> radius;

    // Calculate the area of the circle
    // Formula: area = π * r^2
    area = PI * pow(radius, 2);

    // Display the result
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
