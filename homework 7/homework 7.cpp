//Author: Robert Ward
//For homework 7
//Purpose: to calculate the area of a triangle and the hypotenuse of a triangle.

#include <iostream>

using namespace std;

/*I had to change the formula to calculate some of these but the test process was decently easy, I had
run into an issue where I accidentally used ints for my functions inputs instead of doubles which set me back a little.
*/


double hypotenuse (double opposite, double adjecent) {
    return sqrt(pow(opposite, 2) + pow(adjecent, 2));
}

double area (double opposite, double adjecent) {
    return (opposite * adjecent) / 2;
}

int main () {

int opposite, adjecent;

while (true) {
    cout << "please enter two numbers in order to calculate the area of a triangle the hypotenuse of a triangle 1.) opposite 2.) adjecent." << endl << endl;

    cout << "1: ";

    cin >> opposite;

    cout << "2: ";

    cin >> adjecent;

    cout << endl << "the area of the triangle is: " << area(opposite, adjecent) << endl;

    cout << "the hypotenuse of the triangle is: " << hypotenuse(opposite, adjecent) << endl << endl;

}

return 0;
}