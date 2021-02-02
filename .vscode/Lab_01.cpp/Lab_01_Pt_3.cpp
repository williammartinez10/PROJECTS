#include <iostream>

using namespace std;
// Complete or correct the following C++ function sqr(number).
// It should return the square of integer parameter called number.

int sqr(int number) {
    int final = number * number;
    return final;
    //return 0; // YOUR ANSWER GOES HERE

}

int main()
{
    cout << sqr(-5);
    cout << sqr(-7);
    return 0;
}